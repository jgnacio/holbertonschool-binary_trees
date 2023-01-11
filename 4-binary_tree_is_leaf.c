#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function that verify that node if an leaf
 * @node: data
 *
 * Return: 1 if node a leaf, 0 if not.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (!node->right && !node->left)
		return (1);
	else
		return (0);
}
