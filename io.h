#include <QString>
#include <vector>
#include <array>
#ifndef IO_H
#define IO_H


class io {
	public:
		static const int DICT_FILE_COUNT = 8;
		static std::array<std::vector<QString>, 8> init_dict();
};

#endif // IO_H
