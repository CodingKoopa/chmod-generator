#include "dialog.h"
#include "ui_dialog.h"

#include <QFileDialog>
#include <QClipboard>
#include <QMessageBox>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    //setup ui
    ui->setupUi(this);
    //title
    QWidget::setWindowTitle("CHMOD Generator");

    //set credit text, because it's annoying to do in design
    ui->credit->setText("<a href=\"https://github.com/TheKoopaKingdom/CHMOD-Generator\">Made with love by TheKoopaKingdom.</a>");
    ui->credit->setOpenExternalLinks(true);

    //add items to combo boxes(full function in addcomboboxitems.cpp)
    addItems();

    //change pathOut to contents of recentpath.txt
    ui->pathOut->document()->setPlainText(read());
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

    //set pathOut box based
    ui->pathOut->document()->setPlainText(path);
}

void Dialog::on_gen_clicked()
{
    //get each combo box index
    int root(ui->rootBox->currentIndex());
    int user(ui->userBox->currentIndex());
    int world(ui->worldBox->currentIndex());

    //configure args
    QString args;
    if(ui->sub->isChecked() == true)
    {
        args.append("-R ");
    }

    if(ui->force->isChecked() == true)
    {
        args.append("-f ");
    }

    if(ui->verbose->isChecked() == true)
    {
        args.append("-v ");
    }

    //output choices and pathOut to output box
    ui->output->document()->setPlainText("chmod " + args + QString::number(root) + QString::number(user)
    + QString::number(world) + " " + ui->pathOut->toPlainText());

    write();
}


void Dialog::on_run_clicked()
{
    //get command from output box
    QString commandFull = ui->output->toPlainText();

    //terminal init
    QProcess terminal;

    //exec chmod command
    terminal.start(commandFull);

    //wait for finish
    terminal.waitForFinished(-1);

    //stream results to string
    QString output = terminal.readAllStandardOutput();
    //if user wants feedback
    if(ui->verbose->isChecked() == true)
    {
        QMessageBox::information(this, "CHMOD", output);
    }

    //exit
    terminal.terminate();
}

void Dialog::on_copy_clicked()
{
    //clipboard init
    QClipboard *clip = QApplication::clipboard();

    //copy output
    clip->setText(ui->output->toPlainText());
}
