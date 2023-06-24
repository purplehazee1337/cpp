#include <string>
#include <iostream>

std::string::iterator function(std::string::const_iterator cbegin, std::string::const_iterator cend, std::string::iterator begin) {
	
	int pom = 0;
	char priv;
	
	for (auto it = cbegin; it < cend; ++it) {
		
		if(pom == 0){
			char priv = *it;
			*begin = *it;
			begin++;
			pom++;
		} else if(pom != 0){
			
			
			if(priv != *it){
				priv = *it;
				*begin = *it;
			begin++;
			}		
		}
    }
		
	return begin;
 }







int main() {
	std::string in = "peppermint 1001 bubbles ballon gum", out(100, '*');
	auto e = function(in.cbegin(), in.cend(), out.begin());
	int n = e - out.begin();
	std::string s = out.substr(0, n);
	bool b = (s == "pepermint 101 bubles balon gum");
	std::cout << std::boolalpha << b << std::endl;
}
