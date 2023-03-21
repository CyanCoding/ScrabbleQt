#include "io.h"
#include <iostream>			// std::cout

// Q- includes are self-explanatory
#include <QFile>
#include <QTextStream>

std::array<std::vector<QString>, io::DICT_FILE_COUNT> io::init_dict() {
	std::array<std::vector<QString>, io::DICT_FILE_COUNT> full_dictionary;

	QString dictionary_paths[io::DICT_FILE_COUNT] = {
		":/dictionaries/3.txt",
		":/dictionaries/4.txt",
		":/dictionaries/5.txt",
		":/dictionaries/6.txt",
		":/dictionaries/7.txt",
		":/dictionaries/8.txt",
		":/dictionaries/9.txt",
		":/dictionaries/10up.txt"
	};

	for (int i = 0; i < io::DICT_FILE_COUNT; i++) {
		QFile file(dictionary_paths[i]);
		if (!file.open(QIODevice::ReadOnly)) {
			std::cout << "ERROR: Dictionary " << i << " did not open properly!" << std::endl;
			continue;
		}

		QTextStream instream(&file);
		while (!instream.atEnd())
			full_dictionary[i].push_back(instream.readLine());
	}

	return full_dictionary;
}
