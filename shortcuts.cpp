#include <QShortcut>

#include "shortcuts.h"

void createShortcuts(Ui::Dialog *ui)
{
    //BUTTONS

    //make generate sc
    QShortcut *ctrlG = new QShortcut(QKeySequence("CTRL+G"), ui->gen);
    //put into effect
    QObject::connect(ctrlG, SIGNAL(activated()), ui->gen, SLOT(click()));

    //make run sc
    QShortcut *ctrlR = new QShortcut(QKeySequence("CTRL+R"), ui->run);
    //put into effect
    QObject::connect(ctrlR, SIGNAL(activated()), ui->run, SLOT(click()));

    //make copy sc
    QShortcut *ctrlC = new QShortcut(QKeySequence("CTRL+C"), ui->copy);
    //put into effect
    QObject::connect(ctrlC, SIGNAL(activated()), ui->copy, SLOT(click()));

    //make browse sc
    QShortcut *ctrlB = new QShortcut(QKeySequence("CTRL+B"), ui->browse);
    //put into effect
    QObject::connect(ctrlB, SIGNAL(activated()), ui->browse, SLOT(click()));

    //OPTIONS

    //verbose chmod
    QShortcut *ctrlV = new QShortcut(QKeySequence("CTRL+V"), ui->verMod);
    //put into effect
    QObject::connect(ctrlV, SIGNAL(activated()), ui->verMod, SLOT(toggle()));

    //verbose chow
    QShortcut *shCtrlV = new QShortcut(QKeySequence("SHIFT+CTRL+V"), ui->verOwn);
    //put into effect
    QObject::connect(shCtrlV, SIGNAL(activated()), ui->verOwn, SLOT(toggle()));

    //protect root chmod
    QShortcut *shCtrlP = new QShortcut(QKeySequence("SHIFT+CTRL+P"), ui->protRootOwn);
    //put into effect
    QObject::connect(shCtrlP, SIGNAL(activated()), ui->protRootOwn, SLOT(toggle()));

    //protect root chmod
    QShortcut *CtrlP = new QShortcut(QKeySequence("CTRL+P"), ui->protRootMod);
    //put into effect
    QObject::connect(CtrlP, SIGNAL(activated()), ui->protRootMod, SLOT(toggle()));

    //subdirectory chmod
    QShortcut *ctrlS = new QShortcut(QKeySequence("CTRL+S"), ui->subMod);
    //put into effect
    QObject::connect(ctrlS, SIGNAL(activated()), ui->subMod, SLOT(toggle()));

    //subdirectory chown
    QShortcut *shCtrlS = new QShortcut(QKeySequence("SHIFT+CTRL+S"), ui->subOwn);
    //put into effect
    QObject::connect(shCtrlS, SIGNAL(activated()), ui->subOwn, SLOT(toggle()));

    //make force sc
    QShortcut *ctrlF = new QShortcut(QKeySequence("CTRL+F"), ui->force);
    //put into effect
    QObject::connect(ctrlF, SIGNAL(activated()), ui->force, SLOT(toggle()));
}
