#include "binary_trees.h"

/**
* binary_tree_is_perfect - entry point
* @tree: pointer to the root node of the tree
*
* --------------- Description ---------------
* This function checks if a binary tree is perfect.
* A binary tree is perfect if all leaves are same level.
*
* Return: 0 if tree is NULL or 1 if the binary tree is perfect
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height_left = 0;  /* Store the height of the left subtree */
	size_t height_right = 0; /* Store the height of the right subtree */
	size_t size_left = 0;    /* Store the size of the left subtree */
	size_t size_right = 0;   /* Store the size of the right subtree */

	/* if the tree is NULL */
	if (tree == NULL)
		return (0); /* return 0 (because the tree is empty) */

	/* if the current node is a leaf (has no children) */
	if (tree->left == NULL && tree->right == NULL)
		return (1); /* return 1 (because the tree is perfect) */

	/* if the current node has 2 children */
	if (tree->left != NULL && tree->right != NULL)
	{
		/* check if the left subtree is perfect */
		height_left = binary_tree_height(tree->left);
		size_left = binary_tree_size(tree->left);
		/* check if the right subtree is perfect */
		height_right = binary_tree_height(tree->right);
		size_right = binary_tree_size(tree->right);

		/* if the left and right subtrees are both perfect */
		if (height_left == height_right && size_left == size_right)
			return (1); /* return 1 (because the tree is perfect) */
	}

	/* if the current node has 1 child */
	return (0); /* return 0 (because the tree is not perfect) */
}

/* -------------------------Handle GCC ERROR----------------------- */
/* la commande pour gcc n'inclut pas le fichier 9-binary_tree_height.c */
/* elle n'inclut pas non plus le fichier 11-binary_tree_size.c */
/* alors on doit copier les functions binary_tree_height et binary_tree_size */

#include "binary_trees.h"

/**
* binary_tree_height - entry point
* @tree: pointer to the root node of the binary tree
*
* --------------- Description ---------------
* This function measures the height of a binary tree.
* A binary tree is a tree who have at most 2 children
* (left child and right child).
*
* Return: 0 if tree is NULL or height of the binary tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left_subtree; /* Store the height of the left subtree */
	size_t height_right_subtree; /* Store the height of the right subtree */

	/* If tree is NULL, return 0 */
	if (tree == NULL)
		return (0); /* Base case, for recursion (stop condition) */

    /* Calculate the height of the left subtree */
	if (tree->left != NULL) /* If the left subtree is not NULL */
		/* Add 1 to the height of the left subtree */
		/* and call the function recursively */
		height_left_subtree = 1 + binary_tree_height(tree->left);
	else
		/* If the left subtree does not exist, initialize it to 0 */
		height_left_subtree = 0;

    /* Calculate the height of the right subtree */
	if (tree->right != NULL) /* If the right subtree is not NULL */
		/* Add 1 to the height of the right subtree */
		/* and call the function recursively */
		height_right_subtree = 1 + binary_tree_height(tree->right);
	else
		/* If the right subtree does not exist, initialize it to 0 */
		height_right_subtree = 0;

    /* Return the height of the longest subtree */
	if (height_left_subtree > height_right_subtree)
		return (height_left_subtree);
	else
		return (height_right_subtree);
}

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
