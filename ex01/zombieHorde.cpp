#include "Zombie.hpp"

/*
It must allocate N Zombie objects in a single allocation.
Then, it has to initialize the zombies, giving each one of
them the name passed as parameter.
The function returns a pointer to the first zombie.
*/
Zombie* zombieHorde(int N, std::string name) {
  Zombie*     horde;
  std::string num;

  num = "0";
  horde = new Zombie[N];
  for (int i = 0; i < N; i++) {
    num[0] = i + '0';
    horde[i].setName(name + "_" + num);
  }
  return horde;
}
