#include "binary_trees.h"

/**
* binary_tree_uncle - entry point
* @node: pointer to the node to find the uncle
*
* --------------- Description ---------------
* This function finds the uncle of a node.
* The uncle is the sibling of the parent.
*
* Return: NULL if node is NULL or the uncle of the node
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	/* check if the node is NULL, the parent is NULL or the grandparent is NULL */
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL); /* return NULL */

	/* if the node has a parent */
	/* check if the parent of the node is the left child of the gparent */
	if (node->parent->parent->left == node->parent)
    /* if yes means the uncle is the right child of the grandparent */
		return (node->parent->parent->right); /* return right child of the parent */

	/* otherwise means the uncle is the right child of the grandparent */
    /* return left child of the parent */
	return (node->parent->parent->left);
}
