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
  switch (level) {
    case 0:
      harl.complain("DEBUG");
      std::cout << std::endl;
    case 1:
      harl.complain("INFO");
      std::cout << std::endl;
    case 2:
      harl.complain("WARNING");
      std::cout << std::endl;
    case 3:
      harl.complain("ERROR");
      std::cout << std::endl;
    default:
      return;
  }
}

int main(int argc, char **argv) {
  if (argc != 2) {
    std::cerr << "Usage: $> ./harlFilter \"ERROR LEVEL\"" << std::endl;
    return 1;
  }

  std::string levels[4] = {
    "DEBUG",
    "INFO",
    "WARNING",
    "ERROR"
  };

  int i = 0;
  while (levels[i] != argv[1] && i < 4) {
    i++;
  }
  print_Harls(i);
  return 0;
}
