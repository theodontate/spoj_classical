#include <iostream>
#include <cstdlib>
#include <cassert>
#include <string>

int main (int argc, char** argv) {
	size_t i;
	i = 10;
	while (i) {
		std::cout << i << std::endl;
		--i;
	}
}
