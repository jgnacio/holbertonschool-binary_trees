#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the nodes with at
 * least 1 child in a binary tree
 * @tree: data
 *
 * Return: count of 1 child nodes.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
		size_t l_child = 0;

		if (!tree)
			return (0);

		if ((tree->left && !tree->right) ||
				(!tree->left && tree->right))
		{
			return (1);
		}

		l_child += binary_tree_nodes(tree->left);
		l_child += binary_tree_nodes(tree->right);

		return (l_child);
}
