#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node is a root in a binary tree.
 * @node: A pointer to the node to check.
 *
 * Description: This function determines whether the given node is a root
 *              in a binary tree by checking if it has no parent.
 *              If the node is NULL, the function returns 0.
 *
 * Return: 1 if the node is a root, 0 otherwise.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	/* Return 0 if node is NULL */
	if (node == NULL)
		return (0);

	/* Check if the node has no parent (it is a root) */
	if (node->parent == NULL)
		return (1);

	return (0);
}
