#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * binary_tree_balance - function that measures the balance
 * factor of a binary tree
 * @tree: data
 *
 * Return: the balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int h_left = 0,
			h_right = 0;

	if (!tree)
		return (0);

	if (tree->left)
	{
		h_left = binary_tree_height(tree->left);
		h_left++;
	}
	if (tree->right)
	{
		h_right = binary_tree_height(tree->right);
		h_right++;
	}
	return (h_left - h_right);
}
