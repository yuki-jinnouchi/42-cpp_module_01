#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include <iostream>
#include <string>

#include "Weapon.hpp"

class HumanA {
  public:
    HumanA(const std::string, Weapon &);
    ~HumanA(void);
    void setName(const std::string name);
    void setWeapon(const Weapon weapon);
    void attack(void);

  private:
    std::string _name;
    Weapon     &_weapon;
};

#endif
