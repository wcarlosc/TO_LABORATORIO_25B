#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMap>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QStringList colores = {"Rojo", "Verde", "Azul", "Amarillo", "Naranja", "Morado"};
    ui->listWidgetColores->addItems(colores);

    connect(ui->listWidgetColores, &QListWidget::itemClicked, this, &MainWindow::mostrarColorSeleccionado);
    connect(ui->btnAgregar, &QPushButton::clicked, this, &MainWindow::agregarColor);
    connect(ui->btnEliminar, &QPushButton::clicked, this, &MainWindow::eliminarColor);
}

void MainWindow::mostrarColorSeleccionado(QListWidgetItem *item)
{
    QString nombreColor = item->text();
    ui->labelColorSeleccionado->setText(nombreColor);

    QMap<QString, QString> mapaColores;
    mapaColores["Rojo"] = "red";
    mapaColores["Verde"] = "green";
    mapaColores["Azul"] = "blue";
    mapaColores["Amarillo"] = "yellow";
    mapaColores["Naranja"] = "orange";
    mapaColores["Morado"] = "purple";

    ui->labelColorSeleccionado->setStyleSheet("QLabel { color: " + mapaColores[nombreColor] + "; }");
}
void MainWindow::agregarColor()
{
    QString nuevoColor = ui->txtNuevoColor->text().trimmed();
    if (!nuevoColor.isEmpty()) {
        ui->listWidgetColores->addItem(nuevoColor);
        ui->txtNuevoColor->clear();
    }
}

void MainWindow::eliminarColor()
{
    delete ui->listWidgetColores->takeItem(ui->listWidgetColores->currentRow());
}

MainWindow::~MainWindow()
{
    delete ui;
}
