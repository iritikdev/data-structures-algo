//
// Created by Ritik on 17-11-2022.
//

#ifndef DATA_STRUCTURES_ARRAY_H
#define DATA_STRUCTURES_ARRAY_H
#include <iostream>
#include <ostream>
using namespace std;

class Array {
public:
    explicit Array(int length);
    void insert(int item);
    void removeAt(int index);
    int indexOf(int item);
    bool contains(int item);
    void insertAt(int item, int index);
    unsigned int size();
    int getItem(int index);

private:
    int* items;
    unsigned int count;
    unsigned int length;
};
ostream &operator<<(ostream &stream,  Array &array);


#endif //DATA_STRUCTURES_ARRAY_H
