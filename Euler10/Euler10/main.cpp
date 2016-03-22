#include <vector>
#include <iostream>
#include "primelister.hpp"

using std::cin; using std::cout;

int main(){
	unsigned int rangePrimes;
	std::vector<unsigned int> vPrimes;

	cout << "Enter a number \'n\' to find the sum of all primes below it: ";
	cin >> rangePrimes;

	cout << "\nReserving space in the vector...";
	//reserve space for sieve list
	vPrimes.reserve(rangePrimes - 2);
	cout << "Space reserved.";
	//then fill with ints <2...(i-1)>
	for (int i = 2; i < rangePrimes; i++)
		vPrimes.push_back(i);
	cout << "\nList populated <2...(n-1)>";

	cout << "\nSieving through the vector for primes...";
	//searches for primes in range of 2...(n-1)
	primeList(vPrimes);
	cout << "Done! Vector sieve complete.";

	cout << "\nSumming primes...";
	unsigned long long pSum = 0;
	for (int i : vPrimes){
		pSum += i;
	}
	//free up the memory just for the heck of it
	vPrimes.erase(vPrimes.begin(), vPrimes.end());
	vPrimes.shrink_to_fit();

	cout << "\nThe sum of all primes below " << rangePrimes << " is " << pSum << ".\n";
	
	cout << "\n(Press enter to exit)";
	cin.get();
	cin.ignore();
	return 0;
}