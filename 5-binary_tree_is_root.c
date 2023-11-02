#include "binary_trees.h"

/**
 * binary_tree_is_root - check root
 * @node: A pointer to the node to check.
 * Return: If the node is a root - 1.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
