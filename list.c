#include <malloc.h>

typedef struct node {
	int val;
	struct node *next;
} node_t;

void build_and_destroy() {
	node_t *ptr = NULL;

	for (int i = 0; i < 10; i++) {
		node_t *cur = malloc(sizeof(node_t));
		cur->val = i;
		cur->next = ptr;
		ptr = cur;
	}

	for (int i = 0; i < 20; i++) {
		node_t * nxt = ptr->next;

		free(ptr);

		ptr = nxt;
	}
}
