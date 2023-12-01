#include "binary_trees.h"


/**
 * t_sibling - whatever
 *
 * @node: ..
 *
 * Return: ...
 */
binary_tree_t *t_sibling(binary_tree_t *node)
{
	if (
	node == NULL ||
	node->parent == NULL ||
	node->parent->left == NULL ||
	node->parent->right == NULL
	)
		return (NULL);

	if (node->parent->left != node)
		return (node->parent->left);

	return (node->parent->right);
}

/**
 * binary_tree_uncle - whatever
 *
 * @node: ..
 *
 * Return: ...
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);

	return (t_sibling(node->parent));
}
