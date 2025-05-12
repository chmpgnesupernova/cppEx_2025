#include <iostream>
#include <vector>
#include <string>

class BigUnsigned {
    std::vector<int> b1{};
    int sum = 0;
    int carry = 0;
    int elem = 0;
public:
    int getSize() {
        return b1.size();
    }
    int getElem(int i) {
        return b1[i];
    }
    void insertElem(int i) {
        b1.insert(b1.begin(), i);
    }
    BigUnsigned(const unsigned int& x = 0) {
        int input = x;
        while (input > 0) {
            b1.insert(b1.begin(), input % 10);
            input = input / 10;
        }
    }
    BigUnsigned(const std::string& x = "0") {
        for (int i = 0; i < x.size(); i++) {
            b1.insert(b1.begin(), (int)(x[i] - '0'));
        }
    }
    BigUnsigned operator +(BigUnsigned& b2) {
        BigUnsigned new_b(0);
        int size = (b1.size() >= b2.getSize()) ? b1.size() : b2.getSize();
        for (int i = size - 1; i >= 0; i--) {
            sum = b1[i] + b2.getElem(i) + carry;
            if (i == 0) { new_b.insertElem(sum); break; }
            if (sum >= 10) { sum -= 10;      carry = 1; }
            else { carry = 0; }

            new_b.insertElem(sum);
        }
        return new_b;
    }
};

std::ostream& operator <<(std::ostream& os, BigUnsigned& b1) {
    for (int i = 0; i < b1.getSize(); i++) {
        os << b1.getElem(i);
    }
    return os;
}

int main() {
    BigUnsigned x1(99);
    BigUnsigned x2("11");
    BigUnsigned x3 = x1 + x2;
    std::cout << x1 << ' ' << x2 << ' ' << x3;
}