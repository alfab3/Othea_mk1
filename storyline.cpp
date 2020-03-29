#include <iostream>
#include "backgrounds.h"

int main(){

  std::cout << "Welcome to Othea\n";
  int init_bg;
  std::cout << "Please select your backrgound:\n";
  std::cout << "1: Traveler stopped at an Inn\n";
  std::cout << "2: An apprentice of a trade\n";
  std::cout << "3: A slave\n";
  std::cin >> init_bg;
  background(init_bg);
  std::cout << "Please select a class:\n";
  std::cout << "1: Wizard\n";
  std::cout << "2: Warrior\n";
  std::cout << "3: Knight\n";
  std::cout << "4: Rogue\n";
  std::cout << "5: Assassin\n";
  
}
