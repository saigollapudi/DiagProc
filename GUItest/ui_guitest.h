/********************************************************************************
** Form generated from reading UI file 'guitest.ui'
**
** Created: Wed 2. Jul 11:51:35 2014
**      by: Qt User Interface Compiler version 4.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUITEST_H
#define UI_GUITEST_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GUItestClass
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QLabel *label_3;
    QLineEdit *usrName_txtEdit;
    QPushButton *t1nxtTabBtn;
    QPushButton *t1okBtn;
    QSpacerItem *verticalSpacer_5;
    QPushButton *t1quitBtn;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *TitleLabel;
    QWidget *tab_2;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLineEdit *diag_src_txtEdit;
    QSpacerItem *verticalSpacer_4;
    QPushButton *t2quitBtn;
    QPushButton *t2nxtTabBtn;
    QSpacerItem *verticalSpacer_3;
    QPushButton *t2okBtn;
    QWidget *tab_3;
    QWidget *gridLayoutWidget_4;
    QGridLayout *gridLayout_4;
    QPushButton *t3quitBtn;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *verticalSpacer_8;
    QPushButton *t3nxtTabBtn;
    QComboBox *sourceNotation_cmbBox;
    QLabel *label_4;
    QPushButton *t3src_okBtn;
    QLineEdit *ntn_src_txtEdit;
    QLabel *label_8;
    QLabel *label_11;
    QLabel *label_10;
    QLabel *label_7;
    QLabel *label_9;
    QComboBox *targetNotation_cmbBox;
    QLineEdit *ntn_trg_txtEdit;
    QPushButton *t3trgt_okBtn;
    QSpacerItem *verticalSpacer_6;
    QWidget *tab_4;
    QWidget *gridLayoutWidget_5;
    QGridLayout *gridLayout_5;
    QLabel *label_5;
    QLineEdit *fin_diag_txtEdit;
    QPushButton *t4nxtTabBtn;
    QSpacerItem *verticalSpacer_9;
    QPushButton *t4quitBtn;
    QPushButton *t4okBtn;
    QWidget *tab_5;
    QWidget *gridLayoutWidget_6;
    QGridLayout *gridLayout_6;
    QLabel *label_6;
    QSpacerItem *verticalSpacer_12;
    QComboBox *comboBox_3;
    QPushButton *t5nxtTabBtn;
    QSpacerItem *verticalSpacer_11;
    QPushButton *t5quitBtn;
    QWidget *tab_6;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *fin_ntn_txtEdit;
    QPushButton *t6nxtTabBtn;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QPushButton *t6quitBtn;
    QPushButton *t6okBtn;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *GUItestClass)
    {
        if (GUItestClass->objectName().isEmpty())
            GUItestClass->setObjectName(QString::fromUtf8("GUItestClass"));
        GUItestClass->resize(638, 400);
        centralWidget = new QWidget(GUItestClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 611, 361));
        QFont font;
        font.setPointSize(14);
        tabWidget->setFont(font);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayoutWidget_3 = new QWidget(tab);
        gridLayoutWidget_3->setObjectName(QString::fromUtf8("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(10, 190, 581, 121));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(gridLayoutWidget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(false);
        font1.setWeight(50);
        label_3->setFont(font1);

        gridLayout_3->addWidget(label_3, 0, 1, 1, 1);

        usrName_txtEdit = new QLineEdit(gridLayoutWidget_3);
        usrName_txtEdit->setObjectName(QString::fromUtf8("usrName_txtEdit"));

        gridLayout_3->addWidget(usrName_txtEdit, 0, 2, 1, 1);

        t1nxtTabBtn = new QPushButton(gridLayoutWidget_3);
        t1nxtTabBtn->setObjectName(QString::fromUtf8("t1nxtTabBtn"));

        gridLayout_3->addWidget(t1nxtTabBtn, 2, 4, 1, 1);

        t1okBtn = new QPushButton(gridLayoutWidget_3);
        t1okBtn->setObjectName(QString::fromUtf8("t1okBtn"));

        gridLayout_3->addWidget(t1okBtn, 0, 3, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_5, 1, 4, 1, 1);

        t1quitBtn = new QPushButton(gridLayoutWidget_3);
        t1quitBtn->setObjectName(QString::fromUtf8("t1quitBtn"));

        gridLayout_3->addWidget(t1quitBtn, 2, 0, 1, 1);

        verticalLayoutWidget_2 = new QWidget(tab);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(9, 9, 581, 171));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        TitleLabel = new QLabel(verticalLayoutWidget_2);
        TitleLabel->setObjectName(QString::fromUtf8("TitleLabel"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Wide Latin"));
        font2.setPointSize(26);
        font2.setBold(false);
        font2.setWeight(50);
        TitleLabel->setFont(font2);
        TitleLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(TitleLabel);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayoutWidget_2 = new QWidget(tab_2);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(0, 10, 591, 301));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(gridLayoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);

        gridLayout_2->addWidget(label_2, 1, 1, 1, 1);

        diag_src_txtEdit = new QLineEdit(gridLayoutWidget_2);
        diag_src_txtEdit->setObjectName(QString::fromUtf8("diag_src_txtEdit"));

        gridLayout_2->addWidget(diag_src_txtEdit, 1, 2, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_4, 0, 1, 1, 1);

        t2quitBtn = new QPushButton(gridLayoutWidget_2);
        t2quitBtn->setObjectName(QString::fromUtf8("t2quitBtn"));

        gridLayout_2->addWidget(t2quitBtn, 3, 0, 1, 1);

        t2nxtTabBtn = new QPushButton(gridLayoutWidget_2);
        t2nxtTabBtn->setObjectName(QString::fromUtf8("t2nxtTabBtn"));

        gridLayout_2->addWidget(t2nxtTabBtn, 3, 4, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 2, 4, 1, 1);

        t2okBtn = new QPushButton(gridLayoutWidget_2);
        t2okBtn->setObjectName(QString::fromUtf8("t2okBtn"));

        gridLayout_2->addWidget(t2okBtn, 1, 3, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        gridLayoutWidget_4 = new QWidget(tab_3);
        gridLayoutWidget_4->setObjectName(QString::fromUtf8("gridLayoutWidget_4"));
        gridLayoutWidget_4->setGeometry(QRect(0, 0, 571, 311));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_4);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        t3quitBtn = new QPushButton(gridLayoutWidget_4);
        t3quitBtn->setObjectName(QString::fromUtf8("t3quitBtn"));

        gridLayout_4->addWidget(t3quitBtn, 12, 0, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_7, 4, 2, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_8, 0, 1, 1, 1);

        t3nxtTabBtn = new QPushButton(gridLayoutWidget_4);
        t3nxtTabBtn->setObjectName(QString::fromUtf8("t3nxtTabBtn"));

        gridLayout_4->addWidget(t3nxtTabBtn, 12, 5, 1, 1);

        sourceNotation_cmbBox = new QComboBox(gridLayoutWidget_4);
        sourceNotation_cmbBox->setObjectName(QString::fromUtf8("sourceNotation_cmbBox"));
        sourceNotation_cmbBox->setFont(font);

        gridLayout_4->addWidget(sourceNotation_cmbBox, 2, 2, 1, 1);

        label_4 = new QLabel(gridLayoutWidget_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);

        gridLayout_4->addWidget(label_4, 2, 1, 1, 1);

        t3src_okBtn = new QPushButton(gridLayoutWidget_4);
        t3src_okBtn->setObjectName(QString::fromUtf8("t3src_okBtn"));

        gridLayout_4->addWidget(t3src_okBtn, 3, 3, 1, 1);

        ntn_src_txtEdit = new QLineEdit(gridLayoutWidget_4);
        ntn_src_txtEdit->setObjectName(QString::fromUtf8("ntn_src_txtEdit"));

        gridLayout_4->addWidget(ntn_src_txtEdit, 3, 2, 1, 1);

        label_8 = new QLabel(gridLayoutWidget_4);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font1);

        gridLayout_4->addWidget(label_8, 3, 1, 1, 1);

        label_11 = new QLabel(gridLayoutWidget_4);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        QFont font3;
        font3.setBold(true);
        font3.setWeight(75);
        label_11->setFont(font3);
        label_11->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout_4->addWidget(label_11, 5, 0, 1, 1);

        label_10 = new QLabel(gridLayoutWidget_4);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font3);
        label_10->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout_4->addWidget(label_10, 1, 0, 1, 1);

        label_7 = new QLabel(gridLayoutWidget_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font1);

        gridLayout_4->addWidget(label_7, 7, 1, 1, 1);

        label_9 = new QLabel(gridLayoutWidget_4);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font1);

        gridLayout_4->addWidget(label_9, 8, 1, 1, 1);

        targetNotation_cmbBox = new QComboBox(gridLayoutWidget_4);
        targetNotation_cmbBox->setObjectName(QString::fromUtf8("targetNotation_cmbBox"));

        gridLayout_4->addWidget(targetNotation_cmbBox, 7, 2, 1, 1);

        ntn_trg_txtEdit = new QLineEdit(gridLayoutWidget_4);
        ntn_trg_txtEdit->setObjectName(QString::fromUtf8("ntn_trg_txtEdit"));

        gridLayout_4->addWidget(ntn_trg_txtEdit, 8, 2, 1, 1);

        t3trgt_okBtn = new QPushButton(gridLayoutWidget_4);
        t3trgt_okBtn->setObjectName(QString::fromUtf8("t3trgt_okBtn"));

        gridLayout_4->addWidget(t3trgt_okBtn, 8, 3, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_6, 9, 3, 1, 1);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        gridLayoutWidget_5 = new QWidget(tab_4);
        gridLayoutWidget_5->setObjectName(QString::fromUtf8("gridLayoutWidget_5"));
        gridLayoutWidget_5->setGeometry(QRect(0, 140, 571, 171));
        gridLayout_5 = new QGridLayout(gridLayoutWidget_5);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(gridLayoutWidget_5);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font1);

        gridLayout_5->addWidget(label_5, 0, 1, 1, 1);

        fin_diag_txtEdit = new QLineEdit(gridLayoutWidget_5);
        fin_diag_txtEdit->setObjectName(QString::fromUtf8("fin_diag_txtEdit"));

        gridLayout_5->addWidget(fin_diag_txtEdit, 0, 2, 1, 1);

        t4nxtTabBtn = new QPushButton(gridLayoutWidget_5);
        t4nxtTabBtn->setObjectName(QString::fromUtf8("t4nxtTabBtn"));

        gridLayout_5->addWidget(t4nxtTabBtn, 2, 4, 1, 1);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_9, 1, 4, 1, 1);

        t4quitBtn = new QPushButton(gridLayoutWidget_5);
        t4quitBtn->setObjectName(QString::fromUtf8("t4quitBtn"));

        gridLayout_5->addWidget(t4quitBtn, 2, 0, 1, 1);

        t4okBtn = new QPushButton(gridLayoutWidget_5);
        t4okBtn->setObjectName(QString::fromUtf8("t4okBtn"));

        gridLayout_5->addWidget(t4okBtn, 0, 3, 1, 1);

        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        gridLayoutWidget_6 = new QWidget(tab_5);
        gridLayoutWidget_6->setObjectName(QString::fromUtf8("gridLayoutWidget_6"));
        gridLayoutWidget_6->setGeometry(QRect(0, 10, 591, 301));
        gridLayout_6 = new QGridLayout(gridLayoutWidget_6);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(gridLayoutWidget_6);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font1);

        gridLayout_6->addWidget(label_6, 1, 1, 1, 1);

        verticalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_12, 0, 1, 1, 1);

        comboBox_3 = new QComboBox(gridLayoutWidget_6);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));

        gridLayout_6->addWidget(comboBox_3, 1, 2, 1, 1);

        t5nxtTabBtn = new QPushButton(gridLayoutWidget_6);
        t5nxtTabBtn->setObjectName(QString::fromUtf8("t5nxtTabBtn"));

        gridLayout_6->addWidget(t5nxtTabBtn, 3, 4, 1, 1);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_11, 2, 4, 1, 1);

        t5quitBtn = new QPushButton(gridLayoutWidget_6);
        t5quitBtn->setObjectName(QString::fromUtf8("t5quitBtn"));

        gridLayout_6->addWidget(t5quitBtn, 3, 0, 1, 1);

        tabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        gridLayoutWidget = new QWidget(tab_6);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 561, 301));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font1);

        gridLayout->addWidget(label, 1, 1, 1, 1);

        fin_ntn_txtEdit = new QLineEdit(gridLayoutWidget);
        fin_ntn_txtEdit->setObjectName(QString::fromUtf8("fin_ntn_txtEdit"));

        gridLayout->addWidget(fin_ntn_txtEdit, 1, 2, 1, 1);

        t6nxtTabBtn = new QPushButton(gridLayoutWidget);
        t6nxtTabBtn->setObjectName(QString::fromUtf8("t6nxtTabBtn"));

        gridLayout->addWidget(t6nxtTabBtn, 3, 4, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 4, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 1, 1, 1);

        t6quitBtn = new QPushButton(gridLayoutWidget);
        t6quitBtn->setObjectName(QString::fromUtf8("t6quitBtn"));

        gridLayout->addWidget(t6quitBtn, 3, 0, 1, 1);

        t6okBtn = new QPushButton(gridLayoutWidget);
        t6okBtn->setObjectName(QString::fromUtf8("t6okBtn"));

        gridLayout->addWidget(t6okBtn, 1, 4, 1, 1);

        tabWidget->addTab(tab_6, QString());
        GUItestClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(GUItestClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 638, 21));
        GUItestClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(GUItestClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        GUItestClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(GUItestClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        GUItestClass->setStatusBar(statusBar);

        retranslateUi(GUItestClass);
        QObject::connect(t1quitBtn, SIGNAL(clicked()), GUItestClass, SLOT(close()));
        QObject::connect(t2quitBtn, SIGNAL(clicked()), GUItestClass, SLOT(close()));
        QObject::connect(t3quitBtn, SIGNAL(clicked()), GUItestClass, SLOT(close()));
        QObject::connect(t4quitBtn, SIGNAL(clicked()), GUItestClass, SLOT(close()));
        QObject::connect(t5quitBtn, SIGNAL(clicked()), GUItestClass, SLOT(close()));
        QObject::connect(t6quitBtn, SIGNAL(clicked()), GUItestClass, SLOT(close()));
        QObject::connect(t1nxtTabBtn, SIGNAL(clicked()), tabWidget, SLOT(lower()));
        QObject::connect(t2nxtTabBtn, SIGNAL(clicked()), tabWidget, SLOT(lower()));
        QObject::connect(t3nxtTabBtn, SIGNAL(clicked()), tabWidget, SLOT(lower()));
        QObject::connect(t4nxtTabBtn, SIGNAL(clicked()), tabWidget, SLOT(lower()));
        QObject::connect(t5nxtTabBtn, SIGNAL(clicked()), tabWidget, SLOT(lower()));
        QObject::connect(t6nxtTabBtn, SIGNAL(clicked()), tabWidget, SLOT(lower()));
        QObject::connect(t1okBtn, SIGNAL(clicked()), GUItestClass, SLOT(grab_usrName()));
        QObject::connect(t2okBtn, SIGNAL(clicked()), GUItestClass, SLOT(grab_diag_src_fileName()));
        QObject::connect(t3src_okBtn, SIGNAL(clicked()), GUItestClass, SLOT(grab_ntn_src_fileName()));
        QObject::connect(t3trgt_okBtn, SIGNAL(clicked()), GUItestClass, SLOT(grab_ntn_trg_fileName()));
        QObject::connect(t4okBtn, SIGNAL(clicked()), GUItestClass, SLOT(grab_fin_diag_fileName()));
        QObject::connect(t6okBtn, SIGNAL(clicked()), GUItestClass, SLOT(grab_fin_ntn_fileName()));
        QObject::connect(sourceNotation_cmbBox, SIGNAL(activated(int)), GUItestClass, SLOT(grab_sourceFormatType(int)));
        QObject::connect(targetNotation_cmbBox, SIGNAL(highlighted(int)), GUItestClass, SLOT(grab_targetFormatType(int)));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(GUItestClass);
    } // setupUi

    void retranslateUi(QMainWindow *GUItestClass)
    {
        GUItestClass->setWindowTitle(QApplication::translate("GUItestClass", "GUItest", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("GUItestClass", "User Name", 0, QApplication::UnicodeUTF8));
        t1nxtTabBtn->setText(QApplication::translate("GUItestClass", "Next TAB", 0, QApplication::UnicodeUTF8));
        t1okBtn->setText(QApplication::translate("GUItestClass", "OK", 0, QApplication::UnicodeUTF8));
        t1quitBtn->setText(QApplication::translate("GUItestClass", "Quit", 0, QApplication::UnicodeUTF8));
        TitleLabel->setText(QApplication::translate("GUItestClass", "diaXes Tool", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("GUItestClass", "Welcome", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("GUItestClass", "Diagram file to upload", 0, QApplication::UnicodeUTF8));
        t2quitBtn->setText(QApplication::translate("GUItestClass", "Quit", 0, QApplication::UnicodeUTF8));
        t2nxtTabBtn->setText(QApplication::translate("GUItestClass", "Next TAB", 0, QApplication::UnicodeUTF8));
        t2okBtn->setText(QApplication::translate("GUItestClass", "OK", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("GUItestClass", "Upload", 0, QApplication::UnicodeUTF8));
        t3quitBtn->setText(QApplication::translate("GUItestClass", "Quit", 0, QApplication::UnicodeUTF8));
        t3nxtTabBtn->setText(QApplication::translate("GUItestClass", "next TAB", 0, QApplication::UnicodeUTF8));
        sourceNotation_cmbBox->clear();
        sourceNotation_cmbBox->insertItems(0, QStringList()
         << QApplication::translate("GUItestClass", "Pick notation ...", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GUItestClass", "DOT", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GUItestClass", "Trivial Graph Format", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GUItestClass", "GML", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GUItestClass", "GraphML", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GUItestClass", "GXL", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GUItestClass", "XGMML", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GUItestClass", "DGML", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_ACCESSIBILITY
        sourceNotation_cmbBox->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        sourceNotation_cmbBox->setAccessibleDescription(QString());
#endif // QT_NO_ACCESSIBILITY
        label_4->setText(QApplication::translate("GUItestClass", "Type", 0, QApplication::UnicodeUTF8));
        t3src_okBtn->setText(QApplication::translate("GUItestClass", "OK", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("GUItestClass", "FileName", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("GUItestClass", "Target", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("GUItestClass", "Source", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("GUItestClass", "Type", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("GUItestClass", "Filename", 0, QApplication::UnicodeUTF8));
        targetNotation_cmbBox->clear();
        targetNotation_cmbBox->insertItems(0, QStringList()
         << QApplication::translate("GUItestClass", "Pick notation ...", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GUItestClass", "DOT", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GUItestClass", "Trivial Graph Format", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GUItestClass", "GML", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GUItestClass", "GraphML", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GUItestClass", "GXL", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GUItestClass", "XGMML", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GUItestClass", "DGML", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_ACCESSIBILITY
        targetNotation_cmbBox->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        targetNotation_cmbBox->setAccessibleDescription(QString());
#endif // QT_NO_ACCESSIBILITY
        t3trgt_okBtn->setText(QApplication::translate("GUItestClass", "OK", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("GUItestClass", "xForm", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("GUItestClass", "Output filename", 0, QApplication::UnicodeUTF8));
        t4nxtTabBtn->setText(QApplication::translate("GUItestClass", "Next TAB", 0, QApplication::UnicodeUTF8));
        t4quitBtn->setText(QApplication::translate("GUItestClass", "Quit", 0, QApplication::UnicodeUTF8));
        t4okBtn->setText(QApplication::translate("GUItestClass", "OK", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("GUItestClass", "reRender", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("GUItestClass", "Type of interaction", 0, QApplication::UnicodeUTF8));
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("GUItestClass", "Diagram to Text", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GUItestClass", "Text to Voice", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_ACCESSIBILITY
        comboBox_3->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        comboBox_3->setAccessibleDescription(QString());
#endif // QT_NO_ACCESSIBILITY
        t5nxtTabBtn->setText(QApplication::translate("GUItestClass", "Next TAB", 0, QApplication::UnicodeUTF8));
        t5quitBtn->setText(QApplication::translate("GUItestClass", "Quit", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("GUItestClass", "Interact", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("GUItestClass", "Output filename", 0, QApplication::UnicodeUTF8));
        t6nxtTabBtn->setText(QApplication::translate("GUItestClass", "Next TAB", 0, QApplication::UnicodeUTF8));
        t6quitBtn->setText(QApplication::translate("GUItestClass", "Quit", 0, QApplication::UnicodeUTF8));
        t6okBtn->setText(QApplication::translate("GUItestClass", "OK", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("GUItestClass", "txtOutput", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class GUItestClass: public Ui_GUItestClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUITEST_H
