#include <iostream>

int main() {
    double min = 0;

    for (double value; std::cin >> value;) {
        
        if (min == 0) {
            min = value;
        } else if(min > value){
            min = value;
        }
     }

     std::cout << min << std::endl;
} 
