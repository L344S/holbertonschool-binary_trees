#include "binary_trees.h"

/**
* binary_tree_nodes - entry point
* @tree: pointer to the root node of the tree
*
* --------------- Description ---------------
* This function counts the nodes with at least 1 child in a binary tree.
* A binary tree is a tree who have at most 2 children
* (left child and right child).
*
* Return: 0 if tree is NULL or the number of nodes with at least 1 child
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes_left = 0;  /* Store the number of nodes in the left subtree */
	size_t nodes_right = 0; /* Store the number of nodes in the right subtree */

	/* if the tree is NULL */
	if (tree == NULL)
		return (0); /* return 0 (because the tree is empty) */

	/* if the left subtree is not NULL */
	if (tree->left != NULL)
		/* add the number of nodes in the left subtree to the total number */
		nodes_left = binary_tree_nodes(tree->left);

	/* if the right subtree is not NULL */
	if (tree->right != NULL)
		/* add the number of nodes in the right subtree to the total number */
		nodes_right = binary_tree_nodes(tree->right);

	/* if the current node is not a leaf means that it has at least 1 child */
	if (tree->left != NULL || tree->right != NULL)
    /* return the total number of nodes */
    /* + 1 to  count the current node */
		return (nodes_left + nodes_right + 1);

    /* Otherwise, the current node is a leaf means that it has no children*/
	return (nodes_left + nodes_right); /* return the total number of nodes */
}
