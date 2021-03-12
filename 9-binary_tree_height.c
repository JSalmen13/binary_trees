#include "binary_trees.h"

/**
 * binary_tree_height - height of tree
 * @tree: root node
 * Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int Lcount = 0;
	int Rcount = 0;

	if (!tree)
		return (0);
	if (tree->left)
		Lcount = 1 + binary_tree_height(tree->left);
	if (tree->right)
		Rcount = 1 + binary_tree_height(tree->right);
	if (Lcount > Rcount)
		return (Lcount);
	else
		return (Rcount);
}
