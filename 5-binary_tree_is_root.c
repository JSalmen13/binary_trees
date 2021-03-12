#include "binary_trees.h"

/**
 * binary_tree_is_root - root or not
 * @node: node to check
 * Return: 1 succes or 0 fail
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
