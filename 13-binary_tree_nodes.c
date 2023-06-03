#include "binary_trees.h"

/**
 * binary_tree_nodes - count nodes with 1 child
 * @tree: main tree
 * Return: count of tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodeCount = 0;

	if (tree == NULL)
		return (0);
	nodeCount += (tree->left || tree->right) ? 1 : 0;
	nodeCount += binary_tree_nodes(tree->left);
	nodeCount += binary_tree_nodes(tree->right);

	return (nodeCount);
}


