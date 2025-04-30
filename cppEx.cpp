#include <iostream>

class simpleRational {
	int denominator = 0;
	int nominator = 1;
	double result = 0;

public:
	simpleRational(int denom = 0, int nom = 1) { result = denom / nom; }

	void Print() const {
		std::cout << result;
	}
};

int main()
{
	simpleRational r1(100, 25);
	r1.Print();
}

