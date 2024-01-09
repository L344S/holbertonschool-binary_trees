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
