#include <iostream>
#include <cstdlib>
#include <ctime>



bool bernoulli(double p) {
    double t = rand() % 100 + 1;
    if(t / 100 <= p){
        return 1;
    } else {
        return 0;
    }
}


int main() {
std::srand(std::time(nullptr));
std::cout << std::boolalpha;
for (int counter = 0; counter < 10; ++counter) {
std::cout << bernoulli(0.2) << " "; }
std::cout << std::endl; }