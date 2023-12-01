#include "binary_trees.h"

/**
 * max - whatever
 *
 * @a: ..
 * @b: ...
 *
 * Return: ...
 */
int max(int a, int b)
{
	return ((a > b) ? a : b);
}

/**
 * t_height - whatever
 *
 * @tree: ..
 *
 * Return: ...
 */
int t_height(const binary_tree_t *tree)
{
	int x, y;

	if (tree == NULL)
		return (0);

	x = tree->left ? t_height(tree->left) + 1 : 0;
	y = tree->right ? t_height(tree->right) + 1 : 0;

	return (max(x, y));
}

/**
 * t_size - whatever
 *
 * @tree: ..
 *
 * Return: ...
 */
int t_size(const binary_tree_t *tree)
{
	int x, y;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	x = tree->left ? t_size(tree->left) : 0;
	y = tree->right ? t_size(tree->right) : 0;

	return (x + y + 1);
}

/**
 * power - whatever
 *
 * @base: ..
 * @exponent: ...
 *
 * Return: ...
 */
int power(int base, int exponent)
{
	int result = 1;

	for (int i = 0; i < exponent; i++)
	{
		result *= base;
	}

	return (result);
}

/**
 * binary_tree_is_perfect - whatever
 *
 * @tree: ..
 *
 * Return: ...
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);
	if (t_size(tree) + 1 == (power(2, t_height(tree) + 1)))
	{
		return (1);
	}
	return (0);
}
