#include <iostream>
int main() {
  std::cout << "Insert a number :";
  long long input{0};
  std::cin >> input;
  double prefix{0};
  int exp{0};
  long long pow{1};
  while (input / pow > 9) {
    exp++;
    pow *= 10;
  }
  prefix = static_cast<double>(input) / pow;
  std::cout << "Your number in scientific notion is : " << prefix << " E" << exp << std::endl;
}
