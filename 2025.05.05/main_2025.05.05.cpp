#include "header_2025.05.05.h"
#include <iostream>

int main() {

	std::vector<std::vector<int>> v{ {1, 2, 3, 4}, { 5, 6 }, {7, 8, 9} };
	std::vector<double> mean;
	std::string str;
	mean = Average(v);
	str = VectorString(mean);
	std::cout << str; 

}
