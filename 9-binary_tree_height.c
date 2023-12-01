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
		return (-1);

	x = binary_tree_height(tree->left);
	y = binary_tree_height(tree->right);

	return (max(x, y) + 1);
}
