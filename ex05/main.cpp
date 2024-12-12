#include <iostream>
#include "Harl.hpp"

// main for testing harl functions
int main(void) {
  Harl harl;
  harl.complain("debug");
  harl.complain("info");
  harl.complain("warning");
  harl.complain("error");
  return 0;
}
