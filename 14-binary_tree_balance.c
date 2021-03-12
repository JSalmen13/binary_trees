#include "binary_trees.h"

/**
 * binary_tree_height - height of tree
 * @tree: root node
 * Return: height of tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t Lcount = 0;
	size_t Rcount = 0;

	if (tree)
	{
		Lcount = tree->left ? binary_tree_height(tree->left) + 1 : 1;
		Rcount = tree->right ? binary_tree_height(tree->right) + 1 : 1;

		return (MAX(Lcount, Rcount));
	}

	return (0);
}

/**
 * binary_tree_balance - Balance factor measure
 * @tree: root node
 * Return: balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
	{
		return (binary_tree_height(tree->left)
				- binary_tree_height(tree->right));
	}

	return (0);
}
