#include "binary_trees.h"

/**
 * binary_tree_sibling - whatever
 *
 * @node: ..
 *
 * Return: ...
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (
	node->parent == NULL ||
	node->parent->left == NULL ||
	node->parent->right == NULL
	)
		return (NULL);

	if (node->parent->left != node)
		return (node->parent->left);

	return (node);
}
