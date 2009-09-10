// -----------------------------------
// primes/by/gen_primes_array_test.c++
// Copyright (C) 2009
// Benry J. Yip
// -----------------------------------

// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% INCLUDES
#include <cassert>
#include <iostream>

// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% DEFINES
#define TOP 3163 ///< Sets upper bound for checking if i in [0, TOP) is prime.

// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% isPrime()
/**
 * Prints if a number, n, is prime or not.
 */
void isPrime(bool p[], int n) {
	
	using namespace std;
	
	// Check that n is within the bounds of p.
	assert((n >= 0) && (n < TOP));
	
	cout << n << " is ";
	
	if(!p[n]) {
		cout << "not ";
	}
	
	cout << "a prime number." << endl;
}

// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% test()
/**
 * Query for some primes.
 */
void test(bool p[]) {
	
	isPrime(p, 2);
	isPrime(p, 3);
	isPrime(p, 4);
	isPrime(p, 5);
	isPrime(p, 3162);
	isPrime(p, 3163);
}

// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% main()
/**
 * Test primes bool array.
 */
int main() {

	bool p[TOP] = 
		{false, false, true, true, false, true, false, true, false, false, false, true, false, true,
		 false, false, false, true, false, true, false, false, false, true, false, false, false,
		 false, false, true, false, true, false, false, false, false, false, true, false, false,
		 false, true, false, true, false, false, false, true, false, false, false, false, false,
		 true, false, false, false, false, false, true, false, true, false, false, false, false,
		 false, true, false, false, false, true, false, true, false, false, false, false, false,
		 true, false, false, false, true, false, false, false, false, false, true, false, false,
		 false, false, false, false, false, true, false, false, false, true, false, true, false,
		 false, false, true, false, true, false, false, false, true, false, false, false, false,
		 false, false, false, false, false, false, false, false, false, true, false, false, false,
		 true, false, false, false, false, false, true, false, true, false, false, false, false,
		 false, false, false, false, false, true, false, true, false, false, false, false, false,
		 true, false, false, false, false, false, true, false, false, false, true, false, false,
		 false, false, false, true, false, false, false, false, false, true, false, true, false,
		 false, false, false, false, false, false, false, false, true, false, true, false, false,
		 false, true, false, true, false, false, false, false, false, false, false, false, false,
		 false, false, true, false, false, false, false, false, false, false, false, false, false,
		 false, true, false, false, false, true, false, true, false, false, false, true, false,
		 false, false, false, false, true, false, true, false, false, false, false, false, false,
		 false, false, false, true, false, false, false, false, false, true, false, false, false,
		 false, false, true, false, false, false, false, false, true, false, true, false, false,
		 false, false, false, true, false, false, false, true, false, true, false, false, false,
		 false, false, false, false, false, false, true, false, false, false, false, false, false,
		 false, false, false, false, false, false, false, true, false, false, false, true, false,
		 true, false, false, false, true, false, false, false, false, false, false, false, false,
		 false, false, false, false, false, true, false, false, false, false, false, true, false,
		 false, false, false, false, false, false, false, false, true, false, true, false, false,
		 false, true, false, false, false, false, false, true, false, false, false, false, false,
		 false, false, true, false, false, false, false, false, true, false, false, false, false,
		 false, true, false, false, false, true, false, false, false, false, false, true, false,
		 false, false, false, false, false, false, true, false, false, false, true, false, false,
		 false, false, false, false, false, true, false, false, false, false, false, false, false,
		 false, false, true, false, true, false, false, false, false, false, false, false, false,
		 false, true, false, true, false, false, false, false, false, true, false, false, false,
		 true, false, false, false, false, false, true, false, false, false, false, false, false,
		 false, true, false, false, false, true, false, true, false, false, false, true, false,
		 false, false, false, false, false, false, false, false, false, false, true, false, false,
		 false, false, false, false, false, true, false, false, false, true, false, false, false,
		 false, false, false, false, true, false, false, false, true, false, false, false, false,
		 false, true, false, false, false, false, false, false, false, false, false, false, false,
		 true, false, true, false, false, false, false, false, false, false, false, false, false,
		 false, false, false, false, false, false, false, true, false, false, false, false, false,
		 true, false, false, false, false, false, false, false, false, false, true, false, false,
		 false, false, false, true, false, false, false, false, false, true, false, true, false,
		 false, false, false, false, true, false, false, false, false, false, false, false, false,
		 false, true, false, false, false, false, false, true, false, false, false, false, false,
		 true, false, true, false, false, false, false, false, true, false, false, false, false,
		 false, true, false, false, false, true, false, true, false, false, false, false, false,
		 false, false, false, false, false, false, true, false, false, false, false, false, false,
		 false, false, false, true, false, true, false, false, false, true, false, false, false,
		 false, false, true, false, false, false, false, false, true, false, true, false, false,
		 false, false, false, false, false, false, false, false, false, true, false, false, false,
		 true, false, false, false, false, false, true, false, false, false, false, false, false,
		 false, true, false, false, false, false, false, false, false, false, false, true, false,
		 false, false, false, false, false, false, true, false, false, false, false, false, false,
		 false, false, false, true, false, false, false, false, false, false, false, true, false,
		 false, false, false, false, true, false, false, false, false, false, true, false, false,
		 false, true, false, false, false, false, false, false, false, true, false, false, false,
		 false, false, true, false, false, false, true, false, false, false, false, false, false,
		 false, true, false, false, false, true, false, false, false, false, false, false, false,
		 false, false, false, false, false, false, true, false, false, false, false, false, false,
		 false, false, false, true, false, false, false, false, false, false, false, false, false,
		 false, false, true, false, true, false, false, false, false, false, false, false, false,
		 false, true, false, true, false, false, false, true, false, true, false, false, false,
		 false, false, false, false, false, false, true, false, false, false, false, false, false,
		 false, false, false, false, false, false, false, true, false, false, false, true, false,
		 true, false, false, false, true, false, false, false, false, false, false, false, false,
		 false, false, false, false, false, true, false, false, false, true, false, true, false,
		 false, false, true, false, false, false, false, false, false, false, false, false, false,
		 false, false, false, false, false, false, false, false, false, true, false, false, false,
		 true, false, false, false, false, false, false, false, true, false, false, false, false,
		 false, false, false, false, false, true, false, false, false, false, false, false, false,
		 true, false, false, false, true, false, false, false, false, false, true, false, false,
		 false, false, false, true, false, false, false, false, false, false, false, false, false,
		 false, false, false, false, true, false, false, false, true, false, false, false, false,
		 false, true, false, false, false, false, false, true, false, false, false, false, false,
		 false, false, true, false, false, false, false, false, true, false, false, false, false,
		 false, false, false, false, false, false, false, true, false, false, false, true, false,
		 false, false, false, false, true, false, true, false, false, false, false, false, false,
		 false, false, false, true, false, true, false, false, false, false, false, true, false,
		 false, false, false, false, false, false, false, false, true, false, true, false, false,
		 false, false, false, false, false, false, false, true, false, true, false, false, false,
		 false, false, true, false, false, false, false, false, false, false, false, false, false,
		 false, false, false, false, false, false, false, true, false, false, false, true, false,
		 true, false, false, false, true, false, false, false, false, false, true, false, false,
		 false, false, false, true, false, false, false, false, false, false, false, true, false,
		 false, false, false, false, true, false, false, false, false, false, true, false, false,
		 false, false, false, false, false, false, false, false, false, false, false, false, false,
		 false, false, false, false, false, false, true, false, true, false, false, false, false,
		 false, false, false, false, false, true, false, false, false, false, false, false, false,
		 true, false, false, false, false, false, false, false, false, false, true, false, false,
		 false, false, false, true, false, false, false, false, false, true, false, false, false,
		 false, false, false, false, true, false, false, false, false, false, false, false, false,
		 false, false, false, true, false, false, false, true, false, false, false, false, false,
		 true, false, false, false, false, false, true, false, true, false, false, false, false,
		 false, true, false, false, false, false, false, false, false, false, false, false, false,
		 true, false, false, false, false, false, false, false, false, false, true, false, false,
		 false, false, false, false, false, false, false, false, false, false, false, false, false,
		 false, false, true, false, true, false, false, false, true, false, false, false, false,
		 false, true, false, true, false, false, false, false, false, true, false, false, false,
		 true, false, true, false, false, false, true, false, false, false, false, false, false,
		 false, false, false, false, false, true, false, true, false, false, false, false, false,
		 true, false, false, false, false, false, false, false, false, false, false, false, false,
		 false, false, false, false, false, false, false, false, false, false, false, false, false,
		 false, false, false, false, false, false, false, false, true, false, false, false, false,
		 false, true, false, false, false, false, false, true, false, false, false, false, false,
		 false, false, true, false, false, false, false, false, false, false, false, false, false,
		 false, false, false, false, false, false, false, true, false, false, false, false, false,
		 false, false, false, false, true, false, false, false, false, false, false, false, false,
		 false, false, false, false, false, true, false, false, false, true, false, true, false,
		 false, false, true, false, false, false, false, false, true, false, false, false, false,
		 false, false, false, true, false, false, false, true, false, true, false, false, false,
		 false, false, true, false, false, false, false, false, false, false, false, false, false,
		 false, true, false, false, false, false, false, false, false, false, false, true, false,
		 true, false, false, false, true, false, true, false, false, false, true, false, false,
		 false, false, false, true, false, false, false, false, false, false, false, false, false,
		 false, false, true, false, false, false, false, false, false, false, false, false, false,
		 false, true, false, false, false, false, false, false, false, true, false, false, false,
		 false, false, false, false, false, false, false, false, true, false, false, false, false,
		 false, true, false, false, false, true, false, false, false, false, false, true, false,
		 false, false, false, false, false, false, true, false, false, false, true, false, false,
		 false, false, false, false, false, true, false, false, false, true, false, false, false,
		 false, false, false, false, false, false, false, false, false, false, true, false, false,
		 false, true, false, false, false, false, false, true, false, true, false, false, false,
		 true, false, false, false, false, false, true, false, true, false, false, false, false,
		 false, true, false, false, false, false, false, false, false, false, false, true, false,
		 false, false, false, false, false, false, false, false, false, false, false, false, false,
		 false, false, false, false, false, true, false, false, false, false, false, true, false,
		 false, false, true, false, true, false, false, false, false, false, false, false, false,
		 false, false, false, false, false, false, false, false, false, false, false, false, false,
		 false, false, true, false, false, false, true, false, true, false, false, false, false,
		 false, false, false, false, false, true, false, false, false, false, false, false, false,
		 false, false, false, false, true, false, true, false, false, false, false, false, false,
		 false, false, false, true, false, false, false, false, false, false, false, true, false,
		 false, false, false, false, true, false, false, false, false, false, true, false, false,
		 false, false, false, true, false, false, false, false, false, false, false, false, false,
		 false, false, false, false, false, false, false, false, true, false, false, false, false,
		 false, true, false, false, false, true, false, true, false, false, false, false, false,
		 false, false, false, false, false, false, true, false, false, false, false, false, false,
		 false, false, false, true, false, false, false, false, false, false, false, false, false,
		 false, false, true, false, false, false, false, false, false, false, true, false, false,
		 false, false, false, false, false, false, false, false, false, false, false, false, false,
		 true, false, false, false, false, false, false, false, false, false, false, false, false,
		 false, true, false, false, false, false, false, true, false, false, false, true, false,
		 true, false, false, false, true, false, true, false, false, false, false, false, false,
		 false, false, false, true, false, false, false, false, false, false, false, false, false,
		 false, false, true, false, false, false, false, false, true, false, false, false, false,
		 false, true, false, false, false, false, false, false, false, false, false, false, false,
		 false, false, false, false, false, false, true, false, true, false, false, false, false,
		 false, false, false, false, false, false, false, false, false, false, false, true, false,
		 true, false, false, false, false, false, false, false, false, false, false, false, false,
		 false, false, false, false, false, false, false, false, false, true, false, false, false,
		 false, false, true, false, false, false, false, false, false, false, true, false, false,
		 false, false, false, true, false, false, false, true, false, true, false, false, false,
		 true, false, false, false, false, false, false, false, true, false, false, false, false,
		 false, true, false, false, false, false, false, false, false, false, false, true, false,
		 true, false, false, false, false, false, false, false, false, false, true, false, false,
		 false, false, false, false, false, false, false, false, false, false, false, true, false,
		 false, false, false, false, false, false, false, false, true, false, false, false, false,
		 false, true, false, false, false, false, false, false, false, false, false, false, false,
		 true, false, true, false, false, false, true, false, true, false, false, false, false,
		 false, false, false, false, false, true, false, false, false, false, false, false, false,
		 false, false, false, false, true, false, true, false, false, false, false, false, false,
		 false, false, false, false, false, false, false, false, false, true, false, true, false,
		 false, false, false, false, true, false, false, false, true, false, true, false, false,
		 false, false, false, false, false, false, false, true, false, false, false, false, false,
		 false, false, true, false, false, false, false, false, false, false, false, false, false,
		 false, false, false, false, false, false, false, true, false, false, false, false, false,
		 false, false, false, false, false, false, false, false, false, false, false, false, false,
		 false, false, false, false, false, true, false, false, false, true, false, false, false,
		 false, false, true, false, false, false, false, false, false, false, true, false, false,
		 false, false, false, false, false, false, false, false, false, false, false, false, false,
		 true, false, true, false, false, false, true, false, false, false, false, false, false,
		 false, true, false, false, false, false, false, false, false, false, false, false, false,
		 false, false, false, false, true, false, true, false, false, false, true, false, false,
		 false, false, false, false, false, true, false, false, false, false, false, true, false,
		 false, false, false, false, true, false, false, false, true, false, false, false, false,
		 false, false, false, false, false, false, false, true, false, true, false, false, false,
		 false, false, false, false, false, false, false, false, false, false, false, false, false,
		 false, false, false, false, false, true, false, false, false, false, false, true, false,
		 true, false, false, false, false, false, true, false, false, false, true, false, false,
		 false, false, false, true, false, false, false, false, false, false, false, false, false,
		 false, false, false, false, true, false, false, false, false, false, true, false, false,
		 false, true, false, true, false, false, false, false, false, true, false, false, false,
		 true, false, false, false, false, false, true, false, false, false, false, false, false,
		 false, false, false, false, false, true, false, false, false, false, false, true, false,
		 false, false, false, false, true, false, false, false, false, false, false, false, false,
		 false, false, false, false, false, true, false, false, false, true, false, false, false,
		 false, false, true, false, false, false, false, false, false, false, false, false, false,
		 false, true, false, false, false, false, false, false, false, true, false, false, false,
		 false, false, true, false, false, false, true, false, false, false, false, false, false,
		 false, false, false, false, false, false, false, false, false, false, false, false, false,
		 false, false, false, false, false, false, true, false, false, false, false, false, false,
		 false, false, false, false, false, false, false, false, false, false, false, true, false,
		 false, false, false, false, false, false, false, false, true, false, false, false, false,
		 false, false, false, true, false, false, false, true, false, false, false, false, false,
		 true, false, true, false, false, false, false, false, true, false, false, false, false,
		 false, false, false, false, false, false, false, false, false, false, false, false, false,
		 false, false, false, false, true, false, false, false, false, false, false, false, false,
		 false, false, false, true, false, true, false, false, false, false, false, false, false,
		 false, false, false, false, false, false, false, false, true, false, false, false, false,
		 false, false, false, true, false, false, false, true, false, false, false, false, false,
		 false, false, false, false, false, false, true, false, false, false, false, false, false,
		 false, false, false, false, false, false, false, true, false, false, false, false, false,
		 false, false, false, false, true, false, true, false, false, false, true, false, false,
		 false, false, false, false, false, true, false, false, false, false, false, true, false,
		 false, false, false, false, true, false, false, false, true, false, true, false, false,
		 false, true, false, false, false, false, false, true, false, false, false, false, false,
		 false, false, true, false, false, false, true, false, true, false, false, false, false,
		 false, true, false, false, false, false, false, false, false, false, false, true, false,
		 true, false, false, false, false, false, false, false, false, false, true, false, false,
		 false, false, false, false, false, true, false, false, false, true, false, false, false,
		 false, false, false, false, false, false, false, false, false, false, true, false, false,
		 false, false, false, false, false, false, false, true, false, false, false, false, false,
		 false, false, false, false, false, false, true, false, true, false, false, false, false,
		 false, true, false, false, false, true, false, true, false, false, false, false, false,
		 false, false, false, false, false, false, false, false, false, false, true, false, false,
		 false, false, false, false, false, false, false, false, false, false, false, true, false,
		 false, false, true, false, false, false, false, false, true, false, false, false, false,
		 false, false, false, true, false, false, false, false, false, true, false, false, false,
		 true, false, false, false, false, false, false, false, false, false, false, false, false,
		 false, false, false, false, false, true, false, false, false, false, false, false, false,
		 true, false, false, false, false, false, false, false, false, false, true, false, false,
		 false, false, false, true, false, false, false, false, false, true, false, false, false,
		 false, false, false, false, true, false, false, false, false, false, false, false, false,
		 false, true, false, false, false, false, false, false, false, false, false, false, false,
		 true, false, false, false, false, false, false, false, false, false, false, false, false,
		 false, true, false, false, false, true, false, false, false, false, false, true, false,
		 false, false, false, false, true, false, true, false, false, false, false, false, false,
		 false, false, false, false, false, false, false, false, false, false, false, false, false,
		 false, false, false, false, false, false, false, false, true, false, true, false, false,
		 false, false, false, false, false, false, false, true, false, false, false, false, false,
		 false, false, true, false, false, false, true, false, false, false, false, false, false,
		 false, false, false, false, false, false, false, true, false, false, false, true, false,
		 false, false, false, false, false, false, true, false, false, false, false, false, false,
		 false, false, false, false, false, true, false, false, false, false, false, true, false,
		 false, false, false, false, false, false, false, false, false, false, true, false, false,
		 false, true, false, false, false, false, false, true, false, false, false, false, false,
		 false, false, false, false, false, false, false, false, false, false, false, false, false,
		 false, true, false, false, false, false, false, false, false, false, false, true, false,
		 true, false, false, false, false, false, false, false, false, false, false, false, false,
		 false, false, false, true, false, false, false, false, false, false, false, false, false,
		 false, false, false, false, false, false, false, false, false, false, false, false, false,
		 false, false, false};

	test(p);

    return 0;
}
