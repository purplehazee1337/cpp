#include <iostream>
#include <vector>


std::vector<int>::iterator partial_sum(std::vector<int>::const_iterator cbegin, std::vector<int>::const_iterator cend, std::vector<int>::iterator begin) {

for (auto iterator = cbegin; iterator < cend; ++iterator) {

    *(begin++ + 1) += *iterator;
 }

return begin; }






int main() {
std::vector<int> vector {5, -5, 1, -1, 3, -3};
auto result = partial_sum(vector.cbegin(), vector.cend(), vector.begin());
for (auto iterator = vector.cbegin(); iterator < result;) {
std::cout << *iterator++ << " "; }
std::cout << std::endl; }
