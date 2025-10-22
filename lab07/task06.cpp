#include "main.h"

void task06() {
	const int n = 5;
	const int m = 6;
	int array[n][m]{
		{ 4.234, 234.543, 43.534, 43, 543.234, 123.56 },
		{ 2.543, 23.54, 65.45, 234.756, 34, 45.234 },
		{ 34.5, 23.57, 43.5, 352.57, 324.78, 23.54 },
		{ 65.45, 234.756, 34, 4.234, 234.543, 43.534 },
		{ 34.5, 23.57, 43.5, 234.756, 34, 4.234 },
	};

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << array[i][j] << "\t";
		}
		cout << endl;
	}

	cout << "New vision of array: \n";
	for (int i = 0; i < n; i++) {
		for (int j = 1; j < m; j += 2) {
			cout << array[i][j] << "\t";
		}
		cout << endl;
	}

	return;
}