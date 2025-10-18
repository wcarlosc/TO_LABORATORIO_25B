#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include "Task.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
public slots:
    void addTask();

private:
    Ui::MainWindow *ui;
    Task *taskWidget;
};
#endif // MAINWINDOW_H
