#include <stdio.h>
#include <malloc.h>

typedef struct foo {
	int x;
	int y;
} foo_t;

foo_t array[1];

int main() {
	array[1].x = 3;
	array[2].y = 4;

	return 0;
}
