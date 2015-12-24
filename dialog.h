#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QProcess>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private slots:
    void on_gen_clicked();
    void on_copy_clicked();
    void on_run_clicked();
    void on_browse_clicked();

private:
    Ui::Dialog *ui;

    //proto for addcomboboxitems
    void addItems();

    //proto for returning recentpath.txt and writing to it
    QString read();
    void write();

    //proto for creating scs
    void createShortcuts();

    //proto for generating combobox output
    void comBoxGen();

    //proto for generation checkbox output
    void cheBoxGen();

    //proto for getting options/arguments
    QString argConfg();
};

#endif // DIALOG_H
