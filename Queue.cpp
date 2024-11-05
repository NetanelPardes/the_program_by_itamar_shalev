//
// Created by ner13 on 05/11/2024.
//

#include "Queue.h"

template<class T>
bool Queue<T>::isEmpty()
{
    return container.empty();
}

template<class T>
int Queue<T>::size()
{
    return container.size();
}

template<class T>
void Queue<T>::push(T val)
{
    container.push_back(val);
}

template<class T>
T Queue<T>::pop()
{
    if (!container.empty())
    {
        T temp = container.front();
        container.pop_front();
        return temp;
    }
}

template<class T>
T& Queue<T>::top()
{
    return container.front();
}

//#include "Queue.h"
//#include <stdexcept> // כדי להשתמש בstd::out_of_range
//
//template <typename T>
//Queue<T>::Queue()
//{
//    frontNode(nullptr);
//    backNode(nullptr);
//    size(0);
//}
//
//template <typename T>
//Queue<T>::~Queue() 
//{
//    while (!isEmpty()) 
//    {
//        pop();
//    }
//}
//
//template <typename T>
//void Queue<T>::push(T value) 
//{
//    Node* newNode = new Node(value);
//    if (backNode != nullptr) 
//    {
//        backNode->next = newNode;
//    }
//    backNode = newNode;
//    if (frontNode == nullptr) 
//    {
//        frontNode = newNode;
//    }
//    size++;
//}
//
//template <typename T>
//void Queue<T>::pop() 
//{
//    if (isEmpty()) 
//    {
//        throw std::out_of_range("Queue is empty");
//    }
//    Node* temp = frontNode;
//    frontNode = frontNode->next;
//    if (frontNode == nullptr) 
//    {
//        backNode = nullptr;
//    }
//    delete temp;
//    size--;
//}
//
//template <typename T>
//T Queue<T>::front() const 
//{
//    if (isEmpty()) 
//    {
//        throw std::out_of_range("Queue is empty");
//    }
//    return frontNode->data;
//}
//
//template <typename T>
//bool Queue<T>::isEmpty() const 
//{
//    return frontNode == nullptr;
//}
//
//template <typename T>
//int Queue<T>::count() const 
//{
//    return size;
//}
