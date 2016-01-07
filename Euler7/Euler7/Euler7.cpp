#include <iostream>
#include <vector>
using std::cout; using std::cin; using std::endl;

#include "primelister.hpp"

int main(){

	unsigned int recallNth = 0;
	std::vector<int> vPrimes;
	char keepGoing = 'y';

	cout << "Setting aside memory...";
	vPrimes.reserve(9999999);
	for (int i = 2; i < 10000001; i++)
		vPrimes.push_back(i);
	cout << "\nCreating list of primes up to 10 million...";
	primeList(vPrimes);
	cout << "Done! size of list is " << vPrimes.size() << ".";

	do {
		cout << "\nEnter a number 'n' to find the 'nth' prime: ";

		cin >> recallNth;		//goes to this nth position in the vector, so long as it is a valid number
		if (cin.fail() || recallNth > vPrimes.size() || recallNth < 0) {
			cin.clear();	//clear failure state
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');	//ignore and discard failed input
			//limits of		   maximum input stream size, and newline

			cout << "\nInput failed. Trying again..." << endl;
			continue;		//bring us back to the top of do/while loop to ask again
		}
		
		cout << endl;
		switch (recallNth) {
		case 0:
			cout << "Can't test for 0th prime!";
			break;
		default:
			cout << vPrimes[recallNth - 1] << " is the no. " << recallNth << " prime in the series of prime numbers.\n";
			break;
		}

		cout << "\nTest again? ('y' for yes, anything else to quit): ";
		cin >> keepGoing;
	} while (keepGoing == 'y');

	cin.ignore();
	return 0;
}