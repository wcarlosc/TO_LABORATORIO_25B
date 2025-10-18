#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , taskWidget(nullptr)
{
    ui->setupUi(this);
    connect(ui->addTaskButton, &QPushButton::clicked, this, &MainWindow::addTask);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::addTask()
{
    taskWidget = new Task(this);

    // MainWindow recibe señal cuando checkbox se marca
    connect(taskWidget, &Task::taskCompleted, this, [this](const QString &name) {
        ui->statusLabel->setText("Completada: " + name);
    });

    taskWidget->show();
    ui->statusLabel->setText("Tarea agregada");
}
