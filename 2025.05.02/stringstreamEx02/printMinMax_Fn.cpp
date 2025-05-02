#include <iostream>

void printMinMax() {
	int size;
	std::cin >> size;

	int temp, min, max, firstVal;
	std::cin >> firstVal;
	min = firstVal;		max = firstVal;

	for (int i = 1; i < size; i++) {
		std::cin >> temp;
		if (temp > max) max = temp;
		if (temp < min) min = temp;
	}

	std::cout << min << ' ' << max;
}