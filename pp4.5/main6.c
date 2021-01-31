#include <stdio.h>
#include <stdlib.h>

#include "header.h"

int main(void) {
	int *a, n = 1;
	int input;

	fflush(stdout);
	printf("::::: Input Serial Data :::::\n");
	printf("::::: Exit enter sequence by input -1 :::::\n\n");
	a = (int *)malloc(sizeof(int) * (64));
	do {
		printf("> %2d > ", n);
		scanf("%d", &input);
		if (input == -1) break;
		a[n++] = input;
	} while (1);
	n--;
	printf("\n----------------\n");
	printf("Entered Integer Sequence (%d Elements)\n", n);
	for (int i = 1; i <= n; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
	printTree(a, n);
	printf("Shift-Down Reconstruction\n")
	for (int i = n; i > 0; i--) {
		shift_down(a, i, n);
	}
	printTree(a, n);
	free(a);
	return 0;
}
