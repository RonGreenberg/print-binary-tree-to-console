#include "Tree.h"

// Utility function to separately print nodes other than the root (recursively).
// PARAMETERS:
// 1) padding string, which is the spacing we need to print before each node.
// 2) edge string, which is the edge that connects the current node with its right child (|----) or left child (|____).
// 3) a TreeNode pointer, which represents the current node to print.
// 4) a boolean value indicating whether the current node has a left sibling (i.e. it is the right child of its parent).
void print_nodes(const string &padding, const string &edge, TreeNode *node, bool has_left_sibling)
{
    if (node != NULL) { // recursion stopping condition
        cout << endl << padding << edge << node->key; // printing the current node along with the needed padding and connecting edge

        // If the current node is a leaf, we wish to add some distance from it to another node that is in an upper
        // level in the tree, and is possibly yet to be printed..
        if ((node->left == NULL) && (node->right == NULL)) {
            cout << endl << padding; // adding a new line along with the padding
            if (has_left_sibling) { // also, if the leaf has a left sibling, we wish to extend the edge between them
                cout << "|";
            }
        } else { 
            // if the current node is not a leaf, we add some spacing to the current padding, based on whether
            // the current node has a left sibling or not
            string new_padding = padding + (has_left_sibling ? "|    " : "     ");
            print_nodes(new_padding, "|----", node->right, node->left != NULL); // recurring with the right child and the new padding
            print_nodes(new_padding, "|____", node->left, false); // recurring with the left child and the new padding
        }
    }
} /* print_nodes */

// main function to HORIZONTALLY print a binary tree
void print_tree(TreeNode *root)
{
    // checking validity of root pointer
    if (root == NULL) {
        return;
    }

    // printing the key of the root, and moving on to print the rest of the nodes, using the utility function (initial padding is an empty string)
    cout << root->key;
    print_nodes("", "|----", root->right, root->left != NULL); // printing the nodes on the right (similar to the recursive call inside print_nodes)
    print_nodes("", "|____", root->left, false); // printing the nodes on the left (note that the left child cannot have a left sibling)
} /* print_tree */
