#include "binary_trees.h"
#include "9-binary_tree_height.c"
#include "12-binary_tree_leaves.c"

/**
 * binary_tree_is_perfect - fuction that check if a tree is perfect
 * @tree: data
 *
 * Return: 1(success), 0(fails)
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int l_height = 0,
			l_leaves = 0,
			r_height = 0,
			r_leaves = 0;

	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);

	if (l_height != r_height)
		return (0);

	l_leaves = binary_tree_leaves(tree->left);
	r_leaves = binary_tree_leaves(tree->right);

	return (l_leaves == r_leaves);
}
