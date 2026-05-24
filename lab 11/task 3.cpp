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
//// Search value recursively
//bool search(Node* root, int key)
//{
//    if (root == NULL)
//        return false;
//
//    if (root->data == key)
//        return true;
//
//    if (key < root->data)
//        return search(root->left, key);
//
//    return search(root->right, key);
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
//    cout << "Enter value to search: ";
//    cin >> value;
//
//    if (search(root, value))
//        cout << "Value Found";
//    else
//        cout << "Value Not Found";
//
//    return 0;
//}