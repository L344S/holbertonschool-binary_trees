#include "binary_trees.h"

/**
* binary_tree_leaves - entry point
* @tree: pointer to the root node of the tree
*
* --------------- Description ---------------
* This function counts the leaves in a binary tree.
* A leaf is a node with no children.
* A binary tree is a tree who have at most 2 children
* (left child and right child).
*
* Return: 0 if tree is NULL or the number of leaves in the binary tree
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves_left = 0; /* Store the number of leaves in the left subtree */
	size_t leaves_right = 0; /* Store the number of leaves in the right subtree */

	/* if the tree is NULL */
	if (tree == NULL)
		return (0); /* return 0 (because the tree is empty) */

	/* if the left subtree is not NULL */
	if (tree->left != NULL)
	/* add the number of leaves in the left subtree to the total number */
		leaves_left = binary_tree_leaves(tree->left);

	/* if the right subtree is not NULL */
	if (tree->right != NULL)
	/* add the number of leaves in the right subtree to the total number */
		leaves_right = binary_tree_leaves(tree->right);

	/* if the current node is a leaf means that it has no children */
	if (tree->left == NULL && tree->right == NULL)
		return (1); /* return 1 (because the current node is a leaf) */

	/* return the total number of leaves */
	return (leaves_left + leaves_right);
}
