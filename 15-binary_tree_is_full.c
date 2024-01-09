#include "binary_trees.h"

/**
* binary_tree_is_full - entry point
* @tree: pointer to the root node of the tree
*
* --------------- Description ---------------
* This function checks if a binary tree is full.
* A tree is full if every node has either 0 or 2 children.
*
* Return: 0 if tree is NULL or 1 if the binary tree is full
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	size_t full_left = 0; /* Store the result of the left subtree fullness */
	size_t full_right = 0; /* Store the result of the right subtree fullness */

	/* if the tree is NULL */
	if (tree == NULL)
		return (0); /* return 1 (because an empty tree is considered full) */

	/* if the current node is a leaf (has no children) */
	if (tree->left == NULL && tree->right == NULL)
		return (1); /* return 1 (because the tree is full) */

	/* if the current node has 2 children */
	if (tree->left != NULL && tree->right != NULL)
	{
    /* check if the left subtree is full */
		full_left = binary_tree_is_full(tree->left);
    /* check if the right subtree is full */
		full_right = binary_tree_is_full(tree->right);

    /* if the left and right subtrees are both full */
		if (full_left != 0 && full_right != 0)
			return (1); /* return 1 (because the tree is full) */
	}

	/* if the current node has 1 child */
	return (0); /* return 0 (because the tree is not full) */
}
