#include <algorithm>
#include <vector>
#include "primelister.hpp"

/* "void primelist (vector<int>&)"
This function sieves through a vector of numbers 2-n and marks all non-primes by changing them to 0.
The zeroes can then be removed or ignored. In this implementation, they will be removed before the function exits.
*/

#define C(l, i, p) (l + (i * p))	//N.B.: refers to (loc + (i * pVal))

void primeList(std::vector<int> &rvPrimes){
	unsigned int loc = 0, sz = rvPrimes.size();	// 'loc' is current place in vector
	int pVal;

	#define D(i) C(loc, i, pVal)

	while (loc < sz){
		if (rvPrimes[loc]){
			pVal = rvPrimes[loc];
			for (unsigned int i = 1; D(i) < sz; ++i)
				rvPrimes[D(i)] = 0;
		}
		loc++;
	}
	rvPrimes.erase(std::remove(std::begin(rvPrimes), std::end(rvPrimes), 0), std::end(rvPrimes));	//erase-remove idiom; removes all 0s
	rvPrimes.shrink_to_fit();	//free up a little memory by reducing capacity() down to actual size()

	return;
}