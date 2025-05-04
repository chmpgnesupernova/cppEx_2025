#include <iostream>

void get_cordinate() {
    int max_line = 1;
    int max_col = 1;
    int max_element = 0;
    int element;
    int flag = 0;

    for (int line = 1; line < 10; line++) {

        for (int col = 1; col < 10; col++) {
            std::cin >> element;
            if (max_element < element) { 
                max_element = element; 
                max_col = col;
                flag = 1;
            }
        }
        if (flag == 1) { 
            max_line = line;
            flag = 0;
        }
    }
    std::cout << max_element << std::endl;
    std::cout << max_line << ' ' << max_col;

}


