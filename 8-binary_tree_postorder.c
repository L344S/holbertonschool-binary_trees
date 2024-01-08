#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverses a binary tree using post-order traversal.
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A pointer to a function to call for each node's value.
 *
 * Description: This function performs a post-order traversal of a binary tree,
 *              starting from the given root node. It applies the specified
 *              function to the value of each visited node after recursively
 *              traversing its left and right subtrees. If the tree or the
 *              function pointer is NULL, the function has no effect.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
