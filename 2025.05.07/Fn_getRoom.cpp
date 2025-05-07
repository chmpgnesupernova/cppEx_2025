#include <iostream>
#include <string>

void getRoom(int h, int w, int n) {
	int story = n % h;
	int roomNum = n / h + 1;
	if (n % h == 0) {
		story = h;
		roomNum = n / h;
	}
	if (roomNum < 10) {
		std::cout << story << 0 << roomNum << '\n';
	}
	else std::cout << story << roomNum << '\n';
}

void get_frequency(int a, int b, int c) {
	int src = a * b * c;
	int count = 0;
	std::string src_str;
	src_str = std::to_string(src);
	for (char c = '0'; c <= '9'; c++) {
		count = 0;
		for (auto elem : src_str) {
			if (elem == c) count++;
		}
		std::cout << count << '\n';
	}
}
/*
int main(){
	int H, W, N, T;
	std::cin >> T;

	for (int i = 0; i < T; i++) {
		std::cin >> H >> W >> N;
		getRoom(H, W, N);
	}
}
*/