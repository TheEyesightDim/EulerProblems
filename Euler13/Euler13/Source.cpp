#include <array>
#include <fstream>
#include <iomanip>
#include <iostream>
using std::cin; using std::cout; using std::endl;

int main(){
	std::ifstream digits("digits.txt");
	std::array<double, 100> lngNums;
	double total = 0;

	for (int i = 0; i < lngNums.size(); i++)
		digits >> lngNums[i];

	digits.close();

	for (int i = 0; i < lngNums.size(); i++)
		total += lngNums[i];

	cout << std::setprecision(12) << total;
	system("PAUSE");
	return 0;
}