#include "binary_trees.h"

/**
 * binary_tree_sibling - finds siblings
 * @node: root node to find the siblinf
 * Return: pointer of the sibling otherwhise NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node == node->parent->right && node->parent->left)
	{
		return (node->parent->left);
	}
	else if (node == node->parent->left && node->parent->right)
	{
		return (node->parent->right);
	}
	else
	{
		return (NULL);
	}
}
