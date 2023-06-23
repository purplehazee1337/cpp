#include <iostream>
#include <utility>
#include <vector>

int main() {

std::vector<int> vector;

int a;

    for (double value; std::cin >> value;) {
        vector.push_back(value);
     }

    for (int i = 0; i < vector.size(); i++) {
        int min = vector[i];

        for (int x = i; x < vector.size(); x++) {
            if(min > vector[x]){
                min = vector[x];
                a = x;
            }
            
        }
    if(vector[i] != min){
    std::swap(vector[i], vector[a]);
    }
    

    for (int i = 0; i < vector.size(); i++) {
    std::cout << vector[i] << " ";
    
    } std::cout << std::endl;

    }
    
}