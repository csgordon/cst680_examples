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

	// dereference, without checking for null
	ptr[0].x = 3;
	ptr[0].y = 4;

	return 0;
}
