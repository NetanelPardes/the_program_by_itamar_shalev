//
// Created by ner13 on 05/11/2024.
//
#include "Stack.h"

template<class T>
void Stack<T>::push(T val)
{
    container.push_back(val);
}

template<class T>
T Stack<T>::pop()
{
    if (!container.empty())
    {
        T temp = container.back();
        container.pop_back();
        return temp;
    }
}

template<class T>
T& Stack<T>::top()
{
    return container.back();
}

template<class T>
bool Stack<T>::isEmpty()
{
    return container.empty();
}

template<class T>
int Stack<T>::size()
{
    return container.size();
}

//#include "Stack.h"
//#include <stdexcept> // כדי להשתמש בstd::out_of_range
//
//template <typename T>
//Stack<T>::Stack()
//{
//    topNode(nullptr);
//    size(0);
//}
//
//template <typename T>
//Stack<T>::~Stack() 
//{
//    while (!isEmpty()) 
//    {
//        pop();
//    }
//}
//
//template <typename T>
//void Stack<T>::push(T value) 
//{
//    Node* newNode = new Node(value);
//    newNode->next = topNode;
//    topNode = newNode;
//    size++;
//}
//
//template <typename T>
//void Stack<T>::pop() 
//{
//    if (isEmpty()) 
//    {
//        throw std::out_of_range("Stack is empty");
//    }
//    Node* temp = topNode;
//    topNode = topNode->next;
//    delete temp;
//    size--;
//}
//
//template <typename T>
//T Stack<T>::top() const 
//{
//    if (isEmpty()) 
//    {
//        throw std::out_of_range("Stack is empty");
//    }
//    return topNode->data;
//}
//
//template <typename T>
//bool Stack<T>::isEmpty() const 
//{
//    return topNode == nullptr;
//}
//
//template <typename T>
//int Stack<T>::count() const 
//{
//    return size;
//}
