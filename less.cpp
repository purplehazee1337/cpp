#include <iostream>

double less(double num1, double num2) {
    if(num1 < num2){
        return num1;
    } else {
        return num2;
    }
}



int main() {
std::cout << less(3.12, 2.13) << std::endl; }