#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon {
  public:
    Weapon(std::string);
    ~Weapon(){};
    std::string getType(void);
    void        setType(std::string type);

  private:
    std::string _type;
};

#endif
