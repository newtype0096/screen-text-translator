/********************************************************************************
** Form generated from reading UI file 'TransMode.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSMODE_H
#define UI_TRANSMODE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form_TransMode
{
public:
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *plainTextEdit_TransText;
    QHBoxLayout *horizontalLayout;
    QToolButton *toolButton_TransStart;
    QToolButton *toolButton_SelectROI;
    QToolButton *toolButton_ShowROI;
    QToolButton *toolButton_Settings;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_Back;

    void setupUi(QWidget *Form_TransMode)
    {
        if (Form_TransMode->objectName().isEmpty())
            Form_TransMode->setObjectName(QStringLiteral("Form_TransMode"));
        Form_TransMode->resize(822, 183);
        QFont font;
        font.setPointSize(9);
        Form_TransMode->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral(":/ScreenTextTranslator/Logo.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Form_TransMode->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(Form_TransMode);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        plainTextEdit_TransText = new QPlainTextEdit(Form_TransMode);
        plainTextEdit_TransText->setObjectName(QStringLiteral("plainTextEdit_TransText"));
        plainTextEdit_TransText->setReadOnly(true);

        verticalLayout->addWidget(plainTextEdit_TransText);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        toolButton_TransStart = new QToolButton(Form_TransMode);
        toolButton_TransStart->setObjectName(QStringLiteral("toolButton_TransStart"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/ScreenTextTranslator/Azure.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_TransStart->setIcon(icon1);
        toolButton_TransStart->setIconSize(QSize(16, 16));
        toolButton_TransStart->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout->addWidget(toolButton_TransStart);

        toolButton_SelectROI = new QToolButton(Form_TransMode);
        toolButton_SelectROI->setObjectName(QStringLiteral("toolButton_SelectROI"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/ScreenTextTranslator/Ocr.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_SelectROI->setIcon(icon2);
        toolButton_SelectROI->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout->addWidget(toolButton_SelectROI);

        toolButton_ShowROI = new QToolButton(Form_TransMode);
        toolButton_ShowROI->setObjectName(QStringLiteral("toolButton_ShowROI"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/ScreenTextTranslator/ROI.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_ShowROI->setIcon(icon3);
        toolButton_ShowROI->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout->addWidget(toolButton_ShowROI);

        toolButton_Settings = new QToolButton(Form_TransMode);
        toolButton_Settings->setObjectName(QStringLiteral("toolButton_Settings"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/ScreenTextTranslator/Settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_Settings->setIcon(icon4);
        toolButton_Settings->setIconSize(QSize(16, 16));
        toolButton_Settings->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout->addWidget(toolButton_Settings);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_Back = new QPushButton(Form_TransMode);
        pushButton_Back->setObjectName(QStringLiteral("pushButton_Back"));

        horizontalLayout->addWidget(pushButton_Back);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(Form_TransMode);

        QMetaObject::connectSlotsByName(Form_TransMode);
    } // setupUi

    void retranslateUi(QWidget *Form_TransMode)
    {
        Form_TransMode->setWindowTitle(QApplication::translate("Form_TransMode", "\353\262\210\354\227\255 \353\252\250\353\223\234", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        toolButton_TransStart->setToolTip(QApplication::translate("Form_TransMode", "\354\204\240\355\203\235\355\225\234 \354\230\201\354\227\255\354\227\220 \354\236\210\353\212\224 \355\205\215\354\212\244\355\212\270\353\245\274 \353\262\210\354\227\255\355\225\251\353\213\210\353\213\244. (Shift+A)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        toolButton_TransStart->setText(QApplication::translate("Form_TransMode", "\353\262\210\354\227\255 \354\213\234\354\236\221", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        toolButton_TransStart->setShortcut(QApplication::translate("Form_TransMode", "Shift+A", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        toolButton_SelectROI->setToolTip(QApplication::translate("Form_TransMode", "\354\272\241\354\262\230\355\225\240 \354\230\201\354\227\255\354\235\204 \354\204\240\355\203\235\355\225\251\353\213\210\353\213\244. (Shift+S)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        toolButton_SelectROI->setText(QApplication::translate("Form_TransMode", "\354\230\201\354\227\255 \354\204\240\355\203\235", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        toolButton_SelectROI->setShortcut(QApplication::translate("Form_TransMode", "Shift+S", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        toolButton_ShowROI->setToolTip(QApplication::translate("Form_TransMode", "\354\204\240\355\203\235\355\225\234 \354\230\201\354\227\255\354\235\204 \353\263\264\354\227\254\354\244\215\353\213\210\353\213\244. (Shift+D)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        toolButton_ShowROI->setText(QApplication::translate("Form_TransMode", "\354\204\240\355\203\235\355\225\234 \354\230\201\354\227\255 \353\263\264\352\270\260", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        toolButton_ShowROI->setShortcut(QApplication::translate("Form_TransMode", "Shift+D", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        toolButton_Settings->setText(QApplication::translate("Form_TransMode", "\354\204\244\354\240\225", Q_NULLPTR));
        pushButton_Back->setText(QApplication::translate("Form_TransMode", "\353\217\214\354\225\204\352\260\200\352\270\260", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Form_TransMode: public Ui_Form_TransMode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSMODE_H
