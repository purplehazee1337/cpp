#include <iostream>
#include <cmath>

int fraction(double &integral, double &fractional, double num) {
    integral = int(num);
    fractional = num - integral;
    return integral ,fractional;
}

int main() {
double integral, fractional;
fraction(integral, fractional, 343.14159);
std::cout << integral << " " << fractional << std::endl; }