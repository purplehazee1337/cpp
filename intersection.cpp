#include <vector>
#include <iostream>

std::vector<int> intersection(const std::vector<int> &vector1, const std::vector<int> &vector2) {

    std::vector<int> vectorR;

    for(int i = 0; i < vector1.size(); i++){
        
        for(int x = 0; x < vector2.size(); x++) {
            if(vector1[i] == vector2[x]) {
                vectorR.push_back(vector1[i]);
            }
        }
   }
    return vectorR;
    
}


int main() {
const std::vector<int> vector1 {-7, 2, 3, 7, 15, 18, 23},
vector2 {-8, 3, 5, 8, 15, 23, 30};
std::vector<int> result = intersection(vector1, vector2);
for (int element: result) {
std::cout << element << " "; }
std::cout << std::endl; }