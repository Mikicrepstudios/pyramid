#include <iostream>
#include <cstring>

int main() {
	// Variables
	int rows;
	std::cin >> rows;
	int clength = 0;
	int cnum = 0;
	int cexnum = 0;
	int array[rows];
	int arrayclone[rows];

	// Fill array with zeros
	for(int x = 0; x <= rows; x++) {
		array[x] = 0;
		arrayclone[x] = 0;
	}

	// Main loop
	for(int x = 1; x <= rows; x++) {
		arrayclone[clength] = 1;
		clength++;
		for(int y = 0; y <= rows; y++) {
			arrayclone[cnum + 1] = array[cnum] + array[cnum + 1];
			cnum++;
		}
		cnum = 0;
		cexnum = 0;
		for(int y = 0; y <= rows; y++) {
			array[cexnum] = arrayclone[cexnum];
			std::cout << array[cexnum];
			cexnum++;
		}
		std::cout << "\n";
	}

	// Exit
	return 0;
}

/*
      1
     1 1
    1 2 1
   1 3 3 1
  1 4 6 4 1
 1 5 10 10 5 1
1 6 15 20 15 6 1
*/
/*
each row 1 + rownum +* 2 each
1 + / = 0
1 + 1 = 2
1 + 2
2 + 3
3 + 4
*/
