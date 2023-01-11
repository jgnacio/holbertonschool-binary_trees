#include "binary_trees.h"

/**
 * binary_tree_insert_left - add node left
 * @parent: the parent of the nodes
 * @value: value of the nodes
 *
 * Return: the newnode at left
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = NULL;

	if (!parent)
		return (NULL);

	newnode = malloc(sizeof(binary_tree_t));
	if (!newnode)
		return (NULL);

	if (parent->left)
	{
		newnode->n = value;
		parent->left->parent = newnode;
		newnode->left = parent->left;
		newnode->parent = parent;
		parent->left = newnode;
		newnode->right = NULL;
	}
	else
	{
		newnode->parent = parent;
		newnode->n = value;
		parent->left = newnode;
		newnode->left = NULL;
		newnode->right = NULL;
	}

	return (newnode);
}
