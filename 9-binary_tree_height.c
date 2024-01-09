#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: The height of the tree, or 0 if the tree is NULL.
 *
 * Description: This function calculates the height of a binary tree
 *              by recursively traversing its left and right subtrees.
 *              The height is the length of the longest path from
 *              the root to a leaf node. If the tree is NULL, the height is 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t height = 0;
	const binary_tree_t *current = tree;

	while (current->left || current->right)
	{
		size_t left_height = 0, right_height = 0;

		if (current->left)
			left_height = 1 + binary_tree_height(current->left);

		if (current->right)
			right_height = 1 + binary_tree_height(current->right);

		if (left_height > right_height)
			height = left_height;
		else
			height = right_height;

		break;
	}
	return (height);
}
