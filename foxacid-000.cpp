#include <iostream>
#include <cmath>
using namespace std;

void fn(string wordlist = "ki", int k = 12) {
  cout << wordlist << " kura, " << k << " val\n";
}

int main() {
  fn("alfa", 41);
  fn("beta", 15);
  fn("gamma", 19);
  fn();
  fn("delta", 21);
  return 0;
}