#include "tree.h"

int main(int argc, char *argv[])
{
	Tree tree;

	init_tree(&tree);
	insert_tree(&tree, 5);
	insert_tree(&tree, 2);
	insert_tree(&tree, 3);
	insert_tree(&tree, 6);
	insert_tree(&tree, 12);
	insert_tree(&tree, 9);
	insert_tree(&tree, 10);
	
	printf("Node numbers: %d\n", get_node_nums(tree.root));
	find_k_max(tree.root, 4);
	
	in_order_traverse_tree(tree.root);
	Node *node = successor_tree(tree.root);
	delete_tree(&tree, 6);
	delete_tree(&tree, 5);
	in_order_traverse_tree(tree.root);

	return 0;
}
