#include "binary_trees.h"

/**
 * binary_tree_preorder - Traverses a binary tree using pre-order traversal.
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A pointer to a function to call for each node's value.
 *
 * Description: This function performs a pre-order traversal of a binary tree,
 *              starting from the given root node. It applies the specified
 *              function to the value of each visited node before recursively
 *              traversing its left and right subtrees. If the tree or the
 *              function pointer is NULL, the function has no effect.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	/* Ensures that the tree exists and a valid function pointer is provided */
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
