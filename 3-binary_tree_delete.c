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

	if (is_leaf(tree))
	{
		if (tree == NULL)
		{
			return;
		}

		if (tree->parent != NULL)
		{
			if (tree->parent->left == tree)
			{
				tree->parent->left = NULL;
			}
			else if (tree->parent->right == tree)
			{
				tree->parent->right = NULL;
			}
		}
		free(tree);
	}
}
int is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}
