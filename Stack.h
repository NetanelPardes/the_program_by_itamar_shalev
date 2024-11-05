//#ifndef STACK_H
//#define STACK_H
//
//#include <iostream>
//
//template <class T> class Stack
//{
//
//};
//
//template <typename T>
//class Stack {
//private:
//    struct Node {
//        T data;
//        Node* next;
//
//        Node(T value) : data(value), next(nullptr) {}
//    };
//
//    Node* topNode;
//    int size;
//
//public:
//    Stack();
//    ~Stack();
//
//    void push(T value);
//    void pop();
//    T top() const;
//    bool isEmpty() const;
//    int count() const;
//};
//
//#include "Stack.cpp" // כולל את קובץ המימוש
//#endif // STACK_H


//
// Created by ner13 on 05/11/2024.
//

#ifndef STACK_H
#define STACK_H

#include <deque>
using namespace std;

template <class T> class Stack
{
private:
    deque<T> container;

public:

    //methods
    Stack() = default;

    void push(T val);
    T pop();
    T& top();
    bool isEmpty();
    int size();
};



#endif //STACK_H