#pragma once

//Checks string by comparing elements at both ends and moving inwards. Breaks when middle is reached or inequality is found, then returns.
//This can be used generally as a palindrome checker in addition to the specific case presented in this Euler problem.
bool isPalindrome(const std::string&); 