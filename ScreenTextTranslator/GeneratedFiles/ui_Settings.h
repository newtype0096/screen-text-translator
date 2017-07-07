/********************************************************************************
** Form generated from reading UI file 'Settings.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form_Settings
{
public:
    QGroupBox *groupBox;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label;
    QComboBox *comboBox_API;
    QLineEdit *lineEdit_SubscriptionKey;
    QPushButton *pushButton_Cancel;
    QPushButton *pushButton_OK;
    QGroupBox *groupBox_2;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    QComboBox *comboBox_OCR;

    void setupUi(QWidget *Form_Settings)
    {
        if (Form_Settings->objectName().isEmpty())
            Form_Settings->setObjectName(QStringLiteral("Form_Settings"));
        Form_Settings->setWindowModality(Qt::ApplicationModal);
        Form_Settings->resize(401, 201);
        Form_Settings->setMinimumSize(QSize(401, 201));
        Form_Settings->setMaximumSize(QSize(401, 201));
        QIcon icon;
        icon.addFile(QStringLiteral(":/ScreenTextTranslator/Logo.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Form_Settings->setWindowIcon(icon);
        groupBox = new QGroupBox(Form_Settings);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 90, 381, 71));
        gridLayoutWidget = new QWidget(groupBox);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 20, 361, 44));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        comboBox_API = new QComboBox(gridLayoutWidget);
        comboBox_API->setObjectName(QStringLiteral("comboBox_API"));

        gridLayout->addWidget(comboBox_API, 1, 0, 1, 1);

        lineEdit_SubscriptionKey = new QLineEdit(gridLayoutWidget);
        lineEdit_SubscriptionKey->setObjectName(QStringLiteral("lineEdit_SubscriptionKey"));

        gridLayout->addWidget(lineEdit_SubscriptionKey, 1, 1, 1, 1);

        pushButton_Cancel = new QPushButton(Form_Settings);
        pushButton_Cancel->setObjectName(QStringLiteral("pushButton_Cancel"));
        pushButton_Cancel->setGeometry(QRect(310, 170, 75, 23));
        pushButton_OK = new QPushButton(Form_Settings);
        pushButton_OK->setObjectName(QStringLiteral("pushButton_OK"));
        pushButton_OK->setGeometry(QRect(230, 170, 75, 23));
        groupBox_2 = new QGroupBox(Form_Settings);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 10, 381, 71));
        gridLayoutWidget_2 = new QWidget(groupBox_2);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 20, 106, 44));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(gridLayoutWidget_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        comboBox_OCR = new QComboBox(gridLayoutWidget_2);
        comboBox_OCR->setObjectName(QStringLiteral("comboBox_OCR"));

        gridLayout_2->addWidget(comboBox_OCR, 1, 0, 1, 1);


        retranslateUi(Form_Settings);
        QObject::connect(pushButton_Cancel, SIGNAL(clicked()), Form_Settings, SLOT(close()));

        QMetaObject::connectSlotsByName(Form_Settings);
    } // setupUi

    void retranslateUi(QWidget *Form_Settings)
    {
        Form_Settings->setWindowTitle(QApplication::translate("Form_Settings", "\354\204\244\354\240\225", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Form_Settings", "API", Q_NULLPTR));
        label_2->setText(QApplication::translate("Form_Settings", "API \352\265\254\353\217\205\355\202\244", Q_NULLPTR));
        label->setText(QApplication::translate("Form_Settings", "API \354\204\240\355\203\235", Q_NULLPTR));
        comboBox_API->clear();
        comboBox_API->insertItems(0, QStringList()
         << QApplication::translate("Form_Settings", "Azure", Q_NULLPTR)
        );
        pushButton_Cancel->setText(QApplication::translate("Form_Settings", "\354\267\250\354\206\214", Q_NULLPTR));
        pushButton_OK->setText(QApplication::translate("Form_Settings", "\355\231\225\354\235\270", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("Form_Settings", "OCR", Q_NULLPTR));
        label_4->setText(QApplication::translate("Form_Settings", "OCR \354\204\240\355\203\235", Q_NULLPTR));
        comboBox_OCR->clear();
        comboBox_OCR->insertItems(0, QStringList()
         << QApplication::translate("Form_Settings", "Tesseract", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class Form_Settings: public Ui_Form_Settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
