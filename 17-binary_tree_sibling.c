#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node to find the sibling
 * Return: Null if node is NULL or the parent is NULL or node has no sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *tmp_parent;

	if (node == NULL)
	{
		return (NULL);
	}
	tmp_parent = node->parent;
	if (tmp_parent == NULL)
	{
		return (NULL);
	}
	if (tmp_parent->left == node)
	{
		return (tmp_parent->right);
	}
	if (tmp_parent->right == node)
	{
		return (tmp_parent->left);
	}
	return (NULL);
}
