#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert at left node
 * @parent: parent node
 * @value: the value of node
 * Return: the nodes
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *nodeInsert;

	if (parent == NULL)
		return (NULL);
	nodeInsert = malloc(sizeof(binary_tree_t));
	if (nodeInsert == NULL)
		return (NULL);
	nodeInsert->n = value;
	nodeInsert->parent = parent;
	nodeInsert->left = parent->left;
	parent->left = nodeInsert;
	nodeInsert->right = NULL;

	if (nodeInsert->left)
		nodeInsert->left->parent = nodeInsert;

	return (nodeInsert);
}
