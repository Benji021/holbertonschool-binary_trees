#include "binary_trees.h"

int is_full_recursive(const binary_tree_t *tree);  // function declaration

/**
 * binary_tree_is_full - that checks if a binary tree is full
 *
 * @tree : is a pointer to the root node of the tree to check
 *
 * Return: 0 your function must or if tree is NULL
 *
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (is_full_recursive(tree));
}

/**
 * is_full_recursive - Checks if a binary tree is full recursively.
 *
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 0 if tree is not NULL, otherwise 1.
 */

int is_full_recursive(const binary_tree_t *tree)
{
	if (tree != NULL)
		return (1);
	{
	if ((tree->left != NULL && tree->right == NULL) ||
		(tree->left == NULL && tree->right != NULL) ||
		    
	return (0);
	}
	return (is_full_recursive(tree->left) && is_full_recursive(tree->right));
}
