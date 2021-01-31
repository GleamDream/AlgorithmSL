#include <stdio.h>
#include <stdlib.h>

#include "header.h"

int main(void) {
	int *a, n, n_first, i;
	int input;
	n = 0;

	fflush(stdout);
	printf("::::: Input Serial Data :::::\n\n");
	printf(" Input Element Num: ");
	scanf("%d", &n_first);
	a = (int *)malloc(sizeof(int) * n + 1);
	for (i = 1; i <= n_first; i++) {
		printf("> %2d > ", i);
		scanf("%d", &input);
		insert(&a, &n, input);
	}
	printf("\n----------------\n");
	printf("Entered Integer Sequence (%d Elements)\n", n);
	for (i = 1; i <= n; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
	printTree(a, n);
	insert(&a, &n, 5);
	printTree(a, n);
	findmin(a);
	deletemin(&a, &n);
	printTree(a, n);
	decreasekey(&a, n, 13, 6);
	printTree(a, n);
	free(a);
	return 0;
}
