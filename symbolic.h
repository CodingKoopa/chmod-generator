#ifndef SYMBOLIC_H
#define SYMBOLIC_H

#include <QDialog>

namespace Ui {
class symbolic;
}

class symbolic : public QDialog
{
    Q_OBJECT

public:
    explicit symbolic(QWidget *parent = 0);
    ~symbolic();

private:
    Ui::symbolic *ui;
};

#endif // SYMBOLIC_H
