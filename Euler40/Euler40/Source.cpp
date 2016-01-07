//An irrational decimal fraction ("Champernowne's Constant")is created by concatenating the positive integers : 0.123456789101112131415161718192021...
#include <string>
#include <chrono>
#include <iostream>
using std::cout; using std::endl;

int ctoi(char c){
	return c - '0';
}

int main(){
	auto start = std::chrono::steady_clock::now();

	std::string sConstant;
	sConstant.reserve(1000000);

	for (int i = 1; sConstant.size() < sConstant.capacity(); i++){
			sConstant += std::to_string(i);
	}

	int product = ctoi(sConstant[0]) * ctoi(sConstant[9]) * ctoi(sConstant[99]) * ctoi(sConstant[999]) * ctoi(sConstant[9999]) * ctoi(sConstant[99999]) * ctoi(sConstant[999999]);
	
	auto end = std::chrono::steady_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);

	cout << product <<endl;
	cout << duration.count() << " milliseconds\n";

	std::cin.get();
}