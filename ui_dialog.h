/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout;
    QVBoxLayout *browseLay;
    QPushButton *browse;
    QPlainTextEdit *pathOut;
    QHBoxLayout *chownLay;
    QVBoxLayout *ownerLay;
    QLabel *ownerLab;
    QPlainTextEdit *owner;
    QVBoxLayout *groupLay;
    QLabel *groupLab;
    QPlainTextEdit *group;
    QTabWidget *permissionsTab;
    QWidget *comBoxTab;
    QVBoxLayout *verticalLayout;
    QLabel *ownLab;
    QComboBox *ownBox;
    QLabel *grpLab;
    QComboBox *grpBox;
    QLabel *worldLab;
    QComboBox *wldBox;
    QWidget *cheBoxTab;
    QVBoxLayout *verticalLayout_3;
    QTabWidget *cheBoxTabs;
    QWidget *rootTab;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *rReadBox;
    QCheckBox *rWriteBox;
    QCheckBox *rExeBox;
    QWidget *userTab;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *uReadBox;
    QCheckBox *uWriteBox;
    QCheckBox *uExeBox;
    QWidget *worldTab;
    QVBoxLayout *verticalLayout_6;
    QCheckBox *wReadBox;
    QCheckBox *wWriteBox;
    QCheckBox *wExeBox;
    QWidget *symb;
    QVBoxLayout *verticalLayout_7;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QVBoxLayout *optionLay;
    QLabel *chmodLab;
    QCheckBox *verMod;
    QCheckBox *protRootMod;
    QCheckBox *subMod;
    QCheckBox *force;
    QFrame *line;
    QLabel *chownLab;
    QCheckBox *verOwn;
    QCheckBox *protRootOwn;
    QCheckBox *subOwn;
    QCheckBox *noderef;
    QHBoxLayout *onlyIfLay;
    QLabel *onlyIfLab;
    QPlainTextEdit *oiowner;
    QLabel *colonLab;
    QPlainTextEdit *oigroup;
    QVBoxLayout *outputLay;
    QPushButton *gen;
    QHBoxLayout *outputTextLay;
    QPlainTextEdit *chmodOut;
    QPlainTextEdit *chownOut;
    QHBoxLayout *copyRun;
    QPushButton *run;
    QPushButton *copy;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(509, 656);
        verticalLayout_2 = new QVBoxLayout(Dialog);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        browseLay = new QVBoxLayout();
        browseLay->setSpacing(6);
        browseLay->setObjectName(QStringLiteral("browseLay"));
        browse = new QPushButton(Dialog);
        browse->setObjectName(QStringLiteral("browse"));

        browseLay->addWidget(browse);

        pathOut = new QPlainTextEdit(Dialog);
        pathOut->setObjectName(QStringLiteral("pathOut"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pathOut->sizePolicy().hasHeightForWidth());
        pathOut->setSizePolicy(sizePolicy);
        pathOut->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);

        browseLay->addWidget(pathOut);


        formLayout->setLayout(0, QFormLayout::LabelRole, browseLay);

        chownLay = new QHBoxLayout();
        chownLay->setSpacing(6);
        chownLay->setObjectName(QStringLiteral("chownLay"));
        ownerLay = new QVBoxLayout();
        ownerLay->setSpacing(6);
        ownerLay->setObjectName(QStringLiteral("ownerLay"));
        ownerLab = new QLabel(Dialog);
        ownerLab->setObjectName(QStringLiteral("ownerLab"));

        ownerLay->addWidget(ownerLab);

        owner = new QPlainTextEdit(Dialog);
        owner->setObjectName(QStringLiteral("owner"));

        ownerLay->addWidget(owner);


        chownLay->addLayout(ownerLay);

        groupLay = new QVBoxLayout();
        groupLay->setSpacing(6);
        groupLay->setObjectName(QStringLiteral("groupLay"));
        groupLab = new QLabel(Dialog);
        groupLab->setObjectName(QStringLiteral("groupLab"));

        groupLay->addWidget(groupLab);

        group = new QPlainTextEdit(Dialog);
        group->setObjectName(QStringLiteral("group"));

        groupLay->addWidget(group);


        chownLay->addLayout(groupLay);


        formLayout->setLayout(0, QFormLayout::FieldRole, chownLay);

        permissionsTab = new QTabWidget(Dialog);
        permissionsTab->setObjectName(QStringLiteral("permissionsTab"));
        sizePolicy.setHeightForWidth(permissionsTab->sizePolicy().hasHeightForWidth());
        permissionsTab->setSizePolicy(sizePolicy);
        permissionsTab->setUsesScrollButtons(false);
        comBoxTab = new QWidget();
        comBoxTab->setObjectName(QStringLiteral("comBoxTab"));
        verticalLayout = new QVBoxLayout(comBoxTab);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        ownLab = new QLabel(comBoxTab);
        ownLab->setObjectName(QStringLiteral("ownLab"));

        verticalLayout->addWidget(ownLab);

        ownBox = new QComboBox(comBoxTab);
        ownBox->setObjectName(QStringLiteral("ownBox"));

        verticalLayout->addWidget(ownBox);

        grpLab = new QLabel(comBoxTab);
        grpLab->setObjectName(QStringLiteral("grpLab"));

        verticalLayout->addWidget(grpLab);

        grpBox = new QComboBox(comBoxTab);
        grpBox->setObjectName(QStringLiteral("grpBox"));

        verticalLayout->addWidget(grpBox);

        worldLab = new QLabel(comBoxTab);
        worldLab->setObjectName(QStringLiteral("worldLab"));

        verticalLayout->addWidget(worldLab);

        wldBox = new QComboBox(comBoxTab);
        wldBox->setObjectName(QStringLiteral("wldBox"));

        verticalLayout->addWidget(wldBox);

        permissionsTab->addTab(comBoxTab, QString());
        cheBoxTab = new QWidget();
        cheBoxTab->setObjectName(QStringLiteral("cheBoxTab"));
        verticalLayout_3 = new QVBoxLayout(cheBoxTab);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        cheBoxTabs = new QTabWidget(cheBoxTab);
        cheBoxTabs->setObjectName(QStringLiteral("cheBoxTabs"));
        rootTab = new QWidget();
        rootTab->setObjectName(QStringLiteral("rootTab"));
        verticalLayout_4 = new QVBoxLayout(rootTab);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        rReadBox = new QCheckBox(rootTab);
        rReadBox->setObjectName(QStringLiteral("rReadBox"));

        verticalLayout_4->addWidget(rReadBox);

        rWriteBox = new QCheckBox(rootTab);
        rWriteBox->setObjectName(QStringLiteral("rWriteBox"));

        verticalLayout_4->addWidget(rWriteBox);

        rExeBox = new QCheckBox(rootTab);
        rExeBox->setObjectName(QStringLiteral("rExeBox"));

        verticalLayout_4->addWidget(rExeBox);

        cheBoxTabs->addTab(rootTab, QString());
        userTab = new QWidget();
        userTab->setObjectName(QStringLiteral("userTab"));
        verticalLayout_5 = new QVBoxLayout(userTab);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        uReadBox = new QCheckBox(userTab);
        uReadBox->setObjectName(QStringLiteral("uReadBox"));

        verticalLayout_5->addWidget(uReadBox);

        uWriteBox = new QCheckBox(userTab);
        uWriteBox->setObjectName(QStringLiteral("uWriteBox"));

        verticalLayout_5->addWidget(uWriteBox);

        uExeBox = new QCheckBox(userTab);
        uExeBox->setObjectName(QStringLiteral("uExeBox"));

        verticalLayout_5->addWidget(uExeBox);

        cheBoxTabs->addTab(userTab, QString());
        worldTab = new QWidget();
        worldTab->setObjectName(QStringLiteral("worldTab"));
        verticalLayout_6 = new QVBoxLayout(worldTab);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        wReadBox = new QCheckBox(worldTab);
        wReadBox->setObjectName(QStringLiteral("wReadBox"));

        verticalLayout_6->addWidget(wReadBox);

        wWriteBox = new QCheckBox(worldTab);
        wWriteBox->setObjectName(QStringLiteral("wWriteBox"));

        verticalLayout_6->addWidget(wWriteBox);

        wExeBox = new QCheckBox(worldTab);
        wExeBox->setObjectName(QStringLiteral("wExeBox"));

        verticalLayout_6->addWidget(wExeBox);

        cheBoxTabs->addTab(worldTab, QString());

        verticalLayout_3->addWidget(cheBoxTabs);

        permissionsTab->addTab(cheBoxTab, QString());
        symb = new QWidget();
        symb->setObjectName(QStringLiteral("symb"));
        verticalLayout_7 = new QVBoxLayout(symb);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        pushButton = new QPushButton(symb);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_7->addWidget(pushButton);

        label = new QLabel(symb);
        label->setObjectName(QStringLiteral("label"));
        label->setTextFormat(Qt::RichText);
        label->setWordWrap(true);

        verticalLayout_7->addWidget(label);

        label_2 = new QLabel(symb);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setWordWrap(true);

        verticalLayout_7->addWidget(label_2);

        permissionsTab->addTab(symb, QString());

        formLayout->setWidget(1, QFormLayout::LabelRole, permissionsTab);

        optionLay = new QVBoxLayout();
        optionLay->setSpacing(6);
        optionLay->setObjectName(QStringLiteral("optionLay"));
        chmodLab = new QLabel(Dialog);
        chmodLab->setObjectName(QStringLiteral("chmodLab"));
        chmodLab->setEnabled(true);

        optionLay->addWidget(chmodLab);

        verMod = new QCheckBox(Dialog);
        verMod->setObjectName(QStringLiteral("verMod"));

        optionLay->addWidget(verMod);

        protRootMod = new QCheckBox(Dialog);
        protRootMod->setObjectName(QStringLiteral("protRootMod"));

        optionLay->addWidget(protRootMod);

        subMod = new QCheckBox(Dialog);
        subMod->setObjectName(QStringLiteral("subMod"));

        optionLay->addWidget(subMod);

        force = new QCheckBox(Dialog);
        force->setObjectName(QStringLiteral("force"));

        optionLay->addWidget(force);

        line = new QFrame(Dialog);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        optionLay->addWidget(line);

        chownLab = new QLabel(Dialog);
        chownLab->setObjectName(QStringLiteral("chownLab"));

        optionLay->addWidget(chownLab);

        verOwn = new QCheckBox(Dialog);
        verOwn->setObjectName(QStringLiteral("verOwn"));

        optionLay->addWidget(verOwn);

        protRootOwn = new QCheckBox(Dialog);
        protRootOwn->setObjectName(QStringLiteral("protRootOwn"));

        optionLay->addWidget(protRootOwn);

        subOwn = new QCheckBox(Dialog);
        subOwn->setObjectName(QStringLiteral("subOwn"));

        optionLay->addWidget(subOwn);

        noderef = new QCheckBox(Dialog);
        noderef->setObjectName(QStringLiteral("noderef"));

        optionLay->addWidget(noderef);

        onlyIfLay = new QHBoxLayout();
        onlyIfLay->setSpacing(6);
        onlyIfLay->setObjectName(QStringLiteral("onlyIfLay"));
        onlyIfLab = new QLabel(Dialog);
        onlyIfLab->setObjectName(QStringLiteral("onlyIfLab"));

        onlyIfLay->addWidget(onlyIfLab);

        oiowner = new QPlainTextEdit(Dialog);
        oiowner->setObjectName(QStringLiteral("oiowner"));
        oiowner->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        onlyIfLay->addWidget(oiowner);

        colonLab = new QLabel(Dialog);
        colonLab->setObjectName(QStringLiteral("colonLab"));

        onlyIfLay->addWidget(colonLab);

        oigroup = new QPlainTextEdit(Dialog);
        oigroup->setObjectName(QStringLiteral("oigroup"));
        oigroup->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        onlyIfLay->addWidget(oigroup);


        optionLay->addLayout(onlyIfLay);


        formLayout->setLayout(1, QFormLayout::FieldRole, optionLay);


        verticalLayout_2->addLayout(formLayout);

        outputLay = new QVBoxLayout();
        outputLay->setSpacing(6);
        outputLay->setObjectName(QStringLiteral("outputLay"));
        gen = new QPushButton(Dialog);
        gen->setObjectName(QStringLiteral("gen"));

        outputLay->addWidget(gen);

        outputTextLay = new QHBoxLayout();
        outputTextLay->setSpacing(6);
        outputTextLay->setObjectName(QStringLiteral("outputTextLay"));
        chmodOut = new QPlainTextEdit(Dialog);
        chmodOut->setObjectName(QStringLiteral("chmodOut"));
        chmodOut->setReadOnly(false);

        outputTextLay->addWidget(chmodOut);

        chownOut = new QPlainTextEdit(Dialog);
        chownOut->setObjectName(QStringLiteral("chownOut"));
        chownOut->setMaximumSize(QSize(16777212, 16777215));
        chownOut->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        chownOut->setReadOnly(true);

        outputTextLay->addWidget(chownOut);


        outputLay->addLayout(outputTextLay);

        copyRun = new QHBoxLayout();
        copyRun->setSpacing(6);
        copyRun->setObjectName(QStringLiteral("copyRun"));
        run = new QPushButton(Dialog);
        run->setObjectName(QStringLiteral("run"));

        copyRun->addWidget(run);

        copy = new QPushButton(Dialog);
        copy->setObjectName(QStringLiteral("copy"));

        copyRun->addWidget(copy);


        outputLay->addLayout(copyRun);


        verticalLayout_2->addLayout(outputLay);

        QWidget::setTabOrder(browse, gen);
        QWidget::setTabOrder(gen, run);
        QWidget::setTabOrder(run, copy);
        QWidget::setTabOrder(copy, pathOut);
        QWidget::setTabOrder(pathOut, grpBox);
        QWidget::setTabOrder(grpBox, wldBox);
        QWidget::setTabOrder(wldBox, chownOut);

        retranslateUi(Dialog);

        permissionsTab->setCurrentIndex(0);
        cheBoxTabs->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0));
#ifndef QT_NO_TOOLTIP
        browse->setToolTip(QApplication::translate("Dialog", "<html><head/><body><p>Control + B</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        browse->setText(QApplication::translate("Dialog", "Browse", 0));
        ownerLab->setText(QApplication::translate("Dialog", "Owner", 0));
        groupLab->setText(QApplication::translate("Dialog", "Group", 0));
        ownLab->setText(QApplication::translate("Dialog", "File Owner:", 0));
        ownBox->clear();
        ownBox->insertItems(0, QStringList()
         << QApplication::translate("Dialog", "None", 0)
         << QApplication::translate("Dialog", "Execute", 0)
         << QApplication::translate("Dialog", "Write", 0)
         << QApplication::translate("Dialog", "Write and Execute", 0)
         << QApplication::translate("Dialog", "Read", 0)
         << QApplication::translate("Dialog", "Read and Execute", 0)
         << QApplication::translate("Dialog", "Read and Write", 0)
         << QApplication::translate("Dialog", "Read, Write, and Execute", 0)
        );
        grpLab->setText(QApplication::translate("Dialog", "Group:", 0));
        grpBox->clear();
        grpBox->insertItems(0, QStringList()
         << QApplication::translate("Dialog", "None", 0)
         << QApplication::translate("Dialog", "Execute", 0)
         << QApplication::translate("Dialog", "Write", 0)
         << QApplication::translate("Dialog", "Write and Execute", 0)
         << QApplication::translate("Dialog", "Read", 0)
         << QApplication::translate("Dialog", "Read and Execute", 0)
         << QApplication::translate("Dialog", "Read and Write", 0)
         << QApplication::translate("Dialog", "Read, Write, and Execute", 0)
        );
        worldLab->setText(QApplication::translate("Dialog", "World:", 0));
        wldBox->clear();
        wldBox->insertItems(0, QStringList()
         << QApplication::translate("Dialog", "None", 0)
         << QApplication::translate("Dialog", "Execute", 0)
         << QApplication::translate("Dialog", "Write", 0)
         << QApplication::translate("Dialog", "Write and Execute", 0)
         << QApplication::translate("Dialog", "Read", 0)
         << QApplication::translate("Dialog", "Read and Execute", 0)
         << QApplication::translate("Dialog", "Read and Write", 0)
         << QApplication::translate("Dialog", "Read, Write, and Execute", 0)
        );
        permissionsTab->setTabText(permissionsTab->indexOf(comBoxTab), QApplication::translate("Dialog", "Combo Box", 0));
        rReadBox->setText(QApplication::translate("Dialog", "Read", 0));
        rWriteBox->setText(QApplication::translate("Dialog", "Write", 0));
        rExeBox->setText(QApplication::translate("Dialog", "Execute", 0));
        cheBoxTabs->setTabText(cheBoxTabs->indexOf(rootTab), QApplication::translate("Dialog", "Owner", 0));
        uReadBox->setText(QApplication::translate("Dialog", "Read", 0));
        uWriteBox->setText(QApplication::translate("Dialog", "Write", 0));
        uExeBox->setText(QApplication::translate("Dialog", "Execute", 0));
        cheBoxTabs->setTabText(cheBoxTabs->indexOf(userTab), QApplication::translate("Dialog", "Group", 0));
        wReadBox->setText(QApplication::translate("Dialog", "Read", 0));
        wWriteBox->setText(QApplication::translate("Dialog", "Write", 0));
        wExeBox->setText(QApplication::translate("Dialog", "Execute", 0));
        cheBoxTabs->setTabText(cheBoxTabs->indexOf(worldTab), QApplication::translate("Dialog", "World", 0));
        permissionsTab->setTabText(permissionsTab->indexOf(cheBoxTab), QApplication::translate("Dialog", "Check Boxes", 0));
        pushButton->setText(QApplication::translate("Dialog", "Enter Symbolic Mode", 0));
        label->setText(QApplication::translate("Dialog", "The symbolic mode allows you to modify some modes while leaving others untouched.", 0));
        label_2->setText(QApplication::translate("Dialog", "This will open a new window.", 0));
        permissionsTab->setTabText(permissionsTab->indexOf(symb), QApplication::translate("Dialog", "Symbolic", 0));
        chmodLab->setText(QApplication::translate("Dialog", "Chmod", 0));
#ifndef QT_NO_TOOLTIP
        verMod->setToolTip(QApplication::translate("Dialog", "<html><head/><body><p>Control + V</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        verMod->setText(QApplication::translate("Dialog", "Verbose (feedback window)", 0));
#ifndef QT_NO_TOOLTIP
        protRootMod->setToolTip(QApplication::translate("Dialog", "<html><head/><body><p>Control + P</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        protRootMod->setText(QApplication::translate("Dialog", "Protect root", 0));
#ifndef QT_NO_TOOLTIP
        subMod->setToolTip(QApplication::translate("Dialog", "<html><head/><body><p>Control + S</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        subMod->setText(QApplication::translate("Dialog", "Subdirectorys/files", 0));
#ifndef QT_NO_TOOLTIP
        force->setToolTip(QApplication::translate("Dialog", "<html><head/><body><p>Control + F</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        force->setText(QApplication::translate("Dialog", "Force", 0));
        chownLab->setText(QApplication::translate("Dialog", "Chown", 0));
#ifndef QT_NO_TOOLTIP
        verOwn->setToolTip(QApplication::translate("Dialog", "<html><head/><body><p>Shift + Control + V</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        verOwn->setText(QApplication::translate("Dialog", "Verbose (feedback window)", 0));
#ifndef QT_NO_TOOLTIP
        protRootOwn->setToolTip(QApplication::translate("Dialog", "<html><head/><body><p>Shift + Control + P</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        protRootOwn->setText(QApplication::translate("Dialog", "Protect root", 0));
        subOwn->setText(QApplication::translate("Dialog", "Subdirectorys/files", 0));
#ifndef QT_NO_TOOLTIP
        noderef->setToolTip(QApplication::translate("Dialog", "<html><head/><body><p>Act on links, instead of what the link points to.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        noderef->setText(QApplication::translate("Dialog", "Don't dereference", 0));
        onlyIfLab->setText(QApplication::translate("Dialog", "Only if:", 0));
#ifndef QT_NO_TOOLTIP
        oiowner->setToolTip(QApplication::translate("Dialog", "<html><head/><body><p>Owner</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        colonLab->setText(QApplication::translate("Dialog", ":", 0));
#ifndef QT_NO_TOOLTIP
        oigroup->setToolTip(QApplication::translate("Dialog", "<html><head/><body><p>Group</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        gen->setToolTip(QApplication::translate("Dialog", "<html><head/><body><p>Control + G</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        gen->setText(QApplication::translate("Dialog", "Generate", 0));
#ifndef QT_NO_TOOLTIP
        run->setToolTip(QApplication::translate("Dialog", "<html><head/><body><p>Control + R</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        run->setText(QApplication::translate("Dialog", "Run", 0));
#ifndef QT_NO_TOOLTIP
        copy->setToolTip(QApplication::translate("Dialog", "<html><head/><body><p>Control + C</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        copy->setText(QApplication::translate("Dialog", "Copy", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
