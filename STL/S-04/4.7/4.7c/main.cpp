#include <vector>
#include <iterator>
#include <iostream>
#include <string>

using namespace std;

/**
 * Forward declarations.
 */
void demonstrate_pointer_arithmetic();
void demonstrate_random_access_iterators();

/**
 * Here is yet another example of accessing the contents of a built-in
 * C++ array and a vector using random access iterators.
 */
int main () {
  demonstrate_pointer_arithmetic();
  demonstrate_random_access_iterators();

  return 0;
}

/**
 * Random access iterators can jump to any element in the container.
 */
void
demonstrate_pointer_arithmetic() {
    const char *a[] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j"};
    const int a_length = sizeof(a) / sizeof(*a);

    // Print the results.
    copy (a,
          a + a_length,
          ostream_iterator<string> (cout, " "));
    cout << endl;

    auto p = a;  // initialized to start of array.
    p += 5;      // Now p refers to the 5th element
    p[1] = "z";  // Value at p[1] is changed but p refers to 5th

    p -= 5; // Back to start

    // Print the results.
    copy (p,
          a + a_length,
          ostream_iterator<string> (cout, " "));
    cout << endl;
}

/**
 * Random access iterators can jump to any element in the container.
 */
void
demonstrate_random_access_iterators() {
    // C++11 (and beyond) versions.
    vector<string> v2 {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j"};

    // Print the results.
    copy (v2.begin (),
          v2.end (),
          ostream_iterator<string> (cout, " "));

    cout << endl;

    auto p = v2.begin();  // initialized to start of vector
    p += 5;               // Now p refers to the 5th element
    p[1] = "z";           // Value at p[1] is changed but p refers to 5th

    p -= 5; // Back to start

    // Print the results.
    copy (p,
          v2.end (),
          ostream_iterator<string> (cout, " "));
    cout << endl;
}


