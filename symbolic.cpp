#include "symbolic.h"
#include "ui_symbolic.h"

symbolic::symbolic(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::symbolic)
{
    ui->setupUi(this);
}

symbolic::~symbolic()
{
    delete ui;
}
