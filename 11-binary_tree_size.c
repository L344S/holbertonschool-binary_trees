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
	/* Initialize the size to 0 to store the size of the binary tree */
	size_t size_tree = 0;

	/* if the tree is not NULL */
	if (tree != NULL)
	{
		size_tree = 1; /* initialize the size to 1 (because the root node is 1) */
	}

	/* if the current node has a left subtree */
	if (tree->left != NULL)
	{
    /* add the size of the left subtree to the total size */
		size_tree = size_tree + binary_tree_size(tree->left);
	}

	/* if the current node has a right subtree */
	if (tree->right != NULL)
	{
    /* add the size of the right subtree to the total size */
		size_tree = size_tree + binary_tree_size(tree->right);
	}

	return (size_tree); /* return the size of the binary tree */
}
