#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
    Node* prev;

    Node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

class DoublyLinkedList
{
private:
    Node* head;

public:
    DoublyLinkedList()
    {
        head = NULL;
    }

    void insertBeginning(int val)
    {
        Node* newNode = new Node(val);

        newNode->next = head;

        if (head != NULL)
            head->prev = newNode;

        head = newNode;
    }

    Node* insertEndRec(Node* temp, int val)
    {
        if (temp == NULL)
            return new Node(val);

        if (temp->next == NULL)
        {
            Node* newNode = new Node(val);
            temp->next = newNode;
            newNode->prev = temp;
            return temp;
        }

        temp->next = insertEndRec(temp->next, val);
        return temp;
    }

    void insertEnd(int val)
    {
        head = insertEndRec(head, val);
    }

    void printForward(Node* temp)
    {
        if (temp == NULL)
        {
            cout << "NULL";
            cout << endl;
            return;
        }

        cout << temp->data << " -> ";
        printForward(temp->next);
    }

    void printReverse(Node* temp)
    {
        if (temp == NULL)
            return;

        printReverse(temp->next);
        cout << temp->data << " ";
    }

    void displayForward()
    {
        printForward(head);
    }

    void displayReverse()
    {
        printReverse(head);
        cout << endl;
    }

    int search(Node* temp, int val, int pos)
    {
        if (temp == NULL)
            return -1;

        if (temp->data == val)
            return pos;

        return search(temp->next, val, pos + 1);
    }

    int searchValue(int val)
    {
        return search(head, val, 1);
    }

    Node* deleteValue(Node* temp, int val)
    {
        if (temp == NULL)
            return NULL;

        if (temp->data == val)
        {
            Node* nextNode = temp->next;

            if (nextNode != NULL)
                nextNode->prev = temp->prev;

            delete temp;
            return nextNode;
        }

        temp->next = deleteValue(temp->next, val);

        return temp;
    }

    void removeValue(int val)
    {
        head = deleteValue(head, val);
    }

    Node* getLast(Node* temp)
    {
        if (temp == NULL || temp->next == NULL)
            return temp;

        return getLast(temp->next);
    }

    bool palindrome(Node* left, Node* right)
    {
        if (left == NULL || right == NULL)
            return true;

        if (left == right || right->next == left)
            return true;

        if (left->data != right->data)
            return false;

        return palindrome(left->next, right->prev);
    }

    bool isPalindrome()
    {
        Node* last = getLast(head);
        return palindrome(head, last);
    }
};

int main()
{
    DoublyLinkedList list;

    list.insertBeginning(1);
    list.insertEnd(2);
    list.insertEnd(3);
    list.insertEnd(2);
    list.insertEnd(1);

    cout << "Forward: ";
    list.displayForward();

    cout << "Reverse: ";
    list.displayReverse();

    if (list.isPalindrome())
        cout << "List is Palindrome" << endl;
    else
        cout << "List is Not Palindrome" << endl;

    cout << "Position of 3: " << list.searchValue(3) << endl;

    list.removeValue(3);

    cout << "After deleting 3: ";
    list.displayForward();

    return 0;
}