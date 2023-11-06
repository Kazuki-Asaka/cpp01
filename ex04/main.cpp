#include <iostream>
#include <string>
#include <fstream>

void	copy(std::string filename, std::string s1, std::string s2) {
	std::string	new_file;

	new_file = filename + ".replace";
	std::ifstream ifs(filename);
	if (!ifs) {
		std::cerr << "read file open error" << std::endl;
		std::exit(1);
	}
	std::ofstream ofs(new_file);
	if (!ofs) {
		std::cerr << "newfile open error" << std::endl;
		std::exit(1);
	}
	while (!ifs.eof()) {
		std::string buf;
		std::getline(ifs, buf);
		// if (!ifs) {
		// 	std::cerr << "read error" << std::endl;
		// 	std::exit(1);
		// }
		size_t position;
		position = - ( s2.length() + 1);
		while (position != buf.npos) {
			position = buf.find(s1, position + s2.length() + 1);
			if (position != buf.npos) {
				buf.erase(position, s1.length());
				buf.insert(position, s2);
			}
		}
		buf += "\n";
		ofs << buf;
	}
}

int	main() {
	std::string filename;
	std::string before;
	std::string after;

	filename = "test";
	before = "test";
	after = "t";
	copy(filename, before, after);
}