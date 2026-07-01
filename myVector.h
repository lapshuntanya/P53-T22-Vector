//
// Created by Tetiana Perederii on 01.07.2026.
//

#ifndef P53_T22_VECTOR_MYVECTOR_H
#define P53_T22_VECTOR_MYVECTOR_H
#include <iostream>
using namespace std;

template<typename Type>
class Vector {
    Type* arr;
    int size;

public:
    Vector() {
        arr = nullptr;
        size = 0;
    }
    Vector(int size, Type value) { //5, 1 -> [1, 1, 1, 1, 1]
        if ( size > 0) {
            this->size = size;
            arr = new  Type[size];
            for (int i = 0; i < size; ++i) {
                arr[i] = value;
            }
        }else {
            arr = nullptr;
            size = 0;
        }
    }
    ~Vector() {
        if (arr!= nullptr) {
            delete[] arr;

            arr = nullptr;
            size = 0;
        }
    }

    int getSize() const	// повертає розмірність масиву
    {
        return size;
    }
    void print()const	// виведення всіх елементів масиву
    {
        if ( size == 0 ) cout << "Vector is empty!\n" ;
        else {
            for (int i = 0; i < size; ++i) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }

    void push_back(Type item)	// додавання елемента item у кінець масиву
    {
        Type* tmp = new Type[++size];
        for (int i = 0; i < size - 1; ++i) {
            tmp[i] = arr[i];
        }
        tmp[size - 1] = item;

        if (arr!= nullptr) delete[] arr;

        arr = tmp;
    }
    Type& operator[](int number) {
        return arr[number];
    }

    Type find_max()const // пошук елемента з максимальним значенням
    {
        Type max = arr[0];
        for (int i = 1; i < size; ++i) {
            if (arr[i] > max) max = arr[i];
        }
        return max;
    }
    Type find_min()const // пошук елемента з мінімальним значенням
    {
        Type min = arr[0];
        for (int i = 1; i < size; ++i) {
            if (arr[i] < min) min = arr[i];
        }
        return min;
    }

};
#endif //P53_T22_VECTOR_MYVECTOR_H
