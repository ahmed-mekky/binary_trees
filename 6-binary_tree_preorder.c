#include "binary_trees.h"

/**
 * binary_tree_is_root - is it?
 *
 * @node: ..
 *
 * Return: ...
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return (0);
	return func(tree->n)

	printPreorder(tree->left);

	printPreorder(tree->right);
}
