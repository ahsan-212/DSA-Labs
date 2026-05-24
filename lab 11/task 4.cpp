#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;

    Node(int value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }
};

Node* insert(Node* root, int value)
{
    if (root == NULL)
        return new Node(value);

    if (value < root->data)
        root->left = insert(root->left, value);
    else
        root->right = insert(root->right, value);

    return root;
}

// Find minimum recursively
int findMin(Node* root)
{
    if (root->left == NULL)
        return root->data;

    return findMin(root->left);
}

// Find maximum recursively
int findMax(Node* root)
{
    if (root->right == NULL)
        return root->data;

    return findMax(root->right);
}

int main()
{
    Node* root = NULL;

    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 70);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 60);
    root = insert(root, 80);

    cout << "Minimum Value = " << findMin(root) << endl;
    cout << "Maximum Value = " << findMax(root) << endl;

    return 0;
}