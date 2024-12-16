#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
    : _name(name)
    , _weapon(weapon) {
  std::cout << _name << " is born" << std::endl;
  std::cout << _name << " has a " << _weapon.getType() << std::endl;
  return;
}

HumanA::~HumanA(void) {
  std::cout << _name << " is dead" << std::endl;
}

void HumanA::setName(std::string name) {
  _name = name;
  return;
}

void HumanA::setWeapon(Weapon weapon) {
  _weapon = weapon;
  std::cout << _name << " has a "
    << _weapon.getType() << std::endl;
  return;
}

void HumanA::attack(void) {
  std::cout << _name << " attacks with their "
    << _weapon.getType() << std::endl;
  return;
}
