//
// Created by Ritik on 18-11-2022.
//

#include "../LinkedList.h"
#include <iostream>
using namespace std;

Node::Node(int data) {
    this->data = data;
    this->next = nullptr;
}

LinkedList::LinkedList() {
    this->head = nullptr;
    this->tail = nullptr;
    this->size = 0;
}

void LinkedList::addFirst(int item) {
    Node *node = new Node(item);
    if(head == nullptr)
        head = tail = node;
    else {
        node->next = head;
        head = node;
    }
    size++;
}

void LinkedList::addLast(int item) {
    Node *node = new Node(item);
    if(head == nullptr)
        head = tail = node;
    else {
        tail->next = node;
        tail = node;
    }
    size++;
}

unsigned LinkedList::length() const {
    return size;
}

bool LinkedList::isEmpty() {
    return head == nullptr;
}

ostream &operator<<(ostream &stream, const LinkedList &list) {
    Node* current = list.head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    return stream;
}

void LinkedList::insert(int item, int position) {
    Node *node = new Node(item);

    if(!(position >= 0 && position < size))
        throw invalid_argument("Error: given index out of range.");

    Node *current = head;
    Node *prev = nullptr;

    if(position == 0) addFirst(item);
    else {
        for (size_t i = 0; i < position; i++) {
            if(i == position) break;
            prev = current;
            current = current->next;
        }
        prev->next = node;
        node->next = current;
        size++;
    }

}

void LinkedList::removeLast() {
    if (isEmpty())
        throw invalid_argument("list is empty");
    Node* current = head;
    while (current->next != tail) {
        current = current->next;
    }
    current->next = nullptr;
    tail = current;
    size--;

    current = nullptr;
    delete current;
}

void LinkedList::removeFirst() {
    if(isEmpty())
        throw invalid_argument("list is empty");
    auto second = head->next;
    head->next = nullptr;
    head = second;
    size--;
}
