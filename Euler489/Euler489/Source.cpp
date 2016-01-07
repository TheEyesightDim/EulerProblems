#include <cmath>
#include <iostream>
using std::cout; using std::endl;

unsigned __int64 H(unsigned m, unsigned n){
	int sumH = 0;

	for (int a = 1; a <= m; a++){
		for (int b = 1; b <= n; b++){
			sumH += G(a, b);
		}
	}

	return sumH;
}

unsigned __int64 G(unsigned a, unsigned b){
	unsigned n = 0;
	unsigned gcd = 1;
	
		for (unsigned rgcd = 1; rgcd < pow(n, 3) + b; rgcd++){
			if (pow(n, 3) + b % rgcd == 0 && pow(n + a, 3) + b % rgcd == 0 && rgcd > gcd){
				gcd = rgcd;
			}
		}
	return n;
}

int main(){

	cout<<H(18, 1900);

	std::cin.get();
}