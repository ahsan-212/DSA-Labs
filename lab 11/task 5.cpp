/*
Task 5: BST Deletion

This program removes a node from a Binary Search Tree.

The user enters a value to delete.

The deletion function handles:
1. Node with no child
2. Node with one child
3. Node with two children

After deletion, inorder traversal is displayed
to verify the updated BST.
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
//// Find smallest node
//Node* findMin(Node* root)
//{
//    while (root->left != NULL)
//        root = root->left;
//
//    return root;
//}
//
//// Delete node recursively
//Node* deleteNode(Node* root, int key)
//{
//    if (root == NULL)
//        return NULL;
//
//    if (key < root->data)
//        root->left = deleteNode(root->left, key);
//
//    else if (key > root->data)
//        root->right = deleteNode(root->right, key);
//
//    else
//    {
//        // Node has no child
//        if (root->left == NULL && root->right == NULL)
//        {
//            delete root;
//            return NULL;
//        }
//
//        // Node has one child
//        if (root->left == NULL)
//        {
//            Node* temp = root->right;
//            delete root;
//            return temp;
//        }
//
//        if (root->right == NULL)
//        {
//            Node* temp = root->left;
//            delete root;
//            return temp;
//        }
//
//        // Node has two children
//        Node* temp = findMin(root->right);
//
//        root->data = temp->data;
//
//        root->right = deleteNode(root->right, temp->data);
//    }
//
//    return root;
//}
//
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
//    int value;
//
//    cout << "Enter value to delete: ";
//    cin >> value;
//
//    root = deleteNode(root, value);
//
//    cout << "\nBST After Deletion:\n";
//    inorder(root);
//
//    return 0;
//}
