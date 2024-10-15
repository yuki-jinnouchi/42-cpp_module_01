#include "Zombie.hpp"

int main(void) {
  Zombie *zombie_a;
  zombie_a = newZombie("Alice");
  zombie_a->announce();
  randomChump("Bruno");
  delete zombie_a;
  return (0);
}
