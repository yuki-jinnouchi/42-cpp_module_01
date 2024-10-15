#include "Zombie.hpp"

Zombie::~Zombie() {
  std::cout << _name << ": "
            << "..." << std::endl;
}

void Zombie::announce(void) {
  std::cout << _name << ": "
            << "Braiiiiiiinnnssss..." << std::endl;
}

void Zombie::setName(std::string name) {
  _name = name;
}
