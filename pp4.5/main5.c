#include <stdio.h>
#include <stdlib.h>

#include "header.h"

int main(void) {
	int *a, n = 0;
	int input;

	fflush(stdout);
	printf("::::: Input Serial Data :::::\n");
	printf("::::: Exit enter sequence by input -1 :::::\n\n");
	a = (int *)malloc(sizeof(int) * (n + 2));
	do {
		printf("> %2d > ", n);
		scanf("%d", &input);
		if (input == -1) break;
		insert(&a, &n, input);
	} while (1);
	printf("\n----------------\n");
	printf("Entered Integer Sequence (%d Elements)\n", n);
	for (int i = 1; i <= n; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
	printTree(a, n);
	free(a);
	return 0;
}
