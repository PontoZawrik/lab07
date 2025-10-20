#include "main.h"

void task01() {
	const int n = 4;
	const int m = 5;
	int array[n][m];

	double avg = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			array[i][j] = getRandomInt(-5, 15);
			avg += array[i][j];

			cout << array[i][j] << "\t";
		}
		cout << endl;
	}
	
	avg /= (n * m);

	int count = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			count += array[i][j] > avg ? 1 : 0;
		}
	}

	cout << "Кол-во элементов > " << avg << ": " << count << endl;

	return;
}