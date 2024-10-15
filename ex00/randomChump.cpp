#include "Zombie.hpp"

/*
void randomChump( std::string name );
It creates a zombie, name it, and the zombie announces itself.
*/

void randomChump(std::string name) {
  Zombie z = Zombie();
  z.setName(name);
  z.announce();
  return;
}
