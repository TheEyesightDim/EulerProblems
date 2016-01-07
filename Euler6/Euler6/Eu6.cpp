#include <iostream>
int main(){
	
	int sumOfSquareH = 0, squareOfSumH = 0;

	for (int i = 0; i <= 100; ++i){	//first get (sigma nat numbers to 100)^2
		squareOfSumH += i;
	}

	squareOfSumH *= squareOfSumH;

	for (int i = 0; i <= 100; ++i){	//then get sum of the square of each nat number up to 100
		sumOfSquareH += i * i;
	}

	std::cout << squareOfSumH - sumOfSquareH;	//remember to do these in order to avoid sign issues... refer to euler problem

	std::cin.get();
	std::cin.ignore();
	return 0;
}