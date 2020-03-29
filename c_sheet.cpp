#include <iostream>

class Character{
  //health
  int total_health;
  int def_health = 50;
  int bg_health;
  int lvl_health;
  int current_health;
  int health_damage;

public:
  int health(){
    int total_health = def_health + bg_health + lvl_health;
    int current_health = total_health + health_damage;
  }
  int class_ent(){
    
    
  }
  
};
