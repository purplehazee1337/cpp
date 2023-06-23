#include <fstream>

int main(int argc, char *argv[]) {
std::ifstream input(argv[1]);
std::ofstream output(argv[2]);

int pom1 = 0;

int num = 1;
char c;

while(input.get(c)){
    if(pom1 == 0){
        output << num << ' ';
        pom1 = 1;
        num++;
    }
    if(c == '\n'){
        pom1 = 0;
    }
    
    output << c;

}
 

output.close();
input.close(); 
}
