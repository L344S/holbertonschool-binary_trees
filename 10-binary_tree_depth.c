#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 * @tree: A pointer to the node to measure the depth.
 *
 * Return: The depth of the node, or 0 if the node is NULL.
 *
 * Description: Measures the depth of a node in a binary tree, which is
 *              the distance from the node to the tree's root. The depth is
 *              determined by traversing the parent pointers from the given
 *              node towards the root, incrementing the depth at each step
 *              If the node is NULL, the depth is 0, indicating it has no depth
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
