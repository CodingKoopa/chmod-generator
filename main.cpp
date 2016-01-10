#include "dialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    //program init
    QApplication program(argc, argv);
    Dialog window;
    window.show();

    //execute
    return program.exec();
}
