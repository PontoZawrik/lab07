#include "main.h"

void task02() {
	const int n = 4;
	const int m = 2;
	char array[n][m]{ {'c', 'v'}, {'%', 'e'}, {'#', '*'}, {'g', '@'} };

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << array[i][j] << "\t";
		}
		cout << endl;
	}

	return;
}