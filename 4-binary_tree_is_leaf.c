#include "binary_trees.h"

/**
 * binary_tree_is_leaf - leaf or not
 *
 * @node: node to check
 * Return: 1 succes or 0 fail
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node)
	{
		if (!node->left && !node->right)
			return (1);
	}
	return (0);
}
