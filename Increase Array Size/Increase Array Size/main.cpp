//////////////////////////
//Name: Kathleen Levi
//
//Project: EX04_02 (11.3)
//
//Date: May 26, 2015
//////////////////////////

#include <iostream>
using namespace std;
template <typename T>
T* doubleCapacity (const T* list, T size);
template <typename T>
void addNumbers (T* list, T size);

int main() {
    
    cout << "Enter the size of the array: ";
    int size;
    cin >> size;
    int* list = new int[size];
    
    addNumbers(list, size);
    
    doubleCapacity(list, size);
    
    delete []list;
}
template <typename T>
void addNumbers (T* list, T size){
    for (int i = 0; i < size; i++){
        cout << "Enter the next number in the array ";
        cin >> list[i];
    }
    
}

template <typename T>
T* doubleCapacity (const T* list, T size){
    size *= 2;
    int* doubleList = new int[size];
    for (int i = 0; i < size; i ++){
        doubleList[i] = list[i];
    }
    return doubleList;
}
//it doesnt say in the book that we have to read numbers into the new array or output anything, if we do let me know and I can add that in.