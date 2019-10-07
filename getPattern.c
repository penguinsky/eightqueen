#include <header.h>

int main(void) {
	int a, i, j = 0, Pattern[8] = { 0, 1, 2, 3, 4, 5, 6, 7 },
		Pattern1[8][8] = {};
	for (a = 0; a < 8; a++) {
		for (i = 0; i < 8; i++) {
			if (Pattern[a] == i) {
				Pattern1[a][i] = 1;

			}
		}
	}
	for (i = 0; i < 8; i++) {
		for (j = 0; j < 8; j++) {
			printf("%d ", Pattern1[i][j]);
		}
		printf("\n");
	}
	return 0;
}