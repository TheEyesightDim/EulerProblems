#include <iostream>

int main(){
	
	int EulerSum = 0;

	for (int i = 0; i < 1000; i++){
		if ((i % 3 == 0) || (i % 5 == 0)){
			EulerSum += i;
		}
	}

	std::cout << EulerSum;

	std::cin.ignore();
	return 0;
}
