#include <iostream>
#include <string>
#include <vector>

int main() {

std::vector<std::string> words(26);

std::string s;
std::string zdanie;

 while (std::cin >> s) {
    if(int(s[0]) < 97){
        words[(int(s[0])-65)] += s + " ";
    } else {
        words[(int(s[0])-97)] += s + " ";
    }
    
 }

for(int j = 0; j < words.size(); j++){
zdanie += words[j];
}

zdanie.pop_back();
std::cout << zdanie << std::endl;

}