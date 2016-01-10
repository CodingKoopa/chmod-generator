#include <QFileDialog>
#include <QClipboard>
#include <QMessageBox>
#include <QProcess>

#include "dialog.h"
#include "ui_dialog.h"

#include "remember.h"
#include "shortcuts.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    //setup ui
    ui->setupUi(this);

    //title
    QWidget::setWindowTitle("CHMOD Generator");

    //create and assign button shortcuts
    createShortcuts(ui);

    //change pathOut to contents of recentpath.txt
    ui->pathOut->document()->setPlainText(read());

    //set tab defaults
    ui->permissionsTab->setCurrentIndex(0);
    ui->cheBoxTabs->setCurrentIndex(0);
}

Dialog::~Dialog()
{
    //unallocate mem
    delete ui;
}

void Dialog::on_browse_clicked()
{
    //create file dialog
    QString path = QFileDialog::getOpenFileName();

    //set pathOut box based on the path
    ui->pathOut->document()->setPlainText(path);

    //write path to txt
    write(path);
}

void Dialog::on_run_clicked()
{
    //get chmod command from output box
    QString chmodCom = ui->chmodOut->toPlainText();

    //if user didn't press gen
    if(chmodCom == "")
    {
        QMessageBox::information(this, "Error", "You didn't press generate, silly!");
        return;
    }

    //terminal init
    QProcess terminal;

    //exec chmod command
    terminal.start(chmodCom);

    //wait for finish
    terminal.waitForFinished(-1);

    //stream results to string
    QString errors = terminal.readAllStandardError();
    QString both = terminal.readAllStandardOutput();
    both.append(errors);

    //if group wants feedback and there is output to show
    if(ui->verMod->isChecked() == true && both != "")
    {
        QMessageBox::information(this, "Chmod", both);
    }

    //if there's an error, show it even if user doesn't want feedback
    else if(errors != "")
    {
        QMessageBox::critical(this, "Chown", errors);
    }

    //get chown command
    QString chownCom = ui->chownOut->toPlainText();

    //if the chown box has anything
    if (chownCom != "")
    {
        //exec chown command
        terminal.start(chownCom);

        //wait for finish
        terminal.waitForFinished(-1);

        //stream results to string
        QString errors = terminal.readAllStandardError();
        QString both = terminal.readAllStandardOutput();
        both.append(errors);

        //if group wants feedback and there is output to show
        if(ui->verOwn->isChecked() == true && both != "")
        {
            QMessageBox::information(this, "Chown", both);
        }
        //if there's an error, show it even if user doesn't want feedback
        else if(errors != "")
        {
            QMessageBox::critical(this, "Chown", errors);
        }
    }
    //exit
    terminal.terminate();
}

void Dialog::on_copy_clicked()
{
    //clipboard init
    QClipboard *clip = QApplication::clipboard();

    QString text = ui->chmodOut->toPlainText();
    text.append("\n");
    text.append(ui->chownOut->toPlainText());

    //copy output
    clip->setText(text);
}
