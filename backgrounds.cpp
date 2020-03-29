#include <iostream>
#include "backgrounds.h"

int background(int bg_init){
  int bg_health;
  if(bg_init==1){
    std::cout << "You have selected Traveler!\n";
    bg_health = 30;
  }
  else if(bg_init==2){
    std::cout << "You have selected Apprentice!\n";
    bg_health = 20;
  }
  else{
    std::cout << "You have selected slave!\n";
    bg_health = 10;
  }
  return 0;
}
