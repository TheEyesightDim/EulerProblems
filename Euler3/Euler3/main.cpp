#include <iostream>

using std::cin; using std::cout;

int main() {
	//64-bit integer type must be used to solve for the very large number given in the problem.
	__int64 givenNumber, divisor = 2;

	cout << "Enter a number to find its largest prime factor : ";
	cin >> givenNumber;

	__int64 rememberGN = givenNumber;
	int iterTracker = 0;	//how many iterations have we had to go through?

	while (divisor < givenNumber){
		++iterTracker;
		if (givenNumber % divisor == 0){
			givenNumber /= divisor;
		}
		else
		{
			++divisor;
		}

		if (iterTracker % 100000 == 0){
			cout << "still running... " << iterTracker << " checks done so far!\n";
		}
	}

	cout << divisor << " is the largest prime factor of "<<rememberGN<<" ." <<std::endl;

	if (divisor == rememberGN)
		cout << std::endl << rememberGN << " is prime!\n" << iterTracker << " checks were done.";
	else
		cout << iterTracker << " checks have been done.";
	cin.get();
	cin.ignore();

	return 0;
}