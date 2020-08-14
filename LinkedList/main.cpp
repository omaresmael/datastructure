#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;
};

bool has_cycle(Node* head) {
    Node* currentNode;
    currentNode = head;
    while(head != NULL){
        while(currentNode != NULL){
            if(head == currentNode->next)
                return true;
            currentNode = currentNode->next;
        }
        head = head->next;
        currentNode = head->next;
    }
    return false;


}

Node* removeDuplicates(Node* head) { //remove duplicated data from a sorted linked list
   Node* headNode = head;
    while(head->next != NULL){
        if(head->data == head->next->data){
            if(head->next->next != NULL)
                head->next = head->next->next;
            else
                head->next = NULL;

        }
        else{
            head = head->next;
        }
    }
    return headNode;
}


int getNode(Node* head, int positionFromTail) { // find node based on backward position

    if (positionFromTail == 0)
        return head->data;
    head = head->next;
    return getNode(head,--positionFromTail);


}

void push(Node** head_ref, int new_data) //insert a node at the head of linked list
{
    /* 1. allocate node */
    Node* new_node = new Node();

    /* 2. put in the data */
    new_node->data = new_data;

    /* 3. Make next of new node as head */
    new_node->next = (*head_ref);

    /* 4. move the head to point to the new node */
    (*head_ref) = new_node;
}

Node* mergeLists(Node* head1, Node* head2) { //merge two sorted lists

    Node *headNode;

    if (head2->data < head1->data) {

        headNode = head2;
        head2 = head2->next;
    } else {
        headNode = head1;
        head1 = head1->next;
    }

   Node *prev = headNode;
    while (head1 != NULL && head2 != NULL) {
        if (head1->data <= head2->data) {

            prev->next = head1;
            head1 = head1->next;
            prev = prev->next;

        } else {
            prev->next = head2;
            head2 = head2->next;
            prev = prev->next;
        }
    }
    if (head1 == NULL) {
        prev->next = head2;
    } else if (head2 == NULL) {
        prev->next = head1;
    }
    return headNode;
}

void printLinkedList(Node* head) { // print the linked list
    while (head != NULL) {
        cout << head->data << endl;
        head = head->next;
    }

}

Node* deleteNode(Node* head, int position) { // delete a node of specific location on the linked list


    Node* currentNode = head;
    if(position == 0){
        head = head->next;
        return head;
    }

    for(int i=0; i< position-1; i++){
        currentNode = currentNode->next;
    }
    if(currentNode->next->next != NULL)
        currentNode->next= currentNode->next->next;
    else
        currentNode->next= NULL;
    return head;

}
int main() {
    Node* l1 = new Node();
    Node* head1 = l1;
    Node* l2 = new Node();
    Node* head2 = l2;

    push(&head1,10);
    push(&head1,2);
    push(&head1,1);
    push(&head1,6);
    push(&head1,4);
    push(&head1,3);
    push(&head1,15);
    push(&head1,67);
    push(&head1,86);


    deleteNode(head1,6);


    push(&head2,6);
    push(&head2,5);
    push(&head2,4);
    deleteNode(head2,3);



    //printLinkedList(mergeLists(head1,head2));
    cout << getNode(head1,0);










    return 0;
}
