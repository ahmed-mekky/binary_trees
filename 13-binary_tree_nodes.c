#include "binary_trees.h"


/**
 * t_size - whatever
 *
 * @tree: ..
 *
 * Return: ...
 */
size_t t_size(const binary_tree_t *tree)
{
	size_t x, y;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	x = tree->left ? t_size(tree->left) : 0;
	y = tree->right ? t_size(tree->right) : 0;

	return (x + y + 1);
}

/**
 * t_leaves - whatever
 *
 * @tree: ..
 *
 * Return: ...
 */
size_t t_leaves(const binary_tree_t *tree)
{
	size_t x, y;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	x = tree->left ? t_leaves(tree->left) : 0;
	y = tree->right ? t_leaves(tree->right) : 0;

	return (x + y);
}


/**
 * binary_tree_nodes - whatever
 *
 * @tree: ..
 *
 * Return: ...
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t x, y;

	x = t_size(tree);
	y = t_leaves(tree);

	return (x - y);
}
