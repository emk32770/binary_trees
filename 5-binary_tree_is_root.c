#include "binary_trees.h"

/**
 * binary_tree_is_root - check roots
 * @node: the node
 * Return: the new node
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	return ((node == NULL || node->parent) ? 0 : 1);
}
