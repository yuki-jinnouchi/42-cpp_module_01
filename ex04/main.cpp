#include "mySed.hpp"

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
    std::cerr << "Usage: $> ./mySed.out filename s1 s2 (will make filename.replace)" << std::endl;
    return 1;
  }

  mySed(argv[1], argv[2], argv[3]);
  return 0;
}

/*
TESTS
compare files with diff
$ ./mySed.out test.txt a b
$ sed -i 's/a/b/' test.txt > test.txt.replace2
$ diff test.txt.replace test.txt.replace2
*/
