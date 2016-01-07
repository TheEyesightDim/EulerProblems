//try multithreading?

#include <iostream>
using std::cout;

int main(){
	int ctTerms = 0;

	for (int i = 1; i < 1000000; ++i){
		unsigned int starter = i;
		int r = 0;
		do{
			switch (starter % 2){
			case 0:
				starter /= 2;
				break;
			default:
				starter = (3 * starter) + 1;
				break;
			}
			r++;
		} while (starter != 1);

		if (r > ctTerms){
			ctTerms = r;
			cout << i << " yields " << ctTerms << " terms.\n";
		}
	}

	system("PAUSE");
}