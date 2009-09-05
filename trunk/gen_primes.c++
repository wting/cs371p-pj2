#include <cmath>
#include <iostream>

void generate_primes(bool* const p, const int &n) {
	/**
	* assumes 0 = prime, 1 = composite
	*/
	///edge cases
	p[0] = 1;
	p[1] = 1;

	///Sieve of Eratosthenes
	int limit = sqrt(n);
	int i,j,k;
	for (i = 2; i < limit; ++i)
		if (p[i] == 0) {
			j = i;
			for (k = j*2; k < n; k += j)
				p[k] = 1;
		}

}

void print(const bool* const p, const int &n) {
	for (int i = 2; i < n; ++i)
		if (p[i] == 0)
			printf("%d\n",i);
}

void print_array(const bool* const p, const int &n) {
	/*int cnt = 0;
	for (int i = 2; i < n; ++i)
		if (p[i] == 0)
			++cnt;

	printf("int primes[%d] = {",cnt);
	for (int i = 2; i < n; ++i)
		if (i == 2)
			printf("%d",i);
		else if (p[i] == 0)
			printf(",%d",i);
	printf("};\n");
	*/

	printf("bool primes[%d] = {",n);
	for (int i = 0; i < n; ++i)
		if (i == 0)
			printf("0");
		else if (p[i] == 0)
			printf(",1");
		else
			printf(",0");
	printf("};\n");
}

int main() {
	int size = 10000000;
	bool primes[10000000] = {0}; ///size chosen as sqrt(10000000) for upper bounds of search
	generate_primes(primes,size);
	//print(primes,size);
	print_array(primes,size);
	return 0;
}
