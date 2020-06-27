#include <stdio.h>
#include<math.h>


int main() {
	int matrix[100][100];
	int m;
	int n;
	int i, j;
	int x;
	scanf_s("%d %d", &m, &n);
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			scanf_s("%d", &matrix[i][j]);
		}
	}
	x = 0;
	i = 0;
	int sum = 0;
	while (sum < m * n) {
		x = i;
		while( x < n - i && sum < m * n)
		{
			printf("%d ", matrix[i][x]);
			x++;
			sum++;
		}
		x = i;
		while( x < m - i - 1 && sum < m * n)
		{
			printf("%d ", matrix[x + 1][n - i - 1]);
			x++;
			sum++;
		}
		x = i;
		while (x < n - i - 1 && sum < m * n)
		{
			printf("%d ", matrix[m - i - 1][n - x - 2]);
			x++;
			sum++;
		}
		x = i;
		while (x < m - 1 - i  && m - x - 2 > i && sum < m * n)
		{
			printf("%d ", matrix[m - x - 2][i]);
			x++;
			sum++;
		}
		i++;
	}

	return 0;
}
