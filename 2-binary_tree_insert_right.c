#include "binary_trees.h"

/**
 * binary_tree_insert_right - add node right
 * @parent: the parent of the nodes
 * @value: value of the nodes
 *
 * Return: the newnode at right
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = malloc(sizeof(binary_tree_t));

	if (!newnode)
		return (NULL);

	if (parent->right)
	{
		newnode->n = value;
		parent->right->parent = newnode;
		newnode->right = parent->right;
		newnode->parent = parent;
		parent->right = newnode;
		newnode->left = NULL;
	}
	else
	{
		newnode->parent = parent;
		newnode->n = value;
		parent->right = newnode;
		newnode->left = NULL;
		newnode->right = NULL;
	}

	return (newnode);
}
