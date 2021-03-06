#include <iostream>
#include <string>
using namespace std;

/**
 * The STL string class is not part of the STL.  However, it often
 * acts much like a form of a container of char data and can use the
 * STL iterators, algorithms and functions.
 */
int main() {
  string my_letters = "abcdefghijklmnopqrstuvwxyz";

  int i = 0;

  for(char my_letter : my_letters)
    cout << ++i << " " << my_letter << endl;

  for (auto i = my_letters.begin();
       i != my_letters.end();
       ++i)
      cout << *i << " " << endl;

  return 0;
}



