#include <fstream>
#include <iostream>
#include <sstream>
#include <string> 
#include <vector>


int main(int argc, char *argv[]) {
std::ifstream input(argv[1]);

std::vector<double> zad;
std::vector<double> wynik;
int pom1 = 0;
int ucz = 0;

for (std::string line; std::getline(input, line);) {

double sum = 0.;
std::string word;
std::string name;
int l = 0;


for (std::istringstream stream(line); stream >> word;){
    double price;
    if (std::istringstream(word) >> price) {
    sum += price; 
    if(pom1 == 0){
    zad.push_back(price);
    } else if(pom1 == 1){
        wynik.push_back(price);
        
    } else {
        wynik[l] += price;
        l++;
    }

    } else {
        name = word;
        ucz++;
    }

    }
    if(name != ""){
    std::cout << name << " " << sum << std::endl;
    }
    pom1++;
}


for(int i = 0; i < zad.size(); i++){
    std::cout << (i + 1) << ' ' << (wynik[i] /ucz) << std::endl;
}
input.close();
}