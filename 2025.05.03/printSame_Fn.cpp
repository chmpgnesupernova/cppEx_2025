#include <iostream>
#include <string>

void printSame() {
	std::string line;
	std::string add_line;
	std::getline(std::cin, line);

	while (true) {
		std::getline(std::cin, add_line);

		if (add_line.empty()) break;
		else line = line + '\n' + add_line;
	}
	std::cout << line;
}