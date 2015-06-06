//////////////////////////
//Name: Kathleen Levi
//
//Project: EX04_02 (11.3)
//
//Date: May 26, 2015
//////////////////////////


#include <iostream>
using namespace std;

int* doubleCapacity (const int* list, int size);
void addNumbers (int* list, int size);

int main() {
    
    cout << "Enter the size of the array: ";
    int size;
    cin >> size;
    int* list = new int[size];
    
    addNumbers(list, size);
    
    doubleCapacity(list, size);
    
    delete []list;
}

void addNumbers (int* list, int size){
    for (int i = 0; i < size; i++){
        cout << "Enter the next number in the array ";
        cin >> list[i];
    }
    
}

int* doubleCapacity (const int* list, int size){
    size *= 2;
    int* doubleList = new int[size];
    
    return doubleList;
}
//it doesnt say in the book that we have to read numbers into the new array or output anything, if we do let me know and I can add that in.