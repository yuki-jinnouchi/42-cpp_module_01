#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include <iostream>
#include <string>

#include "Weapon.hpp"

class HumanB {
  public:
    HumanB(std::string);
    ~HumanB(void);
    void setName(std::string name);
    void setWeapon(Weapon &weapon);
    void attack(void);

  private:
    std::string _name;
    Weapon     *_weapon;
};

#endif
