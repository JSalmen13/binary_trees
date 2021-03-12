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
		Lcount = tree->left ? binary_tree_height(tree->left) + 1 : 0;
		Rcount = tree->right ? binary_tree_height(tree->right) + 1 : 0;

		return (MAX(Lcount, Rcount));
	}

	return (0);
}

/**
 * binary_tree_size - size measure
 * @tree: root
 * Return: size
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree)
	{
		return (binary_tree_size(tree->left)
				+ binary_tree_size(tree->right) + 1);
	}
	return (0);
}

/**
 * binary_tree_is_perfect - check for perfect tree
 * @tree: root node
 * Return: 1if tree is perfect 0 fail
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t Height = binary_tree_height(tree) + 1;
	size_t Size = binary_tree_size(tree);
	size_t Result = 1;

	if (tree)
	{
		while (Height-- > 0)
			Result = Result * 2;
		Result -= 1;

		if (Result == Size)
			return (1);
	}
	return (0);
}
