#include "binary_trees.h"

/**
 * binary_tree_node - create bt
 *
 * @parent: ..
 * @value: ....
 *
 * Return: bt
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *bt = malloc(sizeof(binary_tree_t));

	if (bt == NULL)
		return (NULL);
	bt->n = value;
	bt->parent = NULL;
	bt->left = NULL;
	bt->right = NULL;
	return (bt);
}
