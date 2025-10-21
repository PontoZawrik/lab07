#include "main.h"

void task03() {
	const int n = 2;
	const int m = 4;
	double array[n][m];

	double num;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << "array[" << i << "][" << j << "]: ";
			cin >> num;
			array[i][j] = num;
		}
	}

	cout << "Print array: \n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m-1; j++) {
			cout << array[i][j] << " ; ";
		}
		cout << array[i][m-1] << endl;
	}

	return;
}