#include <iostream>
#include "Harl.hpp"

// main for testing harl functions
int main(void) {
  Harl harl;
  harl.complain("debug");
  std::cout << std::endl;
  harl.complain("info");
  std::cout << std::endl;
  harl.complain("warning");
  std::cout << std::endl;
  harl.complain("error");
  std::cout << std::endl;
  return 0;
}
