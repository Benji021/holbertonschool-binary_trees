#include "binary_trees.h"

/**
 * binary_tree_is_perfect - that checks if a binary tree is perfect
 *
 *@tree : is a pointer to the root node of the tree to check
 *
 *Return: If tree is NULL, your function must return 0
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

// If the node is a leaf node, it's full
	if (tree->left == NULL && tree->right == NULL)
		return (1);

// If both left and right subtrees are not NULL, and both are full
	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right));

// If one of the subtrees is NULL and the other is not
	return (0);
}
