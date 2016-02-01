#include <stdio.h>
#include <malloc.h>

typedef struct foo {
	int x;
	int y;
} foo_t;

int main() {
	// malloc returns a valid allocation of the requested size,
	// or NULL if allocation failed
	foo_t *ptr = malloc(sizeof(foo_t));

	// dereference, without checking for null, and out of bounds
	ptr[1].x = 3;
	ptr[2].y = 4;

	return 0;
}
