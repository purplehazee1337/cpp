#include <iostream>

int main() {
    int year;
    std::cin >> year;
    if (year % 4 == 0) {
        if (year % 100 == 0) {

            if (year % 400 == 0) {
                std::cout << "true" << std::endl;
            } else {
                std::cout << "false" << std::endl;
            }
        } else {
            std::cout << "true" << std::endl;
        }
    } else {
        std::cout << "false" << std::endl;
    }    
}