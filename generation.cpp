#include "dialog.h"

#include "generation.h"

void Dialog::on_gen_clicked()
{
    //reset both boxes
    ui->chmodOut->document()->setPlainText("");
    ui->chownOut->document()->setPlainText("");

    //The program has to know whether the group
    //is using the check boxes or the combo
    //boxes, so it checks the current index
    //of the permissions tab.

    //if the group is in the combo box tab
    if (ui->permissionsTab->currentIndex() == 0)
    {
        //output "chmod" + args + owner + group + world + path to first box
        ui->chmodOut->document()->setPlainText("chmod " + argConfgMod(ui) + QString::number(ui->ownBox->currentIndex()) +
        QString::number(ui->grpBox->currentIndex()) + QString::number(ui->wldBox->currentIndex()) + " " +
        ui->pathOut->toPlainText());

        //if the group entered something for either chown box, output
        if (ui->owner->toPlainText() != "" || ui->group->toPlainText() != "")
        {
            //output "chown + owner + group + path
            ui->chownOut->document()->setPlainText("chown " + argConfgOwn(ui) + ui->owner->toPlainText() + ":" +
            ui->group->toPlainText() + " " + ui->pathOut->toPlainText());
        }
    }

    //if the group is in the check box tab
    if (ui->permissionsTab->currentIndex() == 1)
    {
        int owner;

        //if read is enabled, increment owner by 4
        if (ui->rReadBox->isChecked() == true)
        {
            owner+= 4;
        }

        //if read is enabled, increment owner by 2
        if (ui->rWriteBox->isChecked() == true)
        {
            owner+= 2;
        }

        //if read is enabled, increment owner by 4
        if (ui->rExeBox->isChecked() == true)
        {
            owner+= 1;
        }

        int group;

        //if read is enabled, increment group by 4
        if (ui->uReadBox->isChecked() == true)
        {
            group+= 4;
        }

        //if read is enabled, increment group by 2
        if (ui->uWriteBox->isChecked() == true)
        {
            group+= 2;
        }

        //if read is enabled, increment group by 4
        if (ui->uExeBox->isChecked() == true)
        {
            group+= 1;
        }

        int world;

        //if read is enabled, increment world by 4
        if (ui->wReadBox->isChecked() == true)
        {
            world+= 4;
        }

        //if read is enabled, increment world by 2
        if (ui->wWriteBox->isChecked() == true)
        {
            world+= 2;
        }

        //if read is enabled, increment world by 4
        if (ui->wExeBox->isChecked() == true)
        {
            world+= 1;
        }

        //output "chmod" + args + owner + group + world + path to first box
        ui->chmodOut->document()->setPlainText("chmod " + argConfgMod(ui) +
        QString::number(owner) + QString::number(group) + QString::number(world) +
        " " + ui->pathOut->toPlainText());

        //if the group entered something for either chown box, output
        if (ui->owner->toPlainText() != "" || ui->group->toPlainText() != "")
        {
            //output "chown + owner + group + path
            ui->chownOut->document()->setPlainText("chown " + argConfgOwn(ui) + ui->owner->toPlainText() + ":" +
            ui->group->toPlainText() + " " + ui->pathOut->toPlainText());
        }
    }
}

QString argConfgMod(Ui::Dialog *ui)
{
    //define arg string
    QString args;

    //if user wants feedback window, add -v to string
    if(ui->verMod->isChecked() == true)
    {
        args.append("-v ");
    }

    //if user wants to protect root, add --preserve-root to string
    if(ui->protRootMod->isChecked() == true)
    {
        args.append("--preserve-root ");
    }

    //if user wants subdirs, add -R to string
    if(ui->subMod->isChecked() == true)
    {
        args.append("-R ");
    }

    //if user wants to force, add -f to string
    if(ui->force->isChecked() == true)
    {
        args.append("-f ");
    }

    //return the string
    return args;
}

QString argConfgOwn(Ui::Dialog* ui)
{
    QString args;
    //if user wants feedback window, add -v to string
    if(ui->verOwn->isChecked() == true)
    {
        args.append("-v ");
    }

    if(ui->protRootOwn->isChecked() == true)
    {
        args.append("--preserve-root ");
    }

    //if user wants subdirs, add -R to string
    if(ui->subOwn->isChecked() == true)
    {
        args.append("-R ");
    }

    //if user wants nodref, add h to string
    //-h = --no-dereference
    //--dereference is default
    if(ui->noderef->isChecked() == true)
    {
        args.append("--no-dereference ");
    }

    //if user entered stuff for only if
    if(ui->oiowner->toPlainText() != "" || ui->oigroup->toPlainText() != "")
    {
        args.append("--from=" + ui->oiowner->toPlainText() + ":" + ui->oigroup->toPlainText() + " ");
    }
    return args;
}
