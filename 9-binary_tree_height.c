#include "binary_trees.h"

/**
 * binary_tree_height - measure height of tree
 * @tree: data
 *
 * Return: height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
		size_t h_left = 0,
					 h_right = 0;

		if (!tree)
			return (0);

		h_left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		h_right = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		if (h_left > h_right)
			return (h_left);
		else
			return (h_right);
}
