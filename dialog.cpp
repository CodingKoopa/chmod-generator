#include "dialog.h"
#include "ui_dialog.h"

#include <QFileDialog>
#include <QClipboard>
#include <QMessageBox>

#include <QDebug>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    //setup ui
    ui->setupUi(this);

    //title
    QWidget::setWindowTitle("CHMOD Generator");

    //add items to combo boxes(full function in addcomboboxitems.cpp)
    addItems();

    //create and assign button shortcuts
    createShortcuts();

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

void Dialog::addItems()
{
    //make a string for each item
    QString n("None");
    QString x("Execute");
    QString w("Write");
    QString wx("Write and Execute");
    QString r("Read");
    QString rx("Read and Execute");
    QString rw("Read and Write");
    QString rwx("Read, Write and Execute");

    //put the strings into a list
    QStringList list = (QStringList() << n << x << w << wx << r << rx << rw << rwx);

    //put the lists into the combo boxes
    ui->rootBox->addItems(list);
    ui->userBox->addItems(list);
    ui->worldBox->addItems(list);
};

void Dialog::on_browse_clicked()
{
    //create file dialog
    QString path = QFileDialog::getOpenFileName();

    //set pathOut box based
    ui->pathOut->document()->setPlainText(path);

    //write path to txt
    write();
}

void Dialog::on_gen_clicked()
{
    /*The program has to know whether the user
     * is using the check boxes or the combo
     * boxes, so it checks the current index
     * of the permissions tab.
     */
    if (ui->permissionsTab->currentIndex() == 0)
    {
        comBoxGen();
    }

    if (ui->permissionsTab->currentIndex() == 1)
    {
        cheBoxGen();
    }
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
    QString output = terminal.readAllStandardOutput();
    output.append(terminal.readAllStandardError());

    //if user wants feedback
    if(ui->verMod->isChecked() == true)
    {
        QMessageBox::information(this, "Chmod", output);
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
        QString output = terminal.readAllStandardOutput();
        output.append(terminal.readAllStandardError());

        //if user wants feedback
        if(ui->verOwn->isChecked() == true)
        {
            QMessageBox::information(this, "Chown", output);
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
