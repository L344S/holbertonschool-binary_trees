#include "binary_trees.h"

/**
* binary_tree_sibling - entry point
* @node: pointer to the node to find the sibling
*
* --------------- Description ---------------
* This function finds the sibling of a node.
* The sibling is the node that has the same parent.
*
* Return: NULL if node is NULL or the sibling of the node
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	/* if the node is NULL */
	if (node == NULL || node->parent == NULL)
		return (NULL); /* return NULL */

	/* if the node has a parent */
	/* if the node is the left child of the parent */
	if (node->parent->left == node)
		return (node->parent->right); /* return the right child of the parent */

    /* if the node is the right child of the parent */
	return (node->parent->left); /* return the left child of the parent */
}
