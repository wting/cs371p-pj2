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
#define TOP 3163 ///< Sets upper bound for checking if i \in [0, TOP) is prime.

// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% main()
/**
 * Outputs an array of 'true's and 'false's,
 * p[i] = 'true',  if i \in [0, TOP) is prime,
 *        'false', otherwise.
 */
int main() {

    using namespace std;
    ios_base::sync_with_stdio(false); // Turn off sync with C I/O.
                                      // Doesn't really matter, but be consistent with other
                                      // projects.
    ifstream infile;
    string filename = "primeslt3162.txt";

    infile.open(filename.c_str());

    // If filename doesn't exist, die!
    if(!infile) {

        cout << "ERRR Could not open " << filename << "." << endl;
        exit(1);
    }

    // Go through the list of primes, output array of true/false for prime/not.
    int n;
    int top = TOP;

    printf("bool p[%d] = \n{false,", top);
    
    if(infile >> n) { // Get first number.

        for(int i = 1; i < top; i++) {

            // If i is the next prime, n:
            if(i == n) {

                printf(" true");

                // Read in the next prime.
                if(!(infile >> n)) {
                    break;
                }

            // If i is not a prime:
            } else {

                printf(" false");
            }

            // Don't comma the last number.
            if(i != top - 1) {
                printf(",");
            }

            // For every 13 values, print a newline.
            if(i % 13 == 0) {
                printf("\n");
            }
        }
    }

    printf("};\n");

    infile.close();

    return 0;
}
