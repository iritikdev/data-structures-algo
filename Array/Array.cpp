//
// Created by Ritik on 17-11-2022.
//

#include "Array.h"
#include <iostream>
#include <ostream>
using namespace std;

Array::Array(int length) {
    items = new int[length];
    this->length = length;
    count = 0;
}



void Array::insert(int item) {
    if (length == count) {
        int* newItems = new int[count * 2];
        for (int i = 0; i < count; ++i)
            newItems[i] = items[i];
        items = newItems;
    }
    items[count++] = item;
}

void Array::removeAt(int index) {
    if (index < 0 || index >= count)
        throw invalid_argument("invalid index");
    for (int i = index; i < count; ++i)
        items[i] = items[i+1];
    count--;
}

int Array::indexOf(int item) {
    for (int i = 0; i < count; ++i) {
        if(items[i] == item)
            return i;
    }
    return -1;
}

bool Array::contains(int item) {
    for (int i = 0; i < count; ++i)
        if(items[i] == item) return true;
    return false;
}

void Array::insertAt(int item, int index) {
    if (length == count) {
        int* newItems = new int[count * 2];
        for (int i = 0; i < count; ++i)
            newItems[i] = items[i];
        items = newItems;
    }
//    10 20 30 40
    for (size_t i = count; i >= index; i--) {
        items[i+1] = items[i];
    }
    items[index] = item;
    count++;
}

unsigned int Array::size() {
    return count;
}

int Array::getItem(int index) {
    return items[index];
}


ostream &operator<<(ostream &stream,  Array &array) {
    for (int i = 0; i < array.size(); ++i) {
        stream << array.getItem(i) << " ";
    }
    return stream;
}
