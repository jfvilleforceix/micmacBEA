/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QCheckBox *SaisieMasqActive;
    QComboBox *SaisieMasqModel;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QLineEdit *SetExifFocale;
    QCheckBox *SetExifEqui35;
    QComboBox *SetExifCamModel;
    QFrame *line_5;
    QSpacerItem *verticalSpacer_6;
    QFrame *line_3;
    QFrame *line_2;
    QFrame *line_4;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QComboBox *TapiocaMode;
    QLineEdit *TapiocaModeParam;
    QLineEdit *TapiocaTaille;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QComboBox *TapasModel;
    QCheckBox *TapasCalibInit;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *TapasCalibInitPath;
    QToolButton *TapasCalibInitBrowse;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *Launch;
    QSpacerItem *verticalSpacer_8;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_9;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *verticalSpacer_5;
    QFrame *line;
    QSpacerItem *verticalSpacer_10;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLineEdit *DIVRate;
    QLabel *label_8;
    QLineEdit *DIVVideoPath;
    QToolButton *DIVVideoBrowse;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(591, 498);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_3->addWidget(label_5);

        SaisieMasqActive = new QCheckBox(centralWidget);
        SaisieMasqActive->setObjectName(QStringLiteral("SaisieMasqActive"));
        SaisieMasqActive->setEnabled(true);
        SaisieMasqActive->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_3->addWidget(SaisieMasqActive);

        SaisieMasqModel = new QComboBox(centralWidget);
        SaisieMasqModel->setObjectName(QStringLiteral("SaisieMasqModel"));
        SaisieMasqModel->setEnabled(false);
        SaisieMasqModel->setMinimumSize(QSize(250, 0));
        SaisieMasqModel->setEditable(true);

        horizontalLayout_3->addWidget(SaisieMasqModel);


        gridLayout->addLayout(horizontalLayout_3, 29, 0, 2, 2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_5->addWidget(label_3);

        SetExifFocale = new QLineEdit(centralWidget);
        SetExifFocale->setObjectName(QStringLiteral("SetExifFocale"));

        horizontalLayout_5->addWidget(SetExifFocale);

        SetExifEqui35 = new QCheckBox(centralWidget);
        SetExifEqui35->setObjectName(QStringLiteral("SetExifEqui35"));

        horizontalLayout_5->addWidget(SetExifEqui35);

        SetExifCamModel = new QComboBox(centralWidget);
        SetExifCamModel->setObjectName(QStringLiteral("SetExifCamModel"));
        SetExifCamModel->setMinimumSize(QSize(170, 0));
        SetExifCamModel->setEditable(true);

        horizontalLayout_5->addWidget(SetExifCamModel);


        gridLayout->addLayout(horizontalLayout_5, 12, 0, 2, 2);

        line_5 = new QFrame(centralWidget);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_5, 9, 0, 1, 2);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_6, 44, 0, 1, 2);

        line_3 = new QFrame(centralWidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_3, 27, 0, 1, 2);

        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 32, 0, 1, 2);

        line_4 = new QFrame(centralWidget);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_4, 15, 0, 1, 2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 25, 0, 1, 2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 14, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        TapiocaMode = new QComboBox(centralWidget);
        TapiocaMode->setObjectName(QStringLiteral("TapiocaMode"));
        TapiocaMode->setMinimumSize(QSize(120, 0));
        TapiocaMode->setEditable(true);

        horizontalLayout->addWidget(TapiocaMode);

        TapiocaModeParam = new QLineEdit(centralWidget);
        TapiocaModeParam->setObjectName(QStringLiteral("TapiocaModeParam"));
        TapiocaModeParam->setEnabled(false);

        horizontalLayout->addWidget(TapiocaModeParam);

        TapiocaTaille = new QLineEdit(centralWidget);
        TapiocaTaille->setObjectName(QStringLiteral("TapiocaTaille"));

        horizontalLayout->addWidget(TapiocaTaille);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);


        gridLayout->addLayout(horizontalLayout, 19, 0, 2, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 8, 0, 1, 2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_6->addWidget(label_6);

        TapasModel = new QComboBox(centralWidget);
        TapasModel->setObjectName(QStringLiteral("TapasModel"));
        TapasModel->setMinimumSize(QSize(200, 0));
        TapasModel->setEditable(true);

        horizontalLayout_6->addWidget(TapasModel);

        TapasCalibInit = new QCheckBox(centralWidget);
        TapasCalibInit->setObjectName(QStringLiteral("TapasCalibInit"));
        TapasCalibInit->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_6->addWidget(TapasCalibInit);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        TapasCalibInitPath = new QLineEdit(centralWidget);
        TapasCalibInitPath->setObjectName(QStringLiteral("TapasCalibInitPath"));
        TapasCalibInitPath->setEnabled(false);

        horizontalLayout_7->addWidget(TapasCalibInitPath);

        TapasCalibInitBrowse = new QToolButton(centralWidget);
        TapasCalibInitBrowse->setObjectName(QStringLiteral("TapasCalibInitBrowse"));
        TapasCalibInitBrowse->setEnabled(false);

        horizontalLayout_7->addWidget(TapasCalibInitBrowse);


        verticalLayout_2->addLayout(horizontalLayout_7);


        gridLayout->addLayout(verticalLayout_2, 42, 0, 2, 2);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        Launch = new QPushButton(centralWidget);
        Launch->setObjectName(QStringLiteral("Launch"));
        Launch->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_8->addWidget(Launch);


        gridLayout->addLayout(horizontalLayout_8, 47, 0, 2, 2);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_8, 28, 0, 1, 2);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 31, 0, 1, 2);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_9, 33, 0, 1, 2);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_7, 10, 0, 1, 2);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 46, 0, 1, 2);

        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 45, 0, 1, 2);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_10, 16, 0, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMargin(0);

        horizontalLayout_2->addWidget(label_4);

        DIVRate = new QLineEdit(centralWidget);
        DIVRate->setObjectName(QStringLiteral("DIVRate"));
        DIVRate->setMaximumSize(QSize(50, 16777215));
        DIVRate->setLayoutDirection(Qt::LeftToRight);
        DIVRate->setFrame(true);

        horizontalLayout_2->addWidget(DIVRate);

        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_2->addWidget(label_8);

        DIVVideoPath = new QLineEdit(centralWidget);
        DIVVideoPath->setObjectName(QStringLiteral("DIVVideoPath"));

        horizontalLayout_2->addWidget(DIVVideoPath);

        DIVVideoBrowse = new QToolButton(centralWidget);
        DIVVideoBrowse->setObjectName(QStringLiteral("DIVVideoBrowse"));

        horizontalLayout_2->addWidget(DIVVideoBrowse);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Mise en place relative", 0));
        label_5->setText(QApplication::translate("MainWindow", "Saisie des masques", 0));
        SaisieMasqActive->setText(QApplication::translate("MainWindow", "Activ\303\251e", 0));
        label_3->setText(QApplication::translate("MainWindow", "Donn\303\251es EXIF", 0));
        SetExifFocale->setPlaceholderText(QApplication::translate("MainWindow", "Focale en mm", 0));
        SetExifEqui35->setText(QApplication::translate("MainWindow", "\303\251quivalent 35 mm", 0));
        SetExifCamModel->setCurrentText(QString());
        label_2->setText(QApplication::translate("MainWindow", "Recherche de points d'int\303\251r\303\252t", 0));
        TapiocaModeParam->setPlaceholderText(QApplication::translate("MainWindow", "Param\303\250tre mode", 0));
        TapiocaTaille->setPlaceholderText(QApplication::translate("MainWindow", "Taille de l'image", 0));
        label->setText(QApplication::translate("MainWindow", "px", 0));
        label_6->setText(QApplication::translate("MainWindow", "Mise en place", 0));
        TapasCalibInit->setText(QApplication::translate("MainWindow", "Calibration en entr\303\251e", 0));
        TapasCalibInitBrowse->setText(QApplication::translate("MainWindow", "Parcourir", 0));
        Launch->setText(QApplication::translate("MainWindow", "Lancer", 0));
        label_4->setText(QApplication::translate("MainWindow", "Vid\303\251o", 0));
        DIVRate->setInputMask(QString());
        DIVRate->setText(QString());
        DIVRate->setPlaceholderText(QApplication::translate("MainWindow", "Rate", 0));
        label_8->setText(QApplication::translate("MainWindow", "images/sec", 0));
        DIVVideoBrowse->setText(QApplication::translate("MainWindow", "Parcourir", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
