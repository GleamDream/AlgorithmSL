#include <stdio.h>
#include <stdbool.h>

#include "header.h"

int main(void) {
	struct vertex *top;
	int n, k;

	printf("\n:::::: Input List Data ::::::\n\n");
	printf("Input Each Elements\n");
	top = NULL;
	while(1) {
		printf("  input \"name\" value: ");
		scanf("%d", &n);
		if (n < 0) break;
		printf("  input \"key\"  value: ");
		scanf("%d", &k);
		if (search(n, k, top)) {
			delete(n, k, NULL, top);
		} else {
			insert(n, k, &top);
		}
	}

	printf("\n-------------------------\n");
	printf("Entered Value\n");
	while(top != NULL) {
		printf("[%d, %d] ", top->name, top->key);
		top = top->next;
	}
	printf("\n");
	return (0);
}
