#include "binary_trees.h"

/**
 * binary_tree_height - whatever
 *
 * @tree: ..
 *
 * Return: ...
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (-1);

	x = binary_tree_height(tree->left);
	y = binary_tree_height(tree->right);

	return (max(x, y) + 1);
}
