#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "../header.h"

bool search(int n, int k, struct vertex *top){
	if (top == NULL) return false;
	else if (top->key != k) return search(n, k, top->next);
	else if (top->key == k) return true;
	else return false;
}

void insert(int n, int k, struct vertex **top) {
	struct vertex *new;
	new = (struct vertex *)malloc(sizeof(struct vertex));
	new->name = n;
	new->key = k;
	new->next = *top;
	*top = new;
}

void delete(int n, int k, struct vertex *past, struct vertex *current) {
	int d;
	if (past == NULL) {
		printf("(name, key) = (%d, %d) is exists\n", n, k);
		printf("Would you want to DELETE ?\n");
		printf("input 0: leave, other: delete\n>> ");
		scanf("%d", &d);
		if (d == 0) return;
	} 

	if (past == NULL && current->next == NULL) {
		current = NULL;
		return;
	}

	if (current == NULL) return;
	else if (current->key != k) return delete(n, k, current, current->next);
	else if (current->key == k) {
		if (current->next != NULL) {
			*current = *(current->next);
			return ;
		} else {
			if (past == NULL) current = NULL;
			else past->next = NULL;
			//return ;
		}
	}
	return ;
}
