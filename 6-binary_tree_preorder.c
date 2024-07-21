#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_preorder - goes through a binary tree using pre-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((tree == NULL) || (func == NULL))
	/*check if tree is empty or the the function*/
	{
		return;
	}
	func(tree->n); /*perfom operation on the data*/
	binary_tree_preorder(tree->left, func);
	/*Traverse on the left then right*/
	binary_tree_preorder(tree->right, func);
}
