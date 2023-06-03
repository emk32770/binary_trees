#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert at left node
 * @parent: parent node
 * @value: the value of node
 * Return: the nodes
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *nodeInsert;

	if (parent == NULL)
		return (NULL);
	nodeInsert = malloc(sizeof(binary_tree_t));
	if (nodeInsert == NULL)
		return (NULL);
	nodeInsert->n = value;
	nodeInsert->parent = parent;
	nodeInsert->right = parent->right;
	parent->right = nodeInsert;
	nodeInsert->left = NULL;

	if (nodeInsert->right)
		nodeInsert->right->parent = nodeInsert;

	return (nodeInsert);
}
