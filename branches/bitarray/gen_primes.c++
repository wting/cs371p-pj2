#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

class BitVector {
	//I get to re-invent my own since we can't use STL
	private:
		static const int size = 312500; // = 10M / 32
		unsigned int* arr;

	public:
		BitVector() {
			unsigned int arr[size] = {0};
		}

		~BitVector() {
			arr = NULL;
		}

		int get_bit(const int &num) {
			return get_bit(num >> 5,num & 0x000F);
		}

		int get_bit(const int &base, const unsigned int &offset) {
			return 0;
		}

		void set_bit() {
			arr[0] = 0;
		}

		void display() {}
};

/*int get_bit(const unsigned int* const p, const int &num) {
	int index = num / 32;
	unsigned int offset = (num % 32);
	if (offset = 0) {
		--index;
		offset = 32;
	}
	--offset; //-1 because counting from 1

	int block = p[index];
	int bit = block
}*/

//void generate_bit_array(unsigned int* const p, const int &n) {
	/**
	* assumes 0 = prime, 1 = composite
	* for p[0] = 0x00000001, the 1 bit means #1 is composite (i.e. starts counting from 1)
	*/
	/*int limit = 100000000;
	p[0] = 1; //edge case, sets 1 to composite
	for (int i = 0; i < limit; ++i) {
		//if i is prime
		if (!get_bit(p,i)) {
			//set multiples of i to composite
		}
	}
}*/

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

void print_bit_array(const unsigned int* const p, const int &n) {
	for (int i = 0; i < n; ++i) {
		printf("p[%d] = %u\n",i,p[i]);
		unsigned int j = 0x8000000;
		while (j) {
			printf("%d",p[i] & j);
			j >>= 1;
		}
	}
	cout << endl;
}

void print_array(const bool* const p, const int &n) {
	printf("int primes[%d] = {",3612);
	int i = 0, cnt = 0;
	while (cnt < 3612) {
		if (i == 2) {
			printf("%d",i);
			++cnt;
		}
		else if (p[i] == 0) {
			printf(",%d",i);
			++cnt;
		}
		++i;
	}
	printf("};\n");

	/*printf("bool primes[%d] = {",n);
	for (int i = 0; i < n; ++i)
		if (i == 0)
			printf("0");
		else if (p[i] == 0)
			printf(",1");
		else
			printf(",0");
	printf("};\n");
	*/
}

void print_binary(const unsigned int &d) {
	unsigned int bits[32] = {0};
	int i;

	printf("d = %u\n",d);

	for (i = 31; i >= 0; --i)
		cout << setw(3) << i;
	cout << endl;

	unsigned int n = d;
	i = 0;
	while (n > 0) {
		bits[i] = n & 0x0001;
		n >>= 1;
		++i;
	}

	for (i = 31; i >= 0; --i)
		cout << setw(3) << bits[i];
	cout << endl;
}

int main() {
	//int size = 1000000;
	//bool primes[1000000] = {0}; ///size chosen as sqrt(10000000) for upper bounds of search
	//generate_primes(primes,size);
	//print(primes,size);
	//print_array(primes,size);

	//unsigned int primes[312500] = {0};
	//generate_bit_array(primes,312500);
	/*primes[0] = 4;
	print_bit_array(primes,1);
	*/

	/*unsigned int a,b,c;
	a = 60;
	b = 13;
	c = a & b;
	printf("c = %u\n",c);
	print_binary(0xFFFFFFFF);
	*/

	BitVector bv;
	bv.display();
	return 0;
}
