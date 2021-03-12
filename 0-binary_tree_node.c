#include "binary_trees.h"

/**
 * binary_tree_node - binary tree
 *
 * @parent: parent node
 * @value: value of the node
 *
 * Return: pointer of NULL
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *tree = NULL;

	tree = malloc(sizeof(binary_tree_t));
	if (tree)
	{
		tree->n = value;
		tree->parent = parent;
		tree->left = NULL;
		tree->right = NULL;
	}

	return (tree);
}
