#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert at bt left
 *
 * @parent: ..
 * @value: ....
 *
 * Return: bt
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *bt;

	if (parent == NULL)
		return (NULL);

	bt = malloc(sizeof(binary_tree_t));
	if (bt == NULL)
		return (NULL);

	bt->n = value;
	bt->parent = parent;
	bt->left = NULL;
	bt->right = NULL;

	if (parent->left == NULL)
		parent->left = bt;
	else
	{
		bt->left = parent->left;
		bt->left->parent = bt;
		parent->left = bt;
	}
	return (bt);
}
