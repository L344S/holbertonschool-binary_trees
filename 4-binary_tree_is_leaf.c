#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf in a binary tree.
 * @node: A pointer to the node to check.
 *
 * Description: This function determines whether the given node is a leaf
 *              in a binary tree, it has no left or right child.
 *              If the node is NULL, the function returns 0.
 *
 * Return: 1 if the node is a leaf, 0 otherwise.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	/* Return 0 if node is NULL */
	if (node == NULL)
		return (0);

	/* Check if the node has no left and right children */
	if (node->left == NULL && node->right == NULL)
		return (1);

	return (0);
}
