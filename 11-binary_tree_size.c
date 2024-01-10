#include "binary_trees.h"

/**
* binary_tree_size - entry point
* @tree: pointer to the root node of the tree to measure the size
*
* --------------- Description ---------------
* This function measures the size of a binary tree.
* A binary tree is a tree who have at most 2 children
* (left child and right child).
* The size of a binary tree is the total number of nodes in the tree.
*
* Return: 0 if tree is NULL or the size of the binary tree
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_left = 0;  /* store the number of nodes in the left subtree */
	size_t size_right = 0; /* store the number of nodes in the right subtree */

	/* if the tree is NULL */
	if (tree == NULL)
		return (0); /* return 0 (because the tree is empty) */

	/* if the left subtree is not NULL */
	if (tree->left != NULL)
		/* add the number of nodes in the left subtree to the total number */
		size_left = binary_tree_size(tree->left);

	/* if the right subtree is not NULL */
	if (tree->right != NULL)
		/* add the number of nodes in the right subtree to the total number */
		size_right = binary_tree_size(tree->right);

	/* return the total number of nodes */
	/* + 1 to  count the current node*/
	return (size_left + size_right + 1);
}