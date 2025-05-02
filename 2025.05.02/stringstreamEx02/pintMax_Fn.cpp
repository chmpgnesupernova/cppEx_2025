#include <iostream>

void printMax() {
	int temp, max;
	int index = 0;
	std::cin >> max;

	for (int i = 1; i < 9; i++) {
		std::cin >> temp;
		if (temp > max) { max = temp; index = i; }
	}

	std::cout << max << '\n' << index + 1;
}