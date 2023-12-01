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
 * binary_tree_height - whatever
 *
 * @tree: ..
 *
 * Return: ...
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t x, y;

	if (tree == NULL)
		return 0;

	x = tree->left ? binary_tree_height(tree->left) + 1 : 0;
	y = tree->right ? binary_tree_height(tree->right) + 1 : 0;

	return (max(x, y));
}
