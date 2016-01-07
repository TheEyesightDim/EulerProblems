#include <string>
#include <algorithm>
#include <iostream>
using std::cout; using std::endl;

int ltCount(char digit, int pos){

}

int main(){
	int ctLetters = 0;
	std::string szWord;

	for (int i = 1; i <= 1000; i++){	//primary loop of program
		szWord = std::to_string(i);

		int len = szWord.size();
		switch (len){
		case 4:
			ctLetters += ltCount(szWord[0], len);
		case 3:
			ctLetters += ltCount(szWord[len - 3], len);
		case 2:
			if (szWord[len - 2] != '0')

		case 1:
		}
	}

	cout << ctLetters;
}