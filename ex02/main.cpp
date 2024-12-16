#include <iostream>
#include <string>

/*
Write a program that contains:
• A string variable initialized to "HI THIS IS BRAIN".
• stringPTR: A pointer to the string.
• stringREF: A reference to the string.
Your program has to print:
• The memory address of the string variable.
• The memory address held by stringPTR.
• The memory address held by stringREF.
And then:
• The value of the string variable.
• The value pointed to by stringPTR.
• The value pointed to by stringREF.
That’s all, no tricks. The goal of this exercise is to demystify references
  which can seem completely new. Although there are some little differences,
  this is another syntax for something you already do: address manipulation.
*/

int main() {
  std::string str = "HI THIS IS BRAIN";
  std::string *stringPTR = &str;
  std::string &stringREF = str;

  std::cout << "Address of the string        : " << &str << std::endl;
  std::cout << "Address of held by stringPTR : " << stringPTR << std::endl;
  std::cout << "Address of held by stringREF : " << &stringREF << std::endl;
  std::cout << "Value of the string variable : " << str << std::endl;
  std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
  std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;

  return 0;
}
