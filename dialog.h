#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui
{
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private slots:
    void on_copy_clicked();
    void on_run_clicked();
    void on_browse_clicked();
    void on_gen_clicked();

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
