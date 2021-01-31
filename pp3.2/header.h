#ifndef HEADER_H
#define HEADER_H

struct vertex {
	int name, key;
	struct vertex *next;
};

bool search(int n, int k, struct vertex *top);
void insert(int n, int k, struct vertex **top);
void delete(int n, int k, struct vertex *past, struct vertex *current);

#endif
