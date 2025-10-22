#include "main.h"

void task04() {
	const int n = 19;
	const int m = 14;
	int array[n][m];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			array[i][j] = getRandomInt(29, 31);
		}
	}

	cout << "Show massiv: \n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m - 1; j++) {
			cout << array[i][j] << " | ";
		}
		cout << array[i][m - 1] << endl;
	}


	cout << "Show reverse massiv: \n";
	for (int i = n-1; i >= 0; i--) {
		for (int j = m-1; j >= 1; j--) {
			cout << array[i][j] << " | ";
		}
		cout << array[i][0] << endl;
	}

	return;
}