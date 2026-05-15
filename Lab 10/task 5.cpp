//#include <iostream>
//using namespace std;
//
//struct Node
//{
//    int data;
//    Node* next;
//};
//
//class SinglyLinkedList
//{
//private:
//    Node* head;
//
//public:
//    SinglyLinkedList()
//    {
//        head = NULL;
//    }
//    
//    void print(Node* temp)
//    {
//        if (temp == NULL)
//        {
//            cout << "NULL";
//            return;
//        }
//
//        cout << temp->data << " -> ";
//        print(temp->next);
//    }
//
//    void display()
//    {
//        print(head);
//        cout << endl;
//    }
//
//    void insertAtBeginning(int val)
//    {
//        Node* newNode = new Node;
//        newNode->data = val;
//        newNode->next = head;
//        head = newNode;
//    }
//    
//    Node* insertAtEnd(Node* temp, int val)
//    {
//        if (temp == NULL)
//            return new Node(val);
//
//        temp->next = insertAtEnd(temp->next, val);
//        return temp;
//    }
//
//    void insertEnd(int val)
//    {
//        head = insertAtEnd(head, val);
//    }
//
//    Node* insertAtPosition(Node* temp, int val, int pos)
//    {
//        if (pos == 1)
//        {
//            Node* newNode = new Node(val);
//            newNode->next = temp;
//            return newNode;
//        }
//
//        if (temp == NULL)
//            return NULL;
//
//        temp->next = insertAtPosition(temp->next, val, pos - 1);
//        return temp;
//    }
//
//    void insertPos(int val, int pos)
//    {
//        head = insertAtPosition(head, val, pos);
//    }
//
//    Node* deleteByValue(Node* temp, int val)
//    {
//        if (temp == NULL)
//            return NULL;
//
//        if (temp->data == val)
//        {
//            Node* del = temp->next;
//            delete temp;
//            return del;
//        }
//
//        temp->next = deleteByValue(temp->next, val);
//        return temp;
//    }
//
//    void deleteValue(int val)
//    {
//        head = deleteByValue(head, val);
//    }
//
//    Node* deleteAtPosition(Node* temp, int pos)
//    {
//        if (temp == NULL)
//            return NULL;
//
//        if (pos == 1)
//        {
//            Node* del = temp->next;
//            delete temp;
//            return del;
//        }
//
//        temp->next = deleteAtPosition(temp->next, pos - 1);
//        return temp;
//    }
//
//    void deletePos(int pos)
//    {
//        head = deleteAtPosition(head, pos);
//    }
//
//    int search(Node* temp, int val, int pos)
//    {
//        if (temp == NULL)
//            return -1;
//
//        if (temp->data == val)
//            return pos;
//
//        return search(temp->next, val, pos + 1);
//    }
//
//    int searchValue(int val)
//    {
//        return search(head, val, 1);
//    }
//};
//
//int main()
//{
//    SinglyLinkedList list;
//
//    list.insertAtBeginning(10);
//    list.insertAtBeginning(5);
//
//    cout << "After inserting at beginning: ";
//    list.display();
//
//    list.insertEnd(20);
//    list.insertEnd(30);
//
//    cout << "After inserting at end: ";
//    list.display();
//
//    list.insertPos(15, 3);
//
//    cout << "After inserting at position 3: ";
//    list.display();
//
//    list.deleteValue(20);
//
//    cout << "After deleting value 20: ";
//    list.display();
//
//    list.deletePos(2);
//
//    cout << "After deleting position 2: ";
//    list.display();
//
//    int pos = list.searchValue(30);
//
//    if (pos != -1)
//        cout << "30 found at position: " << pos << endl;
//    else
//        cout << "30 not found" << endl;
//
//    return 0;
//}