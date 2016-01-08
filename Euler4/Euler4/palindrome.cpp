#include <string>
#include "palindrome.hpp"

//Checks string by comparing elements at both ends and moving inwards. Breaks when middle is reached or inequality is found, then returns.
//This can be used generally as a palindrome checker in addition to the specific case presented in this Euler problem.
bool isPalindrome(const std::string& mbPalindrome) {

	bool someBool;
	int stringsize = mbPalindrome.size();

	for (signed int offset = 0; offset < (stringsize / 2); ++offset) {
		if ((mbPalindrome.at(offset)) == (mbPalindrome.at(stringsize - offset - 1)))
			someBool = true;
		else {
			someBool = false;
			break;
		}
	}

	return someBool;
}