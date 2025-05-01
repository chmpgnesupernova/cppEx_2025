#include <iostream>
#include <string>
#include <sstream>
#include<vector>

int getVnumber(int& n, int& v) {
	std::string tempN;
	std::string tempArr;
	std::string tempV;

	std::getline(std::cin, tempN);
	std::istringstream iss1{ tempN };

	std::getline(std::cin, tempArr);
	std::istringstream iss2{ tempArr };

	std::getline(std::cin, tempV);
	std::istringstream iss3{ tempV };

	iss1 >> n;
	iss3 >> v;

	int temp;
	int count = 0;
	int* Arr = new int[n];

	for (int i = 0; i < n; i++) {
		iss2 >> temp;
		Arr[i] = temp;
	}

	for (int k = 0; k < n; k++) {
		if (Arr[k] == v) count++;
	}

	delete[] Arr;

	return count;
}

int main() {
	int N = 0;
	int V = 0;
	std::cout << getVnumber(N, V);
}

