#include "PrimeGen.h"
#include <iostream>
#include <string>
#include <cassert>

int main (int argc, char** argv) {
	int numberOfCases = 0;
	std::cin >> numberOfCases;
	int temp = numberOfCases;
	cleanInputBuffer();
	static PrimeGen* oldPrimeGen = 0;
	while (temp-- > 0) {
		std::string part1, part2;
		std::cin >> part1 >> part2;
		long int bg, ed;
		bg = stol(part1);
		ed = stol(part2);
		PrimeGen* p = new PrimeGen(bg, ed, oldPrimeGen);
		oldPrimeGen = p;
	}
	std::cout << numberOfCases << std::endl;
	displayShit(oldPrimeGen);

	return 0;
}
