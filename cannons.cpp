#include <cstdlib>
#include <math.h>
#include <iostream>

int initialize() {
  return 0;
}
bool fire() {
  return false;
}
int main() {
  int balls{20};
  int distance{initialize()};
  for (int i{0}; i < balls; ++i){
    if (fire()) std::cout << "Congratuations, you won!" << std::endl;
  }
  std::cout << "Uh oh, you lost!" << std::endl;
}
