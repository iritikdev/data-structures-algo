//
// Created by Ritik on 18-11-2022.
//

#ifndef DATA_STRUCTURES_LINKEDLIST_H
#define DATA_STRUCTURES_LINKEDLIST_H
#include <iostream>
#include <ostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;
    explicit Node(int data);
};

class LinkedList {
private:
    Node *head;
    Node *tail;
    int size;

public:
    LinkedList();
    void addFirst(int item);
    void addLast(int item);
    unsigned length() const;
    bool isEmpty();
    friend ostream& operator<<(ostream &stream, const LinkedList &list);
    void insert(int item, int position);
    void removeFirst();
    void removeLast();
};


#endif //DATA_STRUCTURES_LINKEDLIST_H
