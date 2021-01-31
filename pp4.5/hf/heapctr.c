#include <stdio.h>
#include <stdlib.h>

#include "../header.h"

void swap(int *x, int *y) {
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

void insert(int **a, int *n, int node) {
	printf("Insert %d\n", node);
	int *q = (int *)realloc(*a, sizeof(int) * (*n + 2));
	*a = q;
	(*n)++;
	(*a)[*n] = node;
	shift_up(*a, *n);
}

void shift_up(int *a, int node) {
	int parent = node / 2;
	if (parent == 0) return ;
	if (a[parent] > a[node])
		swap(&a[parent], &a[node]);
	shift_up(a, parent);
}

void shift_down(int *a, int node, int n) {
	int left = node * 2;
	int right = node * 2 + 1;
	if (right > n) {
		if (left > n) return ;
		else if (a[left] < a[node]){
			swap(&a[left], &a[node]);
		}
	} else if (a[left] < a[right]){
		if (a[left] < a[node]) {
			swap(&a[left], &a[node]);
			shift_down(a, left, n);
		}
	} else if (a[left] > a[right]) {
		if (a[right] < a[node]) {
			swap(&a[right], &a[node]);
			shift_down(a, right, n);
		}
	} else {
		printf("Error of Heap Tree Structure\n");
		return ;
	}
}

int findmin(int *a) {
	printf("Find min number: %d\n", a[1]);
	return a[1];
}

void deletemin(int **a, int *n) {
	printf("Delete min number: %d\n", (*a)[1]);
	(*a)[1] = (*a)[*n];
	int *q = (int *)realloc(*a, sizeof(int) * (*n - 1));
	(*n)--;
	*a = q;
	shift_down(*a, 1, *n);
}

void decreasekey(int **a, int n, int old, int new) {
	printf("DecreaseKey %d to %d\n", old, new);
	for (int i = 1; i <= n; i++) {
		if ((*a)[i] == old) {
			(*a)[i] = new;
			shift_up(*a, i);
			return ;
		}
	}

}
