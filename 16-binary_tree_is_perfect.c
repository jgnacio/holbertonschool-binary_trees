#include "binary_trees.h"
#include "9-binary_tree_height.c"
#include "15-binary_tree_is_full.c"

/**
 * binary_tree_is_perfect - fuction that check if a tree is perfect
 * @tree: data
 *
 * Return: 1(success), 0(fails)
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int l_height = 0,
			r_height = 0;

	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);

	if (l_height != r_height)
		return (0);

	return (binary_tree_is_full(tree));
}
