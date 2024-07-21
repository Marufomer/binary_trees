#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_height_calc - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: height of a tree or 0 if tree is Null
 */
size_t binary_tree_height_calc(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
	{
		return (0);
	}
	left_height = binary_tree_height_calc(tree->left);
	right_height = binary_tree_height_calc(tree->right);
	if (left_height > right_height)
	{
		return (left_height + 1);
	}
	else
	{
		return (right_height + 1);
	}
}
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: balance factor of the tree or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height_calc(tree->left) -
			binary_tree_height_calc(tree->right));
}
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
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: if tree is Null return 0 or tree if its perfect tree
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int bal;
	int full;

	if (tree == NULL)
	{
		return (0);
	}
	bal = binary_tree_balance(tree);
	full = binary_tree_is_full(tree);
	if (bal == 0 && full == 1)
	{
		return (1);
	}
	return (0);
}
