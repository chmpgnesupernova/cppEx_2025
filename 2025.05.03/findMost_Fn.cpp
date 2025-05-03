#include <iostream>
#include <vector>
#include <string>
#include <tuple>

char findLargest(std::vector<std::tuple<char, int>>& v) {
	int Largest_num = std::get<1>(v[0]);
	char Largest_char = std::get<0>(v[0]);

	for (int i = 1; i < v.size(); i++) {
		if (std::get<1>(v[i]) > Largest_num) {
			Largest_char = std::get<0>(v[i]);
			Largest_num = std::get<1>(v[i]);
		}
		else if (std::get<1>(v[i]) == Largest_num) {
			Largest_char = '?';
		}
	}
	return Largest_char;
}
char findMost() {
	std::vector<std::tuple<char, int>> pair;
	std::string line;
	std::getline(std::cin, line);

	for (char& ch : line) {
		char alpha = std::toupper(ch);
		int i = 0;
		for (; i < pair.size(); i++) {
			if (std::get<0>(pair[i]) == alpha) {
				std::get<1>(pair[i])++; break;
			}
		}
		if (i == pair.size()) {
			pair.emplace_back(alpha, 1);
		}
	}

	return findLargest(pair);
}
