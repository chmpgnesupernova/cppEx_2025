#include <iostream>
#include <vector>
#include <sstream>


std::string VectorString(const std::vector<double>& v) {
	std::string result;
	std::stringstream temp_string;

	for (const auto& elem : v) {
		temp_string << elem << ", ";
	}
	result = temp_string.str();
	return result;
}