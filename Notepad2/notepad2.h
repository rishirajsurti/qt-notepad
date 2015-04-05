#ifndef NOTEPAD2_H
#define NOTEPAD2_H

#include <QMainWindow>

namespace Ui {
class Notepad2;
}

class Notepad2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit Notepad2(QWidget *parent = 0);
    ~Notepad2();


private slots:
    void on_quitButton_clicked();
    void on_actionOpen_triggered();
    void on_actionSave_triggered();
private:
    Ui::Notepad2 *ui;

};

#endif // NOTEPAD2_H
