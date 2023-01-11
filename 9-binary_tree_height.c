#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: data
 *
 * Return: height, 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0;

	if (!tree)
		return (0);

	if (tree->right)
	{
		height++;
		binary_tree_height(tree->right);
	}
	if (tree->left)
	{
		height++;
		binary_tree_height(tree->left);
	}
	return (height);
}
