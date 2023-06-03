#include "binary_trees.h"

/**
 *binary_tree_is_leaf - check a node if its a leaf
 *@node: the node to use
 *Return: if its a leaf
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);
	return (1);
}

