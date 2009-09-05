// To run the tests:
//     g++ -ansi -pedantic -lcppunit -ldl -Wall -DTEST main.c++ -o main.app
//     valgrind main.app

// To run the program:
//     g++ -ansi -pedantic -Wall main.c++ -o main.app
//     valgrind main.app < Collatz.in > Collatz.out

// To configure Doxygen:
//     doxygen -g
// That creates the file Doxyfile.
// Make the following edits:
//     EXTRACT_ALL            = YES
//     EXTRACT_PRIVATE        = YES
//     EXTRACT_STATIC         = YES
//     GENERATE_LATEX         = NO

// To document the program:
//     doxygen Doxyfile

// -------
// includes
// -------
#include <cassert>
#include <iostream>

using namespace std;

// -------
// defines
// -------
#ifdef TEST
    #include "cppunit/TestSuite.h"      // TestSuite
    #include "cppunit/TextTestRunner.h" // TestRunner
    //#include "TestCollatz.h"
#endif

#ifdef ONLINE_JUDGE
    #define NDEBUG
#endif

// -------
// globals
// -------
int n;
int num[4];

// ----------
// prototypes
// ----------
void eval();
void print(std::ostream &);
bool read(std::istream &);

// -----
// tests
// -----

#ifdef TEST
    #include "TestCollatz.h"
#endif // TEST

int main () {
    ios_base::sync_with_stdio(false); /// turn off synchronization with C I/O

    #ifdef TEST
        /// unit tests
        CppUnit::TextTestRunner tr;
        tr.addTest(TestCollatz::suite());
        tr.run();
    #else
        /// program execution
		while (read(cin)) {
			eval();
			print(cout);
		}
	#endif

	return 0;
}

void eval() {
	cout << n << ":";

	if (n<8) {
		n = -1;
		return;
	}
}

void print(std::ostream &out) {
	/**
	prints the results
	@param [in] out ostream to display results to
	*/
	if (n == -1)
		out << "Impossible." << endl;
	else {
		for (int x = 0; x < 4; ++x)
			out << num[x] << " ";
		out << endl;
	}
}

bool read(std::istream &in) {
	/**
	reads an int into n
	@param [in] in istream to read in range values
	@return true if that succeeds, false otherwise
	*/
    if (!(in >> n))
        return false;
    return true;
}
