#include "binary_trees.h"

/**
 * max - whatever
 *
 * @a: ..
 * @b: ...
 *
 * Return: ...
 */
int max(int a, int b)
{
	return ((a > b) ? a : b);
}

/**
 * t_height - whatever
 *
 * @tree: ..
 *
 * Return: ...
 */
size_t t_height(const binary_tree_t *tree)
{
	size_t x, y;

	if (tree == NULL)
		return (0);

	x = tree->left ? t_height(tree->left) + 1 : 0;
	y = tree->right ? t_height(tree->right) + 1 : 0;

	return (max(x, y));
}


/**
 * binary_tree_balance - whatever
 *
 * @tree: ..
 *
 * Return: ...
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t x, y;

	x = tree->left ? t_height(tree->left) + 1 : 0;
	y = tree->right ? t_height(tree->right) + 1 : 0;

	return (x - y);
}
