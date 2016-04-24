#include "PrimeGen.h"
#include <iostream>

PrimeGen::PrimeGen (long int beginning, long int end, PrimeGen* next) {
	this->beginning = beginning;
	this->end = end;
	this->next = next;
}

PrimeGen::~PrimeGen () {
	std::cout << "Cleaning up ... " << std::endl;
}

std::vector<long int> PrimeGen::findPrimes () {
	std::vector<long int> primes;
	bool isPrime = true;
	for (long int i = beginning; i <= end; i++) {
		for (long int j = 2; j <= (i / 2); j++) {
			if ((i % j) == 0)
				isPrime = false;
		}
		if (isPrime) {
			primes.push_back(i);
		} else {
			isPrime = true;
		}
	}
	return primes;
}

PrimeGen* PrimeGen::getNext () {
	return next;
}

void cleanInputBuffer () {
	std::cin.clear();
	std::cin.ignore();
}

void displayShit (PrimeGen* p) {
	std::vector<PrimeGen*> addrs;
	while (p != 0) {
		addrs.push_back(p);
		p = p->getNext();
	}
	size_t endIndex = addrs.size() - 1;
	int vector_length = addrs.size();
	while (vector_length > 0) {
		std::vector<long int> result;
		result = addrs[endIndex--]->findPrimes();
		for (size_t i = 0; i < result.size(); i++) {
			std::cout << result[i] << std::endl;

		}
		std::cout << std::endl;
		--vector_length;
	}

	for (size_t i = 0; i < addrs.size(); i++) {
		delete addrs[i];
	}
}
