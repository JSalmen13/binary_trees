#include "binary_trees.h"

/**
 * binary_tree_postorder - parcours binary tree
 *
 * @tree: root node to parcours
 * @func: pointer to call each node
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
