//#ifndef QUEUE_H
//#define QUEUE_H
//
//#include <iostream>
//
//template <class T> class Queue
//{
//
//};
//
//
//template <typename T>
//class Queue {
//private:
//    struct Node {
//        T data;
//        Node* next;
//
//        Node(T value) : data(value), next(nullptr) {}
//    };
//
//    Node* frontNode;
//    Node* backNode;
//    int size;
//
//public:
//    Queue();
//    ~Queue();
//
//    void push(T value);
//    void pop();
//    T front() const;
//    bool isEmpty() const;
//    int count() const;
//};
//
//#include "Queue.cpp" // כולל את קובץ המימוש
//#endif // QUEUE_H

//
// Created by ner13 on 05/11/2024.
//

#ifndef QUEUE_H
#define QUEUE_H

#include <deque>
using namespace std;

template <class T> class Queue
{
private:
    deque<T> container;

public:
    Queue() = default;

    bool isEmpty();
    int size();
    void push(T val);
    T pop();
    T& top();
};



#endif //QUEUE_H
