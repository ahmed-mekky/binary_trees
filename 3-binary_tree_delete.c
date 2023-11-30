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

	if (binary_tree_is_leaf(tree))
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
