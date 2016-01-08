#include <iostream>

using std::cout; using std::cin;

int main(){
	int fib1 = 3, fib2 = 5, fibSum = 2;
	while (fib2 < 4000000) {
		fib2 += fib1;		//create new term
		fib1 = fib2 - fib1;	//move previous term forward in the sequence

		if (fib2 % 2 == 0){
			fibSum += fib2;
		}
	}

	cout << fibSum;

	cin.ignore();

	return 0;
}