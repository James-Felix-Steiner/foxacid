#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

int main() {
  float m, rg, final;
  int p;
  std::cout << "Earth Weight is: ";
  std::cin >> m;
  std::cout << "Planet Number is: ";
  std::cin >> p; 
  if (p == 1) {
      rg = 0.38;
  }
  else if (p == 2) {
      rg = 0.91;
  }
  else if (p == 3) {
      rg = 0.38;
  }
  else if (p == 4) {
      rg = 2.34;
  }
  else if (p == 5) {
      rg = 1.06;
  }
  else if (p == 6) {
      rg = 0.92;
  }
  else if (p == 7) {
      rg = 1.19;
  }
  else {
    rg = 0;
  }
    final = m * rg;
  std::cout << "Weight on the destination point: " << final << std::endl;
  return 0;
}