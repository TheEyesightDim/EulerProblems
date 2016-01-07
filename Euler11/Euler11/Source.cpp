#include <array>
#include <fstream>
#include <iostream>
using std::cout; using std::cin; using std::endl;

int main(){
//*****INITIALIZE ARRAY WITH FILE VALUES*****//
	std::array<int, 400> gArray;
	std::ifstream gridFile("grid.txt");

	for (unsigned int i = 0; i < 400; i++){
		gridFile >> gArray[i];	//stream contents of ifstream object as input into gArray
	}
	gridFile.close();
//*****INITIALIZATION PHASE FINISHED*****//

	int cp = 0;				//current position
	int lp = 0, rp = 1;			//"largest product" and "relative product"

	//definitions for offsets from current pos.
	#define UP		-20	//only when cp >= 60
	#define DOWN	20	//only when cp < 340
	#define LEFT	-1	//only when cp % 20 >= 3
	#define RIGHT	1	//only when cp % 20 <= 16
	#define TOPLF	-21	//only when UP and LEFT
	#define TOPRI	-19	//only when UP and RIGHT
	#define LOWLF	19	//only when DOWN and LEFT
	#define LOWRI	21	//only when DOWN and RIGHT

	while (cp < gArray.size()){
		if (gArray[cp] && cp >= 60){		
			for (int i = 0; i < 4; i++){
				rp *= gArray[cp + (UP * i)];
			}
		}

		if (rp > lp) lp = rp;
		rp = 1;

		if (gArray[cp] && cp < 340){		
			for (int i = 0; i < 4; i++){
				rp *= gArray[cp + (DOWN * i)];
			}
		}

		if (rp > lp) lp = rp;
		rp = 1;

		if (gArray[cp] && cp % 20 >= 3){
			for (int i = 0; i < 4; i++){
				rp *= gArray[cp + (LEFT * i)];
			}
		}

		if (rp > lp) lp = rp;
		rp = 1;

		if (gArray[cp] && cp % 20 <= 16){
			for (int i = 0; i < 4; i++){
				rp *= gArray[cp + (RIGHT * i)];
			}
		}

		if (rp > lp) lp = rp;
		rp = 1;

		if (gArray[cp] && (cp >= 60 && cp % 20 >=3)){
			for (int i = 0; i < 4; i++){
				rp *= gArray[cp + (TOPLF * i)];
			}
		}

		if (rp > lp) lp = rp;
		rp = 1;

		if (gArray[cp] && (cp >= 60 && cp % 20 <= 16)){
			for (int i = 0; i < 4; i++){
				rp *= gArray[cp + (TOPRI * i)];
			}
		}

		if (rp > lp) lp = rp;
		rp = 1;

		if (gArray[cp] && (cp < 340 && cp % 20 >= 3)){
			for (int i = 0; i < 4; i++){
				rp *= gArray[cp + (LOWLF * i)];
			}
		}

		if (rp > lp) lp = rp;
		rp = 1;

		if (gArray[cp] && (cp < 340 && cp % 20 <= 16)){
			for (int i = 0; i < 4; i++){
				rp *= gArray[cp + (LOWRI * i)];
			}
		}

		if (rp > lp) lp = rp;
		rp = 1;
			
		cp++;		//move on to next gridspace
	}
	
	cout << lp <<endl;
	
	system("PAUSE");
}