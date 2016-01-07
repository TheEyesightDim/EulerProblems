#include <iostream>
#include <string>

using namespace std;

//does the actual checking for palindromes
bool isPalindrome(string mbPalindrome){

	bool someBool;
	int stringsize = mbPalindrome.size();

	for (signed int offset = 0; offset < (stringsize / 2); ++offset){
		if ((mbPalindrome.at(offset)) == (mbPalindrome.at(stringsize - offset - 1)))
			someBool = true;
		else {
			someBool = false;
			break;
		}
	}

	return someBool;
} 

int main(){
	
	
	string sProduct;
	/************************[DEBUG]****************************
	char keepGoing = 'y';
	do{
		cout << "enter string to test for palindrome status: ";
		cin >> sProduct;
		
		if (isPalindrome(sProduct))
			cout << "\nIt's a palindrome!\n";
		else
			cout << "\nIt's NOT a palindrome.\n";

		cout << "wanna test again? ('y' for yes, else for no): \n";
		cin >> keepGoing;

	} while (keepGoing == 'y');
	************************************************************/
	
	int highPalindrome = 0;
	

	for (int first3d = 999; first3d > 99; --first3d){
		for (int second3d = 999; second3d > 99; --second3d){
			sProduct = to_string(first3d * second3d);
			if (isPalindrome(sProduct) == true){
				if (first3d * second3d > highPalindrome)
					highPalindrome = first3d * second3d;
			}
		}
	}

	cout << highPalindrome;

	cin.get();
	cin.ignore();

	return 0;

}
