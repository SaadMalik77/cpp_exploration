#include <iostream>

using namespace std;

struct Node {
  int data;
  Node* next;
};

Node* head = NULL;

void insertAtHead(int data) {
  Node* newNode = new Node();
  newNode->data = data;
  newNode->next = head;
  head = newNode;
}

void printLinkedList() {
  Node* current = head;
  while (current != NULL) {
    cout << current->data << " ";
    current = current->next;
  }
  cout << endl;
}

int main() {
  // Insert 5 number values into the linked list.
  insertAtHead(5);
  insertAtHead(4);
  insertAtHead(3);
  insertAtHead(2);
  insertAtHead(1);

  // Print out the values in the linked list.
  printLinkedList();

  return 0;
}
