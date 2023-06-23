#include <cctype>
#include <string>
#include <iostream>

std::string initials(const std::string& name) {

    std::string initials = "";
    initials.push_back(name[0]);
   

    for(int i = 0; i < name.length() - 1; i++)
    if (name[i] == ' '){
        initials.push_back(name[i+1]);
    }
    return std::string(initials);
}



int main() {
std::cout << initials("Karol Szwed") << std::endl;
std::cout << initials(std::string("Leopold Zamielski")) << std::endl; }