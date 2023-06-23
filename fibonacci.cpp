#include <iostream>

int main() {
    int num;
    std::cin >> num;

    int first = 1;
    int second = 2;

    for(int i = 0; i < num; ++i) {
        int p;
    if (i == 0){
        p = 1;
    } else if (i == 1){
        p = 2;
    } else {
        p = first + second;
        first = second;
        second = p;
    }



    std::cout << p << " ";
    }
}