#include "binary_trees.h"

/**
 * binary_tree_is_root - that checks if a given node is a root
 *
 * @node : is a pointer to the node to check
 *
 * Return: 0 if node is NULL or 1 if node is a root, otherwise 0
 *
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}