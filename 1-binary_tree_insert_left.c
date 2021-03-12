#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert node as a chold
 *
 * @parent: parent node
 * @value: value of the node
 *
 * Return: pointer of NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *tree = NULL;

	if (parent)
	{
		tree = binary_tree_node(parent, value);
		if (tree)
		{
			if (parent->left)
			{
				tree->left = parent->left;
				parent->left->parent = tree;
			}
			parent->left = tree;
		}
	}

	return (tree);
}
