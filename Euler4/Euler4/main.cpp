#include <iostream>
#include <string>
#include "palindrome.hpp"

using namespace std;

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
