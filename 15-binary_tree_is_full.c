#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_is_full -  checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: If tree is NULL, return 0 or return 1 if true
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_child;
	int right_child;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	if (tree->left != NULL && tree->right != NULL)
	{
		left_child = binary_tree_is_full(tree->left);
		right_child = binary_tree_is_full(tree->right);
		return (left_child && right_child);
	}
	return (0);
}
