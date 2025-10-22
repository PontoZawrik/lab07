#include "main.h"

void task05() {
	const int n = 17;
	const int m = 12;
	int array[n][m];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			array[i][j] = j * 2 + i * (m * 2);
		}	
	}

	cout << "Print massiv: \n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << array[i][j] << "\t";
		}
		cout << endl;
	}

	cout << "Print new massiv: \n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			array[i][j] -= 10;
			cout << array[i][j] << "\t";
		}
		cout << endl;
	}

	return;
}