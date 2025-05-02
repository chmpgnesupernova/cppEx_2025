#include <iostream>

void doBasket(int strt, int end, int num, int basket[]) {
	for (; strt <= end; strt++) {
		basket[strt - 1] = num;
	}
}

void printBasket() {
	int size, repeat;
	std::cin >> size >> repeat;

	int* basket = new int[size] {0};

	for (int i = 0; i < repeat; i++) {
		int strt_basket, end_basket, ball_num;
		std::cin >> strt_basket >> end_basket >> ball_num;

		doBasket(strt_basket, end_basket, ball_num, basket);
	}
	for (int k = 0; k < size; k++) {
		std::cout << basket[k] << ' ';
	}
	delete[] basket;
}