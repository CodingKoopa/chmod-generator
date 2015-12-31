#include "dialog.h"
#include "ui_dialog.h"

#include <QShortcut>

void Dialog::createShortcuts()
{
    //make generate sc
    QShortcut *ctrlG = new QShortcut(QKeySequence("CTRL+G"), ui->gen);
    //put into effect
    connect(ctrlG, SIGNAL(activated()), ui->gen, SLOT(click()));

    //make run sc
    QShortcut *ctrlR = new QShortcut(QKeySequence("CTRL+R"), ui->run);
    //put into effect
    connect(ctrlR, SIGNAL(activated()), ui->run, SLOT(click()));

    //make copy sc
    QShortcut *ctrlC = new QShortcut(QKeySequence("CTRL+C"), ui->copy);
    //put into effect
    connect(ctrlC, SIGNAL(activated()), ui->copy, SLOT(click()));

    //make browse sc
    QShortcut *ctrlB = new QShortcut(QKeySequence("CTRL+B"), ui->browse);
    //put into effect
    connect(ctrlB, SIGNAL(activated()), ui->browse, SLOT(click()));

    //make force sc
    QShortcut *ctrlF = new QShortcut(QKeySequence("CTRL+F"), ui->force);
    //put into effect
    connect(ctrlF, SIGNAL(activated()), ui->force, SLOT(toggle()));

    //make verbose(feedback) sc
    QShortcut *ctrlV = new QShortcut(QKeySequence("CTRL+V"), ui->verMod);
    //put into effect
    connect(ctrlV, SIGNAL(activated()), ui->verMod, SLOT(toggle()));

    //make subdirectory sc
    QShortcut *ctrlS = new QShortcut(QKeySequence("CTRL+S"), ui->sub);
    //put into effect
    connect(ctrlS, SIGNAL(activated()), ui->sub, SLOT(toggle()));
}
