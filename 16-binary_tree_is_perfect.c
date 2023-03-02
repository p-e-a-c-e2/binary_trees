#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of BT
 * @tree: ptr to the root node of the tree to measure height
 * Return: Always 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

		l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		l = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((l > r) ? l : r);
	}
	return (0);
}
/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: ptr to the root node to the tree to measure the size
 * Return: Always 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left, right, size;

	if (tree == NULL)
		return (0);
	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);
	size = (left + right) + 1;
	return (size);
}
/**
 * binary_tree_is_perfect - checks if binary tree is perfect
 * @tree: ptr to the root node of the tree to check
 * Return: Always 0 if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, size, perfect_size;

	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree);
	size = binary_tree_size(tree);
	perfect_size = (1 << height) - 1;

	return (size == perfect_size);
}
