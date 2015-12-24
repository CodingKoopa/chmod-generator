#include "dialog.h"
#include "ui_dialog.h"

#include <QDebug>

void Dialog::comBoxGen()
{

    //get each combo box index
    int root(ui->rootBox->currentIndex());
    int user(ui->userBox->currentIndex());
    int world(ui->worldBox->currentIndex());

    //configure args
    QString args = argConfg();

    //output choices and pathOut to output box
    ui->output->document()->setPlainText("chmod " + args + QString::number(root) + QString::number(user)
    + QString::number(world) + " " + ui->pathOut->toPlainText());

    write();
}

void Dialog::cheBoxGen()
{
    int root;

    //if read is enabled, increment count by 4
    if (ui->rReadBox->isChecked() == true)
    {
        root+= 4;
    }

    //if read is enabled, increment count by 2
    if (ui->rWriteBox->isChecked() == true)
    {
        root+= 2;
    }

    //if read is enabled, increment count by 4
    if (ui->rExeBox->isChecked() == true)
    {
        root+= 1;
    }

    int user;

    //if read is enabled, increment count by 4
    if (ui->uReadBox->isChecked() == true)
    {
        user+= 4;
    }

    //if read is enabled, increment count by 2
    if (ui->uWriteBox->isChecked() == true)
    {
        user+= 2;
    }

    //if read is enabled, increment count by 4
    if (ui->uExeBox->isChecked() == true)
    {
        user+= 1;
    }

    int world;

    //if read is enabled, increment count by 4
    if (ui->wReadBox->isChecked() == true)
    {
        world+= 4;
    }

    //if read is enabled, increment count by 2
    if (ui->wWriteBox->isChecked() == true)
    {
        world+= 2;
    }

    //if read is enabled, increment count by 4
    if (ui->wExeBox->isChecked() == true)
    {
        world+= 1;
    }

    //configure args
    QString args = argConfg();

    //output choices and pathOut to output box
    ui->output->document()->setPlainText("chmod " + args + QString::number(root) + QString::number(user) + QString::number(world) + " " + ui->pathOut->toPlainText());
}

QString Dialog::argConfg()
{
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
    return args;
}
