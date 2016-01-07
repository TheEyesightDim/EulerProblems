#include <iostream>

int main(){

	int sNumber = 1;  

	for (int i = 2; i < 21; ++i){	//when this exits, the sNumber that it modifies will be the answer
		if (sNumber % i == 0)	//if this number is divisible by the current value of i, increase i and roll with it....
			continue;
		else {
			++sNumber;			//if it fails, move on to the next number.
			i = 2;
		}
	}

	std::cout << sNumber;

	std::cin.get();
	std::cin.ignore();
	return 0;
}