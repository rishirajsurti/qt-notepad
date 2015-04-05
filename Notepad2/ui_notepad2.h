/********************************************************************************
** Form generated from reading UI file 'notepad2.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTEPAD2_H
#define UI_NOTEPAD2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Notepad2
{
public:
    QAction *actionOpen;
    QAction *actionSave;
    QWidget *centralWidget;
    QTextEdit *textEdit;
    QPushButton *quitButton;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Notepad2)
    {
        if (Notepad2->objectName().isEmpty())
            Notepad2->setObjectName(QStringLiteral("Notepad2"));
        Notepad2->resize(400, 300);
        actionOpen = new QAction(Notepad2);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionSave = new QAction(Notepad2);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        centralWidget = new QWidget(Notepad2);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(73, 20, 221, 151));
        quitButton = new QPushButton(centralWidget);
        quitButton->setObjectName(QStringLiteral("quitButton"));
        quitButton->setGeometry(QRect(140, 180, 99, 27));
        Notepad2->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Notepad2);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 25));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        Notepad2->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Notepad2);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Notepad2->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Notepad2);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Notepad2->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);

        retranslateUi(Notepad2);

        QMetaObject::connectSlotsByName(Notepad2);
    } // setupUi

    void retranslateUi(QMainWindow *Notepad2)
    {
        Notepad2->setWindowTitle(QApplication::translate("Notepad2", "Notepad2", 0));
        actionOpen->setText(QApplication::translate("Notepad2", "Open", 0));
        actionSave->setText(QApplication::translate("Notepad2", "Save", 0));
        quitButton->setText(QApplication::translate("Notepad2", "Quit", 0));
        menuFile->setTitle(QApplication::translate("Notepad2", "File", 0));
        menuEdit->setTitle(QApplication::translate("Notepad2", "Edit", 0));
    } // retranslateUi

};

namespace Ui {
    class Notepad2: public Ui_Notepad2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTEPAD2_H
