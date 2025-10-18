/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *labelColorSeleccionado;
    QListWidget *listWidgetColores;
    QPushButton *btnAgregar;
    QPushButton *btnEliminar;
    QLineEdit *txtNuevoColor;
    QLabel *labelTitulo;
    QMenuBar *menubar;
    QMenu *menuMostrar_color;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        labelColorSeleccionado = new QLabel(centralwidget);
        labelColorSeleccionado->setObjectName("labelColorSeleccionado");
        labelColorSeleccionado->setGeometry(QRect(170, 120, 161, 41));
        listWidgetColores = new QListWidget(centralwidget);
        listWidgetColores->setObjectName("listWidgetColores");
        listWidgetColores->setGeometry(QRect(170, 170, 151, 141));
        btnAgregar = new QPushButton(centralwidget);
        btnAgregar->setObjectName("btnAgregar");
        btnAgregar->setGeometry(QRect(350, 170, 100, 30));
        btnEliminar = new QPushButton(centralwidget);
        btnEliminar->setObjectName("btnEliminar");
        btnEliminar->setGeometry(QRect(350, 210, 100, 30));
        txtNuevoColor = new QLineEdit(centralwidget);
        txtNuevoColor->setObjectName("txtNuevoColor");
        txtNuevoColor->setGeometry(QRect(350, 250, 150, 30));
        labelTitulo = new QLabel(centralwidget);
        labelTitulo->setObjectName("labelTitulo");
        labelTitulo->setEnabled(true);
        labelTitulo->setGeometry(QRect(170, 69, 241, 31));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        labelTitulo->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        menuMostrar_color = new QMenu(menubar);
        menuMostrar_color->setObjectName("menuMostrar_color");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuMostrar_color->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        labelColorSeleccionado->setText(QCoreApplication::translate("MainWindow", "Seleccione un color...", nullptr));
        btnAgregar->setText(QCoreApplication::translate("MainWindow", "Agregar", nullptr));
        btnEliminar->setText(QCoreApplication::translate("MainWindow", "Eliminar", nullptr));
        txtNuevoColor->setPlaceholderText(QCoreApplication::translate("MainWindow", "Nuevo color...", nullptr));
        labelTitulo->setText(QCoreApplication::translate("MainWindow", "Selector de Colores", nullptr));
        menuMostrar_color->setTitle(QCoreApplication::translate("MainWindow", "Mostrar color", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
