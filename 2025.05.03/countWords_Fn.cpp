#include <iostream>
#include <sstream>
#include <string>

int countWords() {
	int count = 0;
	std::string line;
	std::string word;
	std::getline(std::cin, line);
	std::istringstream word_stream{ line };

	while (word_stream >> word) {
		count++;
	}


	return count;
}