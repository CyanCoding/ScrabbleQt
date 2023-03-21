#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <iostream>

// Constructor
MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
}

// Destructor
MainWindow::~MainWindow() {
    delete ui;
}

