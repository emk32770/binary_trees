#include "binary_trees.h"
int recursion_tree(int a, int b);

/**
 * binary_tree_is_perfect - a perfect tree
 * @tree: the tree
 * Return: the balance factor
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t nodeTree = 0, heightTree = 0, powerTree = 0;

	if (tree == NULL)
		return (0);
	if (!tree->left && !tree->right)
		return (1);

	heightTree = binary_tree_height(tree);
	nodeTree = binary_tree_size(tree);

	powerTree = (size_t)recursion_tree(2, heightTree + 1);
	return (powerTree - 1 == nodeTree);
}

/**
 *recursion_tree - recurse the tree
 *@a: the number
 *@b: raise
 *Return: the anser of a^b
 */
int recursion_tree(int a, int b)
{
	if (a < 0)
		return (-1);
	if (b == 0)
		return (1);
	else
		return (a * recursion_tree(a, b - 1));
}


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


/**
 * binary_tree_height - measure height
 * @tree: the tree node
 * Return: the height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right_height = 0, left_height = 0;

	if (tree == NULL)
		return (0);

	left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (left_height > right_height ? left_height : right_height);
}
