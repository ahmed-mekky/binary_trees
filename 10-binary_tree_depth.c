#include "binary_trees.h"

/**
 * min - whatever
 *
 * @a: ..
 * @b: ...
 *
 * Return: ...
 */
int min(int a, int b)
{
	return (a < b) ? a : b;
}

/**
 * binary_tree_depth - whatever
 *
 * @tree: ..
 *
 * Return: ...
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (-1);

	x = binary_tree_height(tree->left);
	y = binary_tree_height(tree->right);

	return (min(x, y) + 1);
}
