#include <iostream>
#include <vector>
#include <string>

void read_vertical() {
	std::vector<std::vector<char>> src_arr(5);
	std::string temp_line;


	for (int i = 0; i < 5; i++) {
		std::getline(std::cin, temp_line);
		for (char ch : temp_line) {
			src_arr[i].push_back(ch);
		}
	}
	for (int col = 0; col < 15; col++) {
		for (int line = 0; line < 5; line++) {
			if (src_arr[line].size() > col) { std::cout << src_arr[line][col]; }
		}
	}
}