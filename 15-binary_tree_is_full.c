#include "binary_trees.h"

int is_full_recursive(const binary_tree_t *tree);  // Function declaration

/**
 * binary_tree_is_full - that checks if a binary tree is full
 *
 * @tree : is a pointer to the root node of the tree to check
 *
 * Return: 0 your function must or if tree is NULL
 *		Otherwise - 1
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_full_recursive(tree));
}

/**
 * is_full_recursive - Recursively checks if a binary tree is full.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is full, 0 otherwise.
 */

int is_full_recursive(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (1);

// If the node has only one child, it's not a full tree
	
	if ((tree->left == NULL && tree->right != NULL) ||
	(tree->left != NULL && tree->right == NULL))
		return (0);

// Recursively check the left and right subtrees
	
	return (is_full_recursive(tree->left) && is_full_recursive(tree->right));
}
