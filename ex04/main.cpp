#include<string>
#include<fstream>
#include<iostream>

/*
Create a program that takes three parameters in
the following order: a filename and two strings, s1 and s2.
It will open the file <filename> and copies its content
into a new file <filename>.replace, replacing every occurrence
of s1 with s2.

Using C file manipulation functions is forbidden and
will be considered cheating. All the member functions
of the class std::string are allowed, except replace.
Use them wisely!

Of course, handle unexpected inputs and errors.
You have to create and turn in your own tests to ensure
your program works as expected.
*/

int main(int argc, char** argv) {
  if(argc != 4) {
    std::cerr << "Usage: ./mySed.out filename s1 s2" << std::endl;
    return 1;
  }

  std::string input_filename = argv[1];
  std::string output_filename = input_filename + ".replace";
  std::string s1 = argv[2];
  std::string s2 = argv[3];

  std::ifstream input_file(input_filename.c_str());
  if(!input_file.is_open()) {
    std::cerr << "Error: could not open input file " << input_filename << std::endl;
    return 1;
  }
  std::ofstream output_file(output_filename.c_str());
  if(!output_file.is_open()) {
    std::cerr << "Error: could not open output file " << output_filename << std::endl;
    input_file.close();
    return 1;
  }

  std::string line;
  int position;
  while(std::getline(input_file, line)) {
    while(line.find(s1) != std::string::npos) {
      position = line.find(s1);
      line.erase(position, s1.size()).insert(position, s2);
    }
    output_file << line << std::endl;
  }

  input_file.close();
  output_file.close();

  std::cout << "Replacement completed successfully." << std::endl;
  return 0;
}
