#include "Tree.h"

void print_tree_test_1(void)
{
    TreeNode *root = new TreeNode(0);

    root->right = new TreeNode(1);
    root->left = new TreeNode(2);

    root->right->right = new TreeNode(3);
    root->right->left = new TreeNode(4);

    root->left->right = new TreeNode(5);
    root->left->left = new TreeNode(6);

    root->right->right->left = new TreeNode(7);

    root->right->right->left->right = new TreeNode(8);
    root->right->right->left->left = new TreeNode(9);

    print_tree(root);
    cout << endl << endl;
	
    /* Expected output:
       0
       |----1
       |    |----3
       |    |    |____7
       |    |         |----8
       |    |         |
       |    |         |____9
       |    |
       |    |____4
       |
       |____2
            |----5
            |
            |____6


    */
}

void print_tree_test_2(void)
{
    TreeNode *root = new TreeNode(1);
    
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    root->left->left->left = new TreeNode(8);
    root->left->left->right = new TreeNode(9);
    root->left->right->left = new TreeNode(10);
    root->left->right->right = new TreeNode(11);
    root->right->left->left = new TreeNode(12);
    root->right->left->right = new TreeNode(13);
    root->right->right->left = new TreeNode(14);
    root->right->right->right = new TreeNode(15);

    print_tree(root);
    cout << endl << endl;
	
    /* Expected output:
       1
       |----3
       |    |----7
       |    |    |----15
       |    |    |
       |    |    |____14
       |    |
       |    |____6
       |         |----13
       |         |
       |         |____12
       |
       |____2
            |----5
            |    |----11
            |    |
            |    |____10
            |
            |____4
                 |----9
                 |
                 |____8


    */
}

int main(void)
{
    print_tree_test_1();
    print_tree_test_2();

    return 0;
}
