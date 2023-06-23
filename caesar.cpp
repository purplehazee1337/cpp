#include <cstdlib>
#include <fstream>

int main(int argc, char *argv[]) {
std::ifstream input(argv[2]);
std::ofstream output(argv[3]);

int x = atoi(argv[1]);
char character;


while (input.get(character)) {
if(character >= 'a' && character <= 'z'){
character = character + x;
if(character > 'z'){
character = character - 'z' + 'a' - 1;
}
if(character < 'a'){
character = character + 'z' - 'a' + 1;
}
output << char(character);
}

else if(character >= 'A' && character <= 'Z'){
character = character + x;
if(character > 'Z'){
character = character - 'Z' + 'A' - 1;
}
if(character < 'A'){
character = character + 'Z' - 'A' + 1;
}
output << char(character);
}

else {
        output << char(character);
        }
}



output.close();
input.close(); 

}


  