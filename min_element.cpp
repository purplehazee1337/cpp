#include <vector>
#include <iostream>

std::vector<int>::iterator min_element(std::vector<int>::iterator begin, std::vector<int>::iterator end) {

while (begin < end) {
auto minimum = begin;
for (auto iterator = begin; ++iterator < end;) {
if (*iterator < *minimum) {
minimum = iterator; }}



  return minimum;
 } return end;}

std::vector<int>::const_iterator min_element(std::vector<int>::const_iterator cbegin, std::vector<int>::const_iterator cend) {

while (cbegin < cend) {
auto minimum = cbegin;
for (auto iterator = cbegin; ++iterator < cend;) {
if (*iterator < *minimum) {
minimum = iterator; }}



  return minimum;
 }return cend;}





int main() {
std::vector<int> vector {8, -3, 12, 8, -5, 37, 38, 12, -5, 3, 37, 12, -5};
auto result1 = min_element(vector.begin(), vector.end());
auto result2 = min_element(vector.cbegin(), vector.cend());
std::cout << result1 - vector.begin() << " "
<< result2 - vector.cbegin() << std::endl; }
