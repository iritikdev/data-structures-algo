#include <iostream>
#include "Array/Array.h"
#include "LinkedList/LinkedList.h"
using namespace std;

int main() {
    LinkedList list;
    list.addLast(10);
    list.addLast(20);
    list.addLast(30);

    list.removeFirst();

    cout << list << endl;















    
    return 0;
}
