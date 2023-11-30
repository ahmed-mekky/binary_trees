#include "binary_trees.h"

/**
 * binary_tree_is_leaf - is it?
 *
 * @node: ..
 *
 * Return: ...
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}
