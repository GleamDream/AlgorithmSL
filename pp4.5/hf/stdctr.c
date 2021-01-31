#include <stdio.h>
#include <math.h>

#include "../header.h"

void printTree(int *a, int n) {
	int d = depth(n);
	int e = 1;
	printf("\n----- Tree -----\n");
	for (int i = 0; i < d; i++){
		for (int j = 0; j < (int)pow(2.0, (float)i); j++) {
			for (int k = 0; k < pow(2.0, (float)d - i) / 2; k++) 
				printf(" ");
			printf("%d", a[e++]);
			if (e > n) break;
		}
		printf("\n");
	}
	printf("----------------\n\n");
}

int depth(int n) {
	int d = 0;
	for (d = 0; n > 1; d ++) n /= 2;
	return d + 1;
}

void goto_leaf(int *a, int n, int root) {
	int left = root * 2;
	int right = root * 2 + 1;
	printf("a[%d]: %d\n", root, a[root]);
	if (root > n || left > n) return ;
	else if (right > n) goto_leaf(a, n, left);
	else if (a[left] < a[right]) goto_leaf(a, n, left);
	else if (a[left] > a[right]) goto_leaf(a, n, right);
}

void goto_root(int *a, int leaf) {
	int parent = leaf / 2;
	printf("a[%d]: %d\n", leaf, a[leaf]);
	if (parent == 0) return ;
	else goto_root(a, parent);
}
