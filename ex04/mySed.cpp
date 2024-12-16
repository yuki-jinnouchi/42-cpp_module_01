#include "mySed.hpp"

mySed::mySed(std::string input_filename, std::string s1, std::string s2) {

  this->input_filename = input_filename;
  this->output_filename = input_filename + ".replace";
  this->s1 = s1;
  this->s2 = s2;

  std::ifstream input_file(input_filename.c_str());
  if(!input_file.is_open()) {
    std::cerr << "Error: could not open input file " << input_filename << std::endl;
    return;
  }

  std::ofstream output_file(output_filename.c_str());
  if(!output_file.is_open()) {
    std::cerr << "Error: could not open output file " << output_filename << std::endl;
    input_file.close();
    return;
  }

  std::string   line;
  int           position;

  while(std::getline(input_file, line)) {
    if(!input_file.eof()) {
      line += '\n';
    }
    while(line.find(s1) != std::string::npos) {
      position = line.find(s1);
      line.erase(position, s1.size());
      line.insert(position, s2);
    }
    output_file << line;
  }

  input_file.close();
  output_file.close();
}
