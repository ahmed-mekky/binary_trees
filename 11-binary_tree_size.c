#include "binary_trees.h"


/**
 * binary_tree_size - whatever
 *
 * @tree: ..
 *
 * Return: ...
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t x, y;

	if (tree == NULL)
		return (NULL)

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	x = tree->left ? binary_tree_size(tree->left) : 0;
	y = tree->right ? binary_tree_size(tree->right) : 0;

	return (x + y + 1);
}
