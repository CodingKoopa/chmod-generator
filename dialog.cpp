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

    createShortcuts();

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
