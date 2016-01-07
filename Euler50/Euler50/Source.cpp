#include <vector>
#include <iostream>
using std::cin; using std::cout; using std::endl;
#include "primelister.hpp"

#define UPPER_LIMIT 1000000

int main(){
	unsigned int sumLen{ 1 }, primeSum{ 0 };
	std::vector<unsigned int> primeHolder;
	primeHolder.reserve(UPPER_LIMIT - 2);

	for (unsigned int i = 2; i < UPPER_LIMIT; i++)	//fill with ints <2...(i-1)>
		primeHolder.push_back(i);

	primeList(primeHolder);

	for (int ploc = primeHolder.size() - 1; ploc > 0; --ploc){
		primeSum = 0;
		unsigned int tmpSum{ 0 }, tmpLen{ 0 };
		for (int i = 0; i < ploc; ++i){
			for (int j = i; j < ploc; ++j){
				tmpSum += primeHolder[j];
				++tmpLen;
				if (tmpSum > primeHolder[ploc]){
					tmpSum = 0;  tmpLen = 0;
					continue;
				}
				else if (tmpSum == primeHolder[ploc] && tmpLen > sumLen){
					primeSum = tmpSum;
					sumLen = tmpLen;
					cout << primeSum << " with " << sumLen << " terms in sum.\n";
				}
			}
		}
	}
	cout << "Fin.";
	cin.get();
}