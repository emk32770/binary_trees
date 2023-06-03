#include "binary_trees.h"

/**
 * binary_tree_node - binray tree creation
 * @parent: the parent nodes
 * @value: value or data
 * Return: creates a node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nodeNew;

	nodeNew = malloc(sizeof(binary_tree_t));

	if (nodeNew == NULL)
		return (NULL);

	nodeNew->n = value;
	nodeNew->parent = parent;
	nodeNew->left = NULL;
	nodeNew->right = NULL;
	return (nodeNew);

}
