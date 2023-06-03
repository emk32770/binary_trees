#include "binary_trees.h"

/**
 * binary_tree_depth - measure the dept of tree
 * @tree: the tree node
 * Return: the depth of the tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth_tree = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent)
	{
		depth_tree++;
		tree = tree->parent;
	}
	return (depth_tree);
}
