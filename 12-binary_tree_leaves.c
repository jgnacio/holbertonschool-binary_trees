#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 * @tree: data
 *
 * Return: count of leaves(success), 0 if node is a leave or fails.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
		size_t l_leaves = 0,
					 r_leaves = 0;

		if (!tree)
			return (0);
		if (!tree->left && !tree->right)
			return (1);
		l_leaves += binary_tree_leaves(tree->left);
		r_leaves += binary_tree_leaves(tree->right);
		return (l_leaves + r_leaves);
}
