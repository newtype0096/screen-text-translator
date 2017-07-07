/********************************************************************************
** Form generated from reading UI file 'About.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form_About
{
public:
    QPushButton *pushButton_Close;
    QLabel *label;
    QLabel *label_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;

    void setupUi(QWidget *Form_About)
    {
        if (Form_About->objectName().isEmpty())
            Form_About->setObjectName(QStringLiteral("Form_About"));
        Form_About->setWindowModality(Qt::ApplicationModal);
        Form_About->resize(461, 198);
        Form_About->setMinimumSize(QSize(461, 198));
        Form_About->setMaximumSize(QSize(461, 198));
        QIcon icon;
        icon.addFile(QStringLiteral(":/ScreenTextTranslator/Logo.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Form_About->setWindowIcon(icon);
        pushButton_Close = new QPushButton(Form_About);
        pushButton_Close->setObjectName(QStringLiteral("pushButton_Close"));
        pushButton_Close->setGeometry(QRect(370, 160, 75, 23));
        label = new QLabel(Form_About);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 40, 111, 111));
        label->setPixmap(QPixmap(QString::fromUtf8(":/ScreenTextTranslator/Logo.jpg")));
        label->setScaledContents(true);
        label_2 = new QLabel(Form_About);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(150, 20, 291, 16));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        verticalLayoutWidget = new QWidget(Form_About);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(150, 70, 311, 51));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout->addWidget(label_5);

        label_6 = new QLabel(Form_About);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(150, 140, 161, 16));
        label_7 = new QLabel(Form_About);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(150, 40, 291, 16));
        label_7->setFont(font);

        retranslateUi(Form_About);
        QObject::connect(pushButton_Close, SIGNAL(clicked()), Form_About, SLOT(close()));

        QMetaObject::connectSlotsByName(Form_About);
    } // setupUi

    void retranslateUi(QWidget *Form_About)
    {
        Form_About->setWindowTitle(QApplication::translate("Form_About", "\355\231\224\353\251\264 \353\254\270\354\236\220 \353\262\210\354\227\255\352\270\260 \354\240\225\353\263\264", Q_NULLPTR));
        pushButton_Close->setText(QApplication::translate("Form_About", "\353\213\253\352\270\260", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QApplication::translate("Form_About", "\355\231\224\353\251\264 \353\254\270\354\236\220 \353\262\210\354\227\255\352\270\260", Q_NULLPTR));
        label_3->setText(QApplication::translate("Form_About", "\353\262\204\354\240\204 1.0.0", Q_NULLPTR));
        label_4->setText(QApplication::translate("Form_About", "\355\231\224\353\251\264 \353\254\270\354\236\220 \353\262\210\354\227\255\352\270\260\353\212\224 \354\247\200\354\240\225\355\225\234 \352\263\265\352\260\204\354\227\220 \354\236\210\353\212\224 \355\205\215\354\212\244\355\212\270\353\245\274 \354\235\270\354\213\235\355\225\264 ", Q_NULLPTR));
        label_5->setText(QApplication::translate("Form_About", "\353\262\210\354\227\255\355\225\230\353\212\224 \355\224\204\353\241\234\352\267\270\353\236\250 \354\236\205\353\213\210\353\213\244.", Q_NULLPTR));
        label_6->setText(QApplication::translate("Form_About", "Developed by newtype0096", Q_NULLPTR));
        label_7->setText(QApplication::translate("Form_About", "Screen Text Translator (STT)", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Form_About: public Ui_Form_About {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
