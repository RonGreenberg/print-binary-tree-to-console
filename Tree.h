#ifndef __TREE_H__
#define __TREE_H__

#include <iostream> // for the print_tree function and its utility function (which is defined in the matching cpp file)
#include <string> // in order to use C++ string data type in print_nodes (utility function for print_tree)
using namespace std;

// class for a single node in a binary tree
class TreeNode
{
public: // dodging encapsulation...
    int key;
    TreeNode *left;
    TreeNode *right;

    // constructor
    TreeNode(int _key = 0) : key(_key), left(NULL), right(NULL) {}
};

void print_tree(TreeNode *root); // function to horizontally print a binary tree

#endif /* __TREE_H__ */
