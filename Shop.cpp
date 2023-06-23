#include <iostream>

int main() {
    int hour;
    int minute;
    std::cin >> hour >> minute;

    if(hour >= 11 && hour <= 17) {
        std::cout << "true" << std::endl;
    } else if (hour == 10 && minute >= 30){
        std::cout << "true" << std::endl;
    } else if (hour == 18 && minute <= 30){
        std::cout << "true" << std::endl;
    } else {
        std::cout << "false" << std::endl;
    }

}