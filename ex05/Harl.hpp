#ifndef HARL_HPP
#define HARL_HPP

#include<string>
#include<iostream>

class Harl {
  public:
    Harl(void);
    ~Harl(void);
    void complain(std::string level);
    void log(std::string const &dest, std::string const &message);

  private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
};

#endif
