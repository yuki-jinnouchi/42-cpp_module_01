#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
  public:
    Zombie(){};
    ~Zombie(void);
    void announce(void);
    void setName(const std::string name);

  private:
    std::string _name;
};

Zombie* newZombie(std::string name);
void    randomChump(std::string name);

#endif
