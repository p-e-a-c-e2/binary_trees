#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a node in binary tree
 * @tree: ptr to the node to measure the depth
 * Return: if tree is NULL 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);
	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}
