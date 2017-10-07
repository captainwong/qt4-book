/********************************************************************************
** Form generated from reading UI file 'projectdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECTDIALOG_H
#define UI_PROJECTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include "projectlistwidget.h"

QT_BEGIN_NAMESPACE

class Ui_ProjectDialog
{
public:
    QGridLayout *gridLayout;
    QToolButton *rightButton;
    QSpacerItem *spacerItem;
    QSpacerItem *spacerItem1;
    QToolButton *leftButton;
    QLabel *labelB;
    QLabel *labelA;
    ProjectListWidget *projectA;
    ProjectListWidget *projectB;

    void setupUi(QDialog *ProjectDialog)
    {
        if (ProjectDialog->objectName().isEmpty())
            ProjectDialog->setObjectName(QStringLiteral("ProjectDialog"));
        ProjectDialog->resize(250, 138);
        gridLayout = new QGridLayout(ProjectDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        rightButton = new QToolButton(ProjectDialog);
        rightButton->setObjectName(QStringLiteral("rightButton"));
        const QIcon icon = QIcon(QString::fromUtf8(":/images/rightarrow.png"));
        rightButton->setIcon(icon);
        rightButton->setIconSize(QSize(22, 22));

        gridLayout->addWidget(rightButton, 3, 1, 1, 1);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 1, 1, 1, 1);

        spacerItem1 = new QSpacerItem(20, 21, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem1, 4, 1, 1, 1);

        leftButton = new QToolButton(ProjectDialog);
        leftButton->setObjectName(QStringLiteral("leftButton"));
        const QIcon icon1 = QIcon(QString::fromUtf8(":/images/leftarrow.png"));
        leftButton->setIcon(icon1);
        leftButton->setIconSize(QSize(22, 22));

        gridLayout->addWidget(leftButton, 2, 1, 1, 1);

        labelB = new QLabel(ProjectDialog);
        labelB->setObjectName(QStringLiteral("labelB"));
        labelB->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labelB, 0, 2, 1, 1);

        labelA = new QLabel(ProjectDialog);
        labelA->setObjectName(QStringLiteral("labelA"));
        labelA->setAlignment(Qt::AlignHCenter);

        gridLayout->addWidget(labelA, 0, 0, 1, 1);

        projectA = new ProjectListWidget(ProjectDialog);
        projectA->setObjectName(QStringLiteral("projectA"));

        gridLayout->addWidget(projectA, 1, 0, 4, 1);

        projectB = new ProjectListWidget(ProjectDialog);
        projectB->setObjectName(QStringLiteral("projectB"));

        gridLayout->addWidget(projectB, 1, 2, 4, 1);


        retranslateUi(ProjectDialog);

        QMetaObject::connectSlotsByName(ProjectDialog);
    } // setupUi

    void retranslateUi(QDialog *ProjectDialog)
    {
        ProjectDialog->setWindowTitle(QApplication::translate("ProjectDialog", "Choose Project", 0));
        rightButton->setText(QApplication::translate("ProjectDialog", "...", 0));
        leftButton->setText(QApplication::translate("ProjectDialog", "...", 0));
        labelB->setText(QApplication::translate("ProjectDialog", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:Sans Serif; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Project B</span></p></body></html>", 0));
        labelA->setText(QApplication::translate("ProjectDialog", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:Sans Serif; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Project A</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class ProjectDialog: public Ui_ProjectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECTDIALOG_H
