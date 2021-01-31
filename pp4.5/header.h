#ifndef HEADER_H
#define HEADER_H

// from stdctr.c
void printTree(int *a, int n);
void goto_leaf(int *a, int n, int root);
void goto_root(int *a, int leaf);
int depth(int n);

// from heapctr.c
void swap(int *x, int *y);
void insert(int **a, int *n, int node);
void shift_up(int *a, int node);
void shift_down(int *a, int node, int n);
int findmin(int *a);
void deletemin(int **a, int *n);
void decreasekey(int **a, int n, int new, int old);

#endif
