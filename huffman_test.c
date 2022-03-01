#include "huffman.h"
#include "code.h"
#include "defines.h"
#include "node.h"
#include "pq.h"
#include "stack.h"
#include "io.h"
#include <stdio.h> 
#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>
#include <inttypes.h>
#include <stdbool.h>

int main(void) {

	uint64_t alpha[ALPHABET];

	for(int i = 0; i< ALPHABET; i++) {
		alpha[i] = 0;
	}

	alpha[0] = 1;
	alpha[255] = 1;
	alpha[33] = 6;
	alpha[80] = 9;
	alpha[65] = 3;

	Node *root = build_tree(alpha);
	node_print(root);

	Code table[ALPHABET];
	/*for(int j = 0; j<ALPHABET; j++) {
		table[j] = code_init();
	}*/

	build_codes(root, table);

	printf("index 0(1): ");
	code_print(&table[0]);

	printf("index 255(1): ");
	code_print(&table[255]);

	printf("index 33(6): ");
	code_print(&table[33]);

	printf("index 80(9): ");
	code_print(&table[80]);

	printf("index 65(3): ");
	code_print(&table[65]);

	if(root->frequency == 20) {
		printf("\n");
		puts("BUILD_TREE TEST:		[PASSED]");
	}
	else {
		puts("BUILD_TREE TEST:		[FAILED]");
	}

	dump_tree(STDOUT_FILENO, root); 
	delete_tree(&root);
	return 0;
}
