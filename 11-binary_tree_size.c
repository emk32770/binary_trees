#include "binary_trees.h"

/**
 * binary_tree_size -  the tree size
 * @tree: the tree node
 * Return: Size or 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t sizeTree = 0;

	if (tree == NULL)
		return (0);

	sizeTree += 1;
	sizeTree += binary_tree_size(tree->left);
	sizeTree += binary_tree_size(tree->right);

	return (sizeTree);
}

