// ------------------------------
// primes/by/gen_primes_array.c++
// Copyright (C) 2009
// Benry J. Yip
// ------------------------------

// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% INCLUDES
#include <iostream>
#include <fstream>
#include <string>

// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% DEFINES
#define TOP 3000         ///< Sets how many primes to process.
#define VALUESPERLINE 10 ///< Sets how many values per line to output for array.

// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% main()
/**
 * Outputs an array of 'true's and 'false's,
 * p[i] = 'true',  if i in [0, TOP) is prime,
 *        'false', otherwise.
 */
int main() {

    using namespace std;
    ios_base::sync_with_stdio(false); // Turn off sync with C I/O.
                                      // Doesn't really matter, but be consistent with other
                                      // projects.
    ifstream infile;
    string filename = "primes.txt";

    infile.open(filename.c_str());

    // If filename doesn't exist, die!
    if(!infile) {

        cout << "ERRR Could not open " << filename << "." << endl;
        exit(1);
    }

    // Go through the list of primes, output array of true/false for prime/not.
	int count = 1;
    int n;
    int top = TOP;

    printf("int plist[%d] =\n{", top);
    
    while(infile >> n) {

		printf("%d,", n);

        // For every VALUESPERLINE values, print a newline.
        if(count % VALUESPERLINE == 0) {
            printf("\n");
        }

		count++;
    }

    printf("};\n");

    infile.close();

    return 0;
}
