#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert at bt right
 *
 * @parent: ..
 * @value: ....
 *
 * Return: bt
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *bt;

	if (parent == NULL)
		return (NULL);

	bt = malloc(sizeof(binary_tree_t));
	if (bt == NULL)
		return (NULL);

	bt->n = value;
	bt->parent = parent;
	bt->right = NULL;
	bt->right = NULL;

	if (parent->right == NULL)
		parent->right = bt;
	else
	{
		bt->right = parent->right;
		bt->right->parent = bt;
		parent->right = bt;
	}
	return (bt);
}
