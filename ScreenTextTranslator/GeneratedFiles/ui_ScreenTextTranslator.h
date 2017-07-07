/********************************************************************************
** Form generated from reading UI file 'ScreenTextTranslator.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCREENTEXTTRANSLATOR_H
#define UI_SCREENTEXTTRANSLATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ScreenTextTranslatorClass
{
public:
    QAction *actionMode;
    QAction *actionSettings;
    QAction *actionExit;
    QAction *actionOcrTest;
    QAction *actionTransTextTest;
    QAction *actionInfo;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *comboBox_Start;
    QLabel *label_2;
    QComboBox *comboBox_Arrive;
    QSpacerItem *horizontalSpacer;
    QLabel *label_3;
    QTextBrowser *textBrowser_OCR;
    QLabel *label_4;
    QTextBrowser *textBrowser_Trans;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *ScreenTextTranslatorClass)
    {
        if (ScreenTextTranslatorClass->objectName().isEmpty())
            ScreenTextTranslatorClass->setObjectName(QStringLiteral("ScreenTextTranslatorClass"));
        ScreenTextTranslatorClass->resize(460, 402);
        QIcon icon;
        icon.addFile(QStringLiteral(":/ScreenTextTranslator/Logo.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        ScreenTextTranslatorClass->setWindowIcon(icon);
        actionMode = new QAction(ScreenTextTranslatorClass);
        actionMode->setObjectName(QStringLiteral("actionMode"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/ScreenTextTranslator/Start.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMode->setIcon(icon1);
        actionSettings = new QAction(ScreenTextTranslatorClass);
        actionSettings->setObjectName(QStringLiteral("actionSettings"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/ScreenTextTranslator/Settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSettings->setIcon(icon2);
        actionExit = new QAction(ScreenTextTranslatorClass);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/ScreenTextTranslator/Exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon3);
        actionOcrTest = new QAction(ScreenTextTranslatorClass);
        actionOcrTest->setObjectName(QStringLiteral("actionOcrTest"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/ScreenTextTranslator/Ocr.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOcrTest->setIcon(icon4);
        actionTransTextTest = new QAction(ScreenTextTranslatorClass);
        actionTransTextTest->setObjectName(QStringLiteral("actionTransTextTest"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/ScreenTextTranslator/Azure.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTransTextTest->setIcon(icon5);
        actionInfo = new QAction(ScreenTextTranslatorClass);
        actionInfo->setObjectName(QStringLiteral("actionInfo"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/ScreenTextTranslator/Info.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionInfo->setIcon(icon6);
        centralWidget = new QWidget(ScreenTextTranslatorClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        comboBox_Start = new QComboBox(centralWidget);
        comboBox_Start->setObjectName(QStringLiteral("comboBox_Start"));

        gridLayout->addWidget(comboBox_Start, 1, 0, 1, 1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        comboBox_Arrive = new QComboBox(centralWidget);
        comboBox_Arrive->setObjectName(QStringLiteral("comboBox_Arrive"));

        gridLayout->addWidget(comboBox_Arrive, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        textBrowser_OCR = new QTextBrowser(centralWidget);
        textBrowser_OCR->setObjectName(QStringLiteral("textBrowser_OCR"));

        verticalLayout->addWidget(textBrowser_OCR);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        textBrowser_Trans = new QTextBrowser(centralWidget);
        textBrowser_Trans->setObjectName(QStringLiteral("textBrowser_Trans"));

        verticalLayout->addWidget(textBrowser_Trans);

        ScreenTextTranslatorClass->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(ScreenTextTranslatorClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setMovable(false);
        mainToolBar->setIconSize(QSize(32, 32));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        ScreenTextTranslatorClass->addToolBar(Qt::TopToolBarArea, mainToolBar);

        mainToolBar->addAction(actionMode);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionOcrTest);
        mainToolBar->addAction(actionTransTextTest);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionSettings);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionInfo);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionExit);

        retranslateUi(ScreenTextTranslatorClass);
        QObject::connect(actionExit, SIGNAL(triggered()), ScreenTextTranslatorClass, SLOT(close()));

        QMetaObject::connectSlotsByName(ScreenTextTranslatorClass);
    } // setupUi

    void retranslateUi(QMainWindow *ScreenTextTranslatorClass)
    {
        ScreenTextTranslatorClass->setWindowTitle(QApplication::translate("ScreenTextTranslatorClass", "\355\231\224\353\251\264 \353\254\270\354\236\220 \353\262\210\354\227\255\352\270\260 (Screen Text Translator)", Q_NULLPTR));
        actionMode->setText(QApplication::translate("ScreenTextTranslatorClass", "\353\262\210\354\227\255 \353\252\250\353\223\234", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionMode->setToolTip(QApplication::translate("ScreenTextTranslatorClass", "\353\262\210\354\227\255 \353\252\250\353\223\234\353\241\234 \353\263\200\352\262\275 \355\225\251\353\213\210\353\213\244. (Ctrl+F5)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionMode->setShortcut(QApplication::translate("ScreenTextTranslatorClass", "Ctrl+F5", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionSettings->setText(QApplication::translate("ScreenTextTranslatorClass", "\354\204\244\354\240\225", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionSettings->setToolTip(QApplication::translate("ScreenTextTranslatorClass", "\354\204\244\354\240\225\354\235\204 \352\264\200\353\246\254 \355\225\251\353\213\210\353\213\244.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionExit->setText(QApplication::translate("ScreenTextTranslatorClass", "\354\242\205\353\243\214", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionExit->setToolTip(QApplication::translate("ScreenTextTranslatorClass", "\355\224\204\353\241\234\352\267\270\353\236\250\354\235\204 \354\242\205\353\243\214 \355\225\251\353\213\210\353\213\244.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionOcrTest->setText(QApplication::translate("ScreenTextTranslatorClass", "OCR \355\205\214\354\212\244\355\212\270", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionOcrTest->setToolTip(QApplication::translate("ScreenTextTranslatorClass", "\354\272\241\354\262\230\355\225\240 \354\230\201\354\227\255\354\235\204 \354\204\240\355\203\235 \355\233\204 OCR\354\235\204 \355\205\214\354\212\244\355\212\270 \355\225\251\353\213\210\353\213\244. (Ctrl+F6)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionOcrTest->setShortcut(QApplication::translate("ScreenTextTranslatorClass", "Ctrl+F6", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionTransTextTest->setText(QApplication::translate("ScreenTextTranslatorClass", "\353\262\210\354\227\255 \355\205\214\354\212\244\355\212\270", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionTransTextTest->setToolTip(QApplication::translate("ScreenTextTranslatorClass", "\353\262\210\354\227\255 API\353\245\274 \355\205\214\354\212\244\355\212\270 \355\225\251\353\213\210\353\213\244. (Ctrl+F7)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionTransTextTest->setShortcut(QApplication::translate("ScreenTextTranslatorClass", "Ctrl+F7", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionInfo->setText(QApplication::translate("ScreenTextTranslatorClass", "\354\240\225\353\263\264", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionInfo->setToolTip(QApplication::translate("ScreenTextTranslatorClass", "\355\224\204\353\241\234\352\267\270\353\236\250 \354\240\225\353\263\264\353\245\274 \355\231\225\354\235\270 \355\225\251\353\213\210\353\213\244.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("ScreenTextTranslatorClass", "\354\266\234\353\260\234\354\226\264", Q_NULLPTR));
        comboBox_Start->clear();
        comboBox_Start->insertItems(0, QStringList()
         << QApplication::translate("ScreenTextTranslatorClass", "\354\230\201\354\226\264", Q_NULLPTR)
        );
        label_2->setText(QApplication::translate("ScreenTextTranslatorClass", "\353\217\204\354\260\251\354\226\264", Q_NULLPTR));
        comboBox_Arrive->clear();
        comboBox_Arrive->insertItems(0, QStringList()
         << QApplication::translate("ScreenTextTranslatorClass", "\355\225\234\352\265\255\354\226\264", Q_NULLPTR)
        );
        label_3->setText(QApplication::translate("ScreenTextTranslatorClass", "OCR", Q_NULLPTR));
        label_4->setText(QApplication::translate("ScreenTextTranslatorClass", "\353\262\210\354\227\255\353\254\270", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ScreenTextTranslatorClass: public Ui_ScreenTextTranslatorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCREENTEXTTRANSLATOR_H
