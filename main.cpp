#include "dialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    //program init
    QApplication a(argc, argv);
    Dialog w;
    w.show();

    //execute
    return a.exec();
}
