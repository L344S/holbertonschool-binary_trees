#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes a binary tree and frees its memory.
 * @tree: A pointer to the root node of the tree to delete.
 *
 * Description: This function recursively deletes a binary tree starting from
 *              the given root node. It traverses the tree in post-order,
 *              deleting each node and freeing its memory, including the root.
 *
 * Note: If the tree is NULL, the function has no effect.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
