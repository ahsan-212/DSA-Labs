/*
Task 2: Binary Search Tree Insertion

This program implements a Binary Search Tree (BST).

Integer values are inserted according to BST rules:
- Smaller values go to the left side.
- Greater values go to the right side.

An inorder traversal is used to display values
in ascending order.
*/
//#include <iostream>
//using namespace std;
//
//struct Node
//{
//    int data;
//    Node* left;
//    Node* right;
//
//    Node(int value)
//    {
//        data = value;
//        left = NULL;
//        right = NULL;
//    }
//};
//
//// Insert value in BST
//Node* insert(Node* root, int value)
//{
//    if (root == NULL)
//        return new Node(value);
//
//    if (value < root->data)
//        root->left = insert(root->left, value);
//    else
//        root->right = insert(root->right, value);
//
//    return root;
//}
//
//// Print BST in ascending order
//void inorder(Node* root)
//{
//    if (root == NULL)
//        return;
//
//    inorder(root->left);
//    cout << root->data << " ";
//    inorder(root->right);
//}
//
//int main()
//{
//    Node* root = NULL;
//
//    root = insert(root, 50);
//    root = insert(root, 30);
//    root = insert(root, 70);
//    root = insert(root, 20);
//    root = insert(root, 40);
//    root = insert(root, 60);
//    root = insert(root, 80);
//
//    cout << "BST Elements in Ascending Order:\n";
//    inorder(root);
//
//    return 0;
//}
