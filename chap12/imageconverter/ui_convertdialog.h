/********************************************************************************
** Form generated from reading UI file 'convertdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONVERTDIALOG_H
#define UI_CONVERTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_ConvertDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *sourceFileLabel;
    QLineEdit *sourceFileEdit;
    QPushButton *browseButton;
    QLabel *targetFormatLabel;
    QComboBox *targetFormatComboBox;
    QSpacerItem *spacerItem;
    QGroupBox *optionsGroupBox;
    QHBoxLayout *hboxLayout;
    QCheckBox *enhanceCheckBox;
    QCheckBox *monochromeCheckBox;
    QTextEdit *outputTextEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ConvertDialog)
    {
        if (ConvertDialog->objectName().isEmpty())
            ConvertDialog->setObjectName(QStringLiteral("ConvertDialog"));
        ConvertDialog->resize(285, 327);
        gridLayout = new QGridLayout(ConvertDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        sourceFileLabel = new QLabel(ConvertDialog);
        sourceFileLabel->setObjectName(QStringLiteral("sourceFileLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(sourceFileLabel->sizePolicy().hasHeightForWidth());
        sourceFileLabel->setSizePolicy(sizePolicy);
        sourceFileLabel->setFrameShape(QFrame::NoFrame);
        sourceFileLabel->setFrameShadow(QFrame::Plain);

        gridLayout->addWidget(sourceFileLabel, 0, 0, 1, 1);

        sourceFileEdit = new QLineEdit(ConvertDialog);
        sourceFileEdit->setObjectName(QStringLiteral("sourceFileEdit"));

        gridLayout->addWidget(sourceFileEdit, 0, 1, 1, 2);

        browseButton = new QPushButton(ConvertDialog);
        browseButton->setObjectName(QStringLiteral("browseButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(browseButton->sizePolicy().hasHeightForWidth());
        browseButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(browseButton, 0, 3, 1, 1);

        targetFormatLabel = new QLabel(ConvertDialog);
        targetFormatLabel->setObjectName(QStringLiteral("targetFormatLabel"));
        sizePolicy.setHeightForWidth(targetFormatLabel->sizePolicy().hasHeightForWidth());
        targetFormatLabel->setSizePolicy(sizePolicy);

        gridLayout->addWidget(targetFormatLabel, 1, 0, 1, 1);

        targetFormatComboBox = new QComboBox(ConvertDialog);
        targetFormatComboBox->setObjectName(QStringLiteral("targetFormatComboBox"));
        sizePolicy1.setHeightForWidth(targetFormatComboBox->sizePolicy().hasHeightForWidth());
        targetFormatComboBox->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(targetFormatComboBox, 1, 1, 1, 1);

        spacerItem = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 1, 2, 1, 2);

        optionsGroupBox = new QGroupBox(ConvertDialog);
        optionsGroupBox->setObjectName(QStringLiteral("optionsGroupBox"));
        hboxLayout = new QHBoxLayout(optionsGroupBox);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        enhanceCheckBox = new QCheckBox(optionsGroupBox);
        enhanceCheckBox->setObjectName(QStringLiteral("enhanceCheckBox"));

        hboxLayout->addWidget(enhanceCheckBox);

        monochromeCheckBox = new QCheckBox(optionsGroupBox);
        monochromeCheckBox->setObjectName(QStringLiteral("monochromeCheckBox"));

        hboxLayout->addWidget(monochromeCheckBox);


        gridLayout->addWidget(optionsGroupBox, 2, 0, 1, 4);

        outputTextEdit = new QTextEdit(ConvertDialog);
        outputTextEdit->setObjectName(QStringLiteral("outputTextEdit"));
        outputTextEdit->setReadOnly(true);

        gridLayout->addWidget(outputTextEdit, 3, 0, 1, 4);

        buttonBox = new QDialogButtonBox(ConvertDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 4, 1, 1, 3);

#ifndef QT_NO_SHORTCUT
        sourceFileLabel->setBuddy(sourceFileEdit);
        targetFormatLabel->setBuddy(targetFormatComboBox);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(sourceFileEdit, browseButton);
        QWidget::setTabOrder(browseButton, targetFormatComboBox);
        QWidget::setTabOrder(targetFormatComboBox, enhanceCheckBox);
        QWidget::setTabOrder(enhanceCheckBox, monochromeCheckBox);
        QWidget::setTabOrder(monochromeCheckBox, outputTextEdit);

        retranslateUi(ConvertDialog);

        QMetaObject::connectSlotsByName(ConvertDialog);
    } // setupUi

    void retranslateUi(QDialog *ConvertDialog)
    {
        ConvertDialog->setWindowTitle(QApplication::translate("ConvertDialog", "Image Converter", 0));
        sourceFileLabel->setText(QApplication::translate("ConvertDialog", "&Source File:", 0));
        browseButton->setText(QApplication::translate("ConvertDialog", "&Browse", 0));
        browseButton->setShortcut(QApplication::translate("ConvertDialog", "Alt+B", 0));
        targetFormatLabel->setText(QApplication::translate("ConvertDialog", "&Target Format:", 0));
        targetFormatComboBox->clear();
        targetFormatComboBox->insertItems(0, QStringList()
         << QApplication::translate("ConvertDialog", "BMP", 0)
         << QApplication::translate("ConvertDialog", "EPS", 0)
         << QApplication::translate("ConvertDialog", "GIF", 0)
         << QApplication::translate("ConvertDialog", "JPEG", 0)
         << QApplication::translate("ConvertDialog", "PNG", 0)
         << QApplication::translate("ConvertDialog", "TIFF", 0)
        );
        optionsGroupBox->setTitle(QApplication::translate("ConvertDialog", "Options", 0));
        enhanceCheckBox->setText(QApplication::translate("ConvertDialog", "&Enhance", 0));
        enhanceCheckBox->setShortcut(QApplication::translate("ConvertDialog", "Alt+E", 0));
        monochromeCheckBox->setText(QApplication::translate("ConvertDialog", "&Monochrome", 0));
        monochromeCheckBox->setShortcut(QApplication::translate("ConvertDialog", "Alt+M", 0));
    } // retranslateUi

};

namespace Ui {
    class ConvertDialog: public Ui_ConvertDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONVERTDIALOG_H
