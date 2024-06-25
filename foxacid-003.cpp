#include <iostream>
#include <cmath>

int main() {
  int year;
  std::cout << "Input Year: ";
  std::cin >> year;
  if (year < 1000) {  
    std::cout << "It is not a four-figit number.";
    }
  else if (year % 400 == 0) {
    std::cout << "It is a leap year.";
    }
  else if (year % 100 == 0) {
    std::cout << "It is not a leap year.";
    }
  else if (year % 4 == 0) {
    std::cout << "It is a leap year.";
    }
  else {
    std::cout << "It is not a leap year.";
    return 0;
  }
}