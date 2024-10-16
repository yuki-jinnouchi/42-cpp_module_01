#include "Weapon.hpp"

Weapon::Weapon(std::string type){
  _type = type;
}

std::string Weapon::getType(void){
  return _type;
}

void Weapon::setType(std::string type){
  std::cout << "\"" << type << "\" is set as a Weapon" << std::endl;
  _type = type;
}
