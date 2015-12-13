#include "dialog.h"
#include "ui_dialog.h"

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
