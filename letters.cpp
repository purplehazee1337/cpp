#include <cctype>
#include <iostream>
#include <vector>

int main(){

std::vector<int> vector;

for(int i = 0; i < 25; i++){
    vector.push_back(0);
}


 for (char c; std::cin >> c;) {
    if(isalpha(c)){
            c = tolower(c);
            int i = int(c) - 97;
            vector[i] = (vector[i] + 1);
        }
    }


for(int i = 0; i <= 25; i++){
    std::cout << vector[i] << ' ';
}
}