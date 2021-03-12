#include "binary_trees.h"

/**
 * binary_tree_depth -depth of tree
 *
 * @tree: root node
 * Return: depth of the tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t dpth = 0;

	if (tree)
	{
		for (; tree->parent; dpth++)
			tree = tree->parent;
	}
	return (dpth);
}
