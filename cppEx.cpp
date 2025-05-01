#include <iostream>
#include <string>
#include <sstream>
#include<vector>

int main(){
	std::string line;
	int token;
	std::vector<int> v{};

	std::getline(std::cin, line);
	std::istringstream iss{ line };

	while (iss >> token) {
		v.push_back(token);
	}
	for (int k = 0; k < v.size(); k++) {
		std::cout << v[k] << ' ';
	}
}

