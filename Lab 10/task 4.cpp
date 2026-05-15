//#include <iostream>
//using namespace std;
//
//class Node
//{
//public:
//    int data;
//    Node* next;
//};
//
//class linklist {
//    Node* head;
//    public:
//        linklist() { head = NULL; }
//
//        void createNode(int value) {
//
//            Node* temp = new Node;
//            temp->data = value;
//            Node* curr=head;
//            if (head == NULL) {
//                head = temp;
//                temp->next = NULL;
//            }
//            else {
//                while (curr->next != NULL) {
//                    curr = curr->next;
//                }
//                curr->next = temp;
//                temp->next = NULL;
//            }
//        }
//
//        Node* gethead() {
//            return head;
//        }
//};
//
//void printList(Node* head)
//{
//
//    if (head == NULL) {
//        cout << "NULL";
//        return;
//    }
//    cout << head->data << " -> ";
//    
//    printList(head->next);
//
//}
//
//int main()
//{
//    linklist l1;
//    l1.createNode(10);
//    l1.createNode(20);
//    l1.createNode(30);
//    l1.createNode(40);
//
//    cout << "Linked List Elements: ";
//    printList(l1.gethead());
//
//    return 0;
//}