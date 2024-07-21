#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: tree is Null retrun 0 or size if not empty
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_length = 0;
	size_t right_length = 0;

	if (tree == NULL)
	{
		return (0);
	}
	left_length = binary_tree_size(tree->left);
	right_length = binary_tree_size(tree->right);
	return (left_length + 1 + right_length);
}
