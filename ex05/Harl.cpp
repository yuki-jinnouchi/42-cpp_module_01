#include"Harl.hpp"

Harl::Harl(void) {
  return;
}

Harl::~Harl(void) {
  return;
}

void Harl::complain(std::string level) {
  std::string levels[4] = {
    "DEBUG",
    "INFO",
    "WARNING",
    "ERROR"
  };

  int i = 0;
  while(levels[i] != level && i < 4) {
    i++;
  }

  void (Harl::*funcPtr)();

  switch (i) {
    case 0:
      funcPtr = &Harl::debug;
      break;
    case 1:
      funcPtr = &Harl::info;
      break;
    case 2:
      funcPtr = &Harl::warning;
      break;
    case 3:
      funcPtr = &Harl::error;
      break;
    default:
      return;
  }
  (this->*funcPtr)();
}

void Harl::debug(void) {
  std::cerr << \
    "[DEBUG]" << std::endl << \
    "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl << \
    "I really do!" << std::endl;
}

void Harl::info(void) {
  std::cerr << \
    "[INFO]" << std::endl << \
    "I cannot believe adding extra bacon costs more money." << std::endl << \
    "You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning(void) {
  std::cerr << \
    "[WARNING]" << std::endl << \
    "I think I deserve to have some extra bacon for free." << std::endl << \
    "I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void) {
  std::cerr << \
    "[ERROR]" << std::endl << \
    "This is unacceptable! I want to speak to the manager now." << std::endl;
}
