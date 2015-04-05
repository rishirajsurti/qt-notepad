#include "notepad2.h"
#include "ui_notepad2.h"
#include <QFileDialog>
#include <QFile>
#include <QMessageBox>
#include <QTextStream>
Notepad2::Notepad2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Notepad2)
{
    ui->setupUi(this);
}

Notepad2::~Notepad2()
{
    delete ui;
}
void Notepad2::on_quitButton_clicked()
{
    qApp->quit();
}
void Notepad2::on_actionOpen_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"), QString(),
            tr("Text Files (*.txt);;C++ Files (*.cpp *.h)"));

    if (!fileName.isEmpty()) {
        QFile file(fileName);
        if (!file.open(QIODevice::ReadOnly)) {
            QMessageBox::critical(this, tr("Error"), tr("Could not open file"));
            return;
        }
        QTextStream in(&file);
        ui->textEdit->setText(in.readAll());
        file.close();
    }
}
void Notepad2::on_actionSave_triggered()
{
    QString fileName = QFileDialog::getSaveFileName(this, tr("Save File"), QString(),
            tr("Text Files (*.txt);;C++ Files (*.cpp *.h)"));

    if (!fileName.isEmpty()) {
        QFile file(fileName);
        if (!file.open(QIODevice::WriteOnly)) {
            // error message
        } else {
            QTextStream stream(&file);
            stream << ui->textEdit->toPlainText();
            stream.flush();
            file.close();
        }
    }
}
