# ☘ Binary Trees

## Table of Contents
- [Description](#description)
- [Files and Functions](#files-and-functions)
- [Authors](#authors)

## Description

A binary tree is a tree data structure in which each node has at most two children, referred to as the left child and the right child. Each node contains an element (in this case, an integer), and pointers to its left and right children, and its parent.

### ☘ How it works

A binary tree starts with a root node, and each node in the tree can have a left child, a right child, or both. The tree is traversed and manipulated using various algorithms, which can be broadly divided into depth-first (pre-order, in-order, post-order) etc...

### ☘ Example

```
        1  <- 1 = root
       / \
      2   3 <- 2 & 3 = children of 1
     / \ / \
    4  5 6  7 <- 6 & 7 are the children of 3
```
In this example, 1 is the root node of the tree. 2 and 3 are the children of 1. Similarly, 4 and 5 are the children of 2, and 6 and 7 are the children of 3. Nodes 4, 5, 6, and 7 are the leaves of the tree (nodes without children).

## Files and Functions

| File Name | Function | Description |
| --- | --- | --- |
| 0-binary_tree_node.c | `binary_tree_node` | Creates a binary tree node. |
| 1-binary_tree_insert_left.c | `binary_tree_insert_left` | Inserts a node as the left-child of another node. |
| 2-binary_tree_insert_right.c | `binary_tree_insert_right` | Inserts a node as the right-child of another node. |
| 3-binary_tree_delete.c | `binary_tree_delete` | Deletes an entire binary tree. |
| 4-binary_tree_is_leaf.c | `binary_tree_is_leaf` | Checks if a node is a leaf. |
| 5-binary_tree_is_root.c | `binary_tree_is_root` | Checks if a given node is a root. |
| 6-binary_tree_preorder.c | `binary_tree_preorder` | Goes through a binary tree using pre-order traversal. |
| 7-binary_tree_inorder.c | `binary_tree_inorder` | Goes through a binary tree using in-order traversal. |
| 8-binary_tree_postorder.c | `binary_tree_postorder` | Goes through a binary tree using post-order traversal. |
| 9-binary_tree_height.c | `binary_tree_height` | Measures the height of a binary tree. |
| 10-binary_tree_depth.c | `binary_tree_depth` | Measures the depth of a node in a binary tree. |
| 11-binary_tree_size.c | `binary_tree_size` | Measures the size of a binary tree. |
| 12-binary_tree_leaves.c | `binary_tree_leaves` | Counts the leaves in a binary tree. |
| 13-binary_tree_nodes.c | `binary_tree_nodes` | Counts the nodes with at least 1 child in a binary tree. |
| 14-binary_tree_balance.c | `binary_tree_balance` | Measures the balance factor of a binary tree. |
| 15-binary_tree_is_full.c | `binary_tree_is_full` | Checks if a binary tree is full. |
| 16-binary_tree_is_perfect.c | `binary_tree_is_perfect` | Checks if a binary tree is perfect. |
| 17-binary_tree_sibling.c | `binary_tree_sibling` | Finds the sibling of a node. |
| 18-binary_tree_uncle.c | `binary_tree_uncle` | Finds the uncle of a node. |

## Authors
- [@Yazgahar](https://www.github.com/Yazgahar)
- [@L344S](https://www.github.com/L344S)