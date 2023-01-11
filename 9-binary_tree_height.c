#include "binary_trees.h"

/**
 * binary_tree_height - measure height of tree
 * @tree: data
 *
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0;

	if (!tree)
		return (0);

	if (tree->right || tree->left)
	{
		height = binary_tree_height(tree->right);
		height = binary_tree_height(tree->left);
		height++;
	}
	return (height);
}
