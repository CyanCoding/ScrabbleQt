#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "io.h"

#include <QApplication>
#include <iostream>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    MainWindow w;
	w.show();

	std::array<std::vector<QString>, io::DICT_FILE_COUNT> dictionaries = io::init_dict();

	std::cout << dictionaries.at(3).at(50).toStdString() << std::endl;

    return a.exec();
}
