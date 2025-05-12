#include <iostream> 
#include <string>
#include <vector>
#include <cmath>


void isAscending() {
	std::string state = "non";
	int past_num;
	int current_num;
	std::cin >> past_num;
	if (past_num == 1) {
		state = "ascending";
		while (std::cin >> current_num) {
			if (current_num != past_num + 1) { state = "mixed"; break; }
			past_num = current_num;
		}
	}
	else if (past_num == 8) {
		state = "descending";
		while (std::cin >> current_num) {
			if (current_num != past_num - 1) { state = "mixed"; break; }
			past_num = current_num;
		}
	}
	else state = "mixed";

	std::cout << state;
}

void countRemain() {
	std::vector<int> remain{};
	int input_num;
	bool approve = true;
	while (std::cin >> input_num) {
		for (const int& elem : remain) {
			approve = (elem != input_num % 42) ? true : false;
			if (!approve) break;
		}
		if (approve) remain.push_back(input_num % 42);
	}
	std::cout << remain.size();
}

void combo() {
	std::string score;
	int test = 0;
	int add_score = 0;
	int sum;
	char past_ch;
	char present_ch;
	std::cin >> test;

	for (int i = 0; i < test; i++) {
		sum = 0;
		add_score = 0;
		std::cin >> score;
		past_ch = score[0];
		for (const char& elem : score) {
			present_ch = elem;
			if (past_ch == 'X') {
				if (present_ch == 'O') { add_score = 1; sum += add_score; }
				if (present_ch == 'X') { add_score = 0; }
			}
			if (past_ch == 'O') {
				if (present_ch == 'O') { add_score++; sum += add_score; }
				if (present_ch == 'X') { add_score = 0; }
			}
			past_ch = present_ch;
		}
		std::cout << sum << '\n';
	}
	
}

void posAlpha() {
	std::string word;
	int pos = -1;
	std::cin >> word;
	for (char alpha = 'a'; alpha <= 'z'; alpha++) {
		for (int i = 0; i < word.size(); i++) {
			if (word[i] == alpha) { pos = i; break; }
		}
		std::cout << pos << ' ';
		pos = -1;
	}
}

void isRightTri(int a, int b, int c) {
	int largest = a, x1=b, x2=c;
	if (b > largest) { largest = b; x1 = a; x2 = c; }
	if (c > largest) { largest = c; x1 = a; x2 = b; }

	
	if (pow(largest, 2) == pow(x1, 2) + pow(x2, 2)) {
		std::cout << "right" << '\n';
	}
	else std::cout << "wrong" << '\n';
}

void getNum() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int num_part;
	int T = 0;
	int P = 0;
	std::string size_info;
	std::cin >> num_part;
	std::getline(std::cin, size_info);
	std::cin >> T >> P;
	for (auto elem : size_info) {
		int (elem) / T
	}
}

int main() {
	//countRemain();
	//combo();
	//posAlpha();
	/*int a, b, c;
	std::cin >> a >> b >> c;
	while (!(a == 0 && b == 0 && c == 0)) {
		isRightTri(a, b, c);
		std::cin >> a >> b >> c;
	}*/


}