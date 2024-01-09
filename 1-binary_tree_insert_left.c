#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node.
 * @parent: Pointer to the parent node where the new node will be inserted.
 * @value: The integer value to store in the new node.
 *
 * Description: This function inserts a new node with the specified value
 *              as the left child of the given parent node in a binary tree.
 *              It performs memory allocation for the new node, sets its parent
 *              and initializes its child pointers to NULL.
 *              If the parent already has a left child, the new node takes its
 *              place,the old left child becomes the left child of the new node
 *
 * Return: A pointer to the newly created node, or NULL on failure.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL; /* Create a new node */

	/* if the parent is NULL */
	if (parent == NULL)
		return (NULL); /* return NULL */

	/* allocate memory for the new node */
	new_node = malloc(sizeof(binary_tree_t));

	/* check if the allocation fails */
	if (new_node == NULL)
		return (NULL); /* return NULL */

	/* initialize the new node and set its values */
	new_node->n = value; /* add the int value in parameter to the new node */
	new_node->parent = parent; /* The parent of the new node is the parent */
	new_node->left = NULL; /* the left child is NULL */
	new_node->right = NULL; /* the right child is NULL */

	/* if the parent already has a left child */
	if (parent->left != NULL)
	{
		/* make the new node the left child of the parent */
		new_node->left = parent->left;
		/* make the parent the parent of the left child */
		parent->left->parent = new_node;
	}

	/* make the new node the left child of the parent */
	parent->left = new_node;

	/* return the new node */
	return (new_node);
}
