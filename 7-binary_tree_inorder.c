#include "binary_trees.h"

/**
 * binary_tree_inorder - Traverses a binary tree using in-order traversal.
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A pointer to a function to call for each node's value.
 *
 * Description: This function performs an in-order traversal of a binary tree,
 *              starting from the given root node. It applies the specified
 *              function to the value of each visited node after recursively
 *              traversing its left subtree and before traversing its right
 *              subtree. If the tree or the function pointer is NULL, the
 *              function has no effect.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
