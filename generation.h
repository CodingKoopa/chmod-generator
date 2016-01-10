#ifndef GENERATION_H
#define GENERATION_H

#include <QString>

#include "ui_dialog.h"

//proto for getting options/arguments
//we pass the ui as an argument because
//we use a lot of ui elements,too many
//to pass to a function
QString argConfgMod(Ui::Dialog *ui);
QString argConfgOwn(Ui::Dialog *ui);

#endif // GENERATION_H
