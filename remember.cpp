#include <QDir>
#include <QTextStream>

#include "remember.h"

QString read()
{
    //get current dir
    QString path = QDir::currentPath();

    //create QFile based off current dir
    QFile file(path + "/recent.txt");

    //if cannot read file
    if (!file.open(QFile::ReadOnly | QFile::Text))
    {
        return "";
    }

    //make txt stream based off file
    QTextStream in (&file);

    //read
    QString text = in.readAll();

    //flush and close
    in.flush();
    file.close();

    //return the contents of the txt file
    return text;
}

void write(QString contents)
{
    //get current dir
    QString path = QDir::currentPath();

    //create QFile based off current dir
    QFile file(path + "/recent.txt");

    //if cannot read to file
    if (!file.open(QFile::WriteOnly | QFile::Text))
    {
        return;
    }

    //make txt stream based off file
    QTextStream out (&file);

    //write pathOut box contents to txt
    out << contents;

    //nothing to return
    return;
}
