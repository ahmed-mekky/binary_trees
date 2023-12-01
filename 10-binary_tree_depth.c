#include "binary_trees.h"


/**
 * binary_tree_depth - whatever
 *
 * @tree: ..
 *
 * Return: ...
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t result = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent)
	{
		result++;
		tree = tree->parent;
	}
	return (result);
}
