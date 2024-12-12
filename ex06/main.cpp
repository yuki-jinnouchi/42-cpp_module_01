#include <iostream>
#include "Harl.hpp"

/*
Sometimes you don't want to pay attention to everything Harl says. Implement a
system to filter what Harl says depending on the log levels you want to listen to.
Create a program that takes as parameter one of the four levels. It will display all
messages from this level and above. For example:
```
$> ./harlFilter "WARNING"
[ WARNING ]
I think I deserve to have some extra bacon for free.
I've been coming for years whereas you started working here since last month.
[ ERROR ]
This is unacceptable, I want to speak to the manager now.
$> ./harlFilter "I am not sure how tired I am today..."
[ Probably complaining about insignificant problems ]
```
Although there are several ways to deal with Harl, one of the most effective is to
SWITCH it off.
Give the name harlFilter to your executable.
You must use, and maybe discover, the switch statement in this exercise.
*/

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
