#include <iostream>
#include "Harl.hpp"

void print_Harls(int level) {
  Harl harl;
  while (level < 4) {
    switch (level) {
      case 0:
        harl.complain("debug");
        std::cout << std::endl;
        break;
      case 1:
        harl.complain("info");
        std::cout << std::endl;
        break;
      case 2:
        harl.complain("warning");
        std::cout << std::endl;
        break;
      case 3:
        harl.complain("error");
        std::cout << std::endl;
        break;
    }
    level++;
  }
}

int main(int argc, char **argv) {
  if (argc != 2) {
    std::cerr << "Usage: " << "./harlFilter \"ERROR LEVEL\"" << std::endl;
    return 1;
  }
  std::string error_level = argv[1];
  int level;
  if (error_level == "DEBUG")
    level = 0;
  else if (error_level == "INFO")
    level = 1;
  else if (error_level == "WARNING")
    level = 2;
  else if (error_level == "ERROR")
    level = 3;
  else {
    std::cerr << "[ Probably complaining about insignificant problems ]" << std::endl;
    return 1;
  }
  print_Harls(level);
  return 0;
}
