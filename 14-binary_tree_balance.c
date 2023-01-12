#include "binary_trees.h"

/**
 * binary_tree_balance - function that measures the balance
 * factor of a binary tree
 * @tree: data
 *
 * Return: the balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_height_left(tree) - binary_tree_height_right(tree));
}

/**
 * binary_tree_height_left - measure height left of tree
 * @tree: data
 *
 * Return: height
 */
size_t binary_tree_height_left(const binary_tree_t *tree)
{
		size_t h_left = 0;

		if (!tree)
			return (0);

		h_left = tree->left ? 1 + binary_tree_height_left(tree->left) : 0;
		return (h_left);
}

/**
 * binary_tree_height_right - measure height right of tree
 * @tree: data
 *
 * Return: height
 */
size_t binary_tree_height_right(const binary_tree_t *tree)
{
		size_t h_right = 0;

		if (!tree)
			return (0);

		h_right = tree->right ? 1 + binary_tree_height_right(tree->right) : 0;
		return (h_right);
}

