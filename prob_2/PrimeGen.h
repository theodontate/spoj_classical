#ifndef id765
#define id765

#include <vector>

class PrimeGen {
	long int beginning, end;
	std::vector<long int> primes;
	PrimeGen* next;

	public:
		PrimeGen ( long int beginning, long int end, PrimeGen* next );
		std::vector<long int> findPrimes ( );
		PrimeGen* getNext ( );
		~PrimeGen ( );
};

void cleanInputBuffer ( );

void displayShit (PrimeGen* p);

#endif
