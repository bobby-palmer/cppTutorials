#include <cstdlib>
#include <math.h>
#include <iostream>

int randRange(int minDist, int maxDist) {
  srand((unsigned) time(NULL));
  int range = maxDist - minDist;
  int distance{rand() % range + minDist};
  return distance;
}
int calcProj(double angle, int speed, int gravity) {
  int time = sin(angle * M_PI / 180) * speed * 2 / gravity;
  int hSpeed = cos(angle * M_PI / 180) * speed;
  return time * hSpeed;
}
bool fire(int distance, int speed, int gravity) {
  std::cout << "angle to fire at : ";
  double angle{};
  std::cin >> angle;
  int actual{calcProj(angle, speed, gravity)};
  if (actual > distance) {
    std::cout << "you overshot by " << actual - distance << std::endl;
  } else if (actual < distance) {
    std::cout << "you undershot by " << distance - actual << std::endl;
  } else {
    std::cout << "Congratuations, you won!" << std::endl;
    return true;
  }
  return false;
}
int main() {
  int balls{20};
  int distance{randRange(300, 400)};
  int speed{200};
  int gravity{32};
  std::cout << "Your enemy is " << distance << " ft away and you have " << balls << " cannonballs to hit him with" << std::endl;
  for (int i{0}; i < balls; ++i){
    if (fire(distance, speed, gravity)) return 0;
  }
  std::cout << "Uh oh, you ran out of cannonballs!" << std::endl;
  return 0;
}
