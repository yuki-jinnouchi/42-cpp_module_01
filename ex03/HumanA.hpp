#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include <iostream>
#include <string>

#include "Weapon.hpp"

class HumanA {
  public:
    HumanA(std::string, Weapon &);
    ~HumanA(void);
    void setName(std::string name);
    void setWeapon(Weapon weapon);
    void attack(void);

  private:
    std::string _name;
    Weapon     &_weapon;
};

#endif
