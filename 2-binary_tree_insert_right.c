#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 * @parent: Pointer to the parent node where the new node will be inserted.
 * @value: The integer value to store in the new node.
 *
 * Description: This function inserts a new node with the specified value
 *              as the right child of the given parent node in a binary tree.
 *              It performs memory allocation for the new node, sets its parent
 *              and initializes its child pointers to NULL.
 *              If the parent already has a right child, the new node takes its
 *              place,the old right child becomes the right of the new node.
 *
 * Return: A pointer to the newly created node, or NULL on failure.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	/* Return NULL if the parent is NULL or on failure to allocate memory */
	if (!new_node || parent == NULL)
	{
		return (NULL);
	}

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	if (parent->right != NULL)
	{
		/* If parent already has a right-child, the new node takes its place */
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}

	/* Set the new node as the right-child of the parent */
	parent->right = new_node;

	return (new_node);
}
