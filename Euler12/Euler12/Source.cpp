//consider re-writing this using prime-factorization.

#include <iostream>
using std::cin; using std::cout; using std::endl;
#include <vector>

void genTriNums(std::vector<unsigned int> &tList){
	for (unsigned int i = 1; tList.size() < tList.capacity(); i++)
		tList.push_back(((i*i) + i) / 2);
	return;
}

int main(){
	std::vector<unsigned int> triList;
	triList.reserve(1000000);
	cout << "creating list of tri numbers...\n";
	genTriNums(triList);

	cout << "last tri number is: " << triList.back() <<endl;

	cout << "Finding triangle number divisors...\n";
	for (unsigned int i = 0; i < triList.size(); i++){
		int nDivisors = 0;
		for (unsigned int j = 1; j < sqrt(triList[i]); j++){
			if (triList[i] % j == 0)
				nDivisors +=2;
		}
		if (nDivisors > 500){
			cout << "Triangle number " << triList[i] << " at " << i << " with " << nDivisors << " divisors.\n";
			break;
		}
	}
	cout << "Press any key to continue...";
	cin.ignore();
}