#ifndef MYSED_HPP
# define MYSED_HPP

#include<string>
#include<iostream>
#include<fstream>

class mySed {
  public:
    mySed(std::string input_filename, std::string s1, std::string s2);
    ~mySed(void) {};
    // sed(std::string input_filename, std::string s1, std::string s2);

  private:
    std::string input_filename;
    std::string output_filename;
    std::string s1;
    std::string s2;
    std::ifstream input_file;
    std::ofstream output_file;
};

#endif
