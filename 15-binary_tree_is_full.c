#include "binary_trees.h"

/**
 * binary_tree_is_full - Binary tree full
 * @tree: root node
 * Return: 1 if full, 0 if not
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int i = 0;
	int j = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	i = binary_tree_is_full(tree->left);
	j = binary_tree_is_full(tree->right);

	if (i && j)
		return (1);

	return (0);
}
