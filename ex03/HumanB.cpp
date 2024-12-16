#include "HumanB.hpp"

HumanB::HumanB(const std::string name)
    : _name(name) {
  _weapon = NULL;
  std::cout << _name << " is born"
    << " with no weapon" << std::endl;
  return;
}

HumanB::~HumanB(void) {
  std::cout << _name << " is dead" << std::endl;
}

void HumanB::setName(const std::string name) {
  _name = name;
  return;
}

void HumanB::setWeapon(Weapon &weapon) {
  _weapon = &weapon;
  std::cout << _name << " has a "
    << _weapon->getType() << std::endl;
  return;
}

void HumanB::attack(void) {
  if (_weapon == NULL) {
    std::cout << _name << " has no weapon..." << std::endl;
    return;
  }
  std::cout << _name << " attacks with their "
    << _weapon->getType() << std::endl;
  return;
}
