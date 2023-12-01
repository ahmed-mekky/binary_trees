#include "binary_trees.h"

/**
 * binary_tree_delete - delete bt
 *
 * @tree: ..
 *
 * Return: ...
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree->left != NULL)
		binary_tree_delete(tree->left);

	if (tree->right != NULL)
		binary_tree_delete(tree->right);

	if (tree == NULL)
	{
		return;
	}
	free(tree);
}
