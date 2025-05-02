#include<iostream>
#include<string>
#include<sstream>

void printSmall() {
	std::string N_X;
	std::string inputSequence;
	std::getline(std::cin, N_X);
	std::getline(std::cin, inputSequence);
	std::istringstream iss_N_X{ N_X };
	std::istringstream iss_Sequence{ inputSequence };

	int N;
	int X;
	iss_N_X >> N;
	iss_N_X >> X;

	int* sequenceArr = new int[N];
	int temp;
	for (int i = 0; i < N; i++) {
		iss_Sequence >> temp;
		sequenceArr[i] = temp;
		//std::cout << temp << ' ' << sequenceArr[i] << '\n';
	}

	for (int k = 0; k < N; k++) {
		if (sequenceArr[k] < X) std::cout << sequenceArr[k] << ' ';
	}

	delete[] sequenceArr;

}


int main() {
	printSmall();
}