//
// Created by ner13 on 05/11/2024.
//

#include "LinkedList.h"

template<class T>
void LinkedList<T>::insert(T val)
{
    Node* value = new Node(val);
    value->next = this->head;
    this->head = value;
    listSize++;
}

template<class T>
bool LinkedList<T>::isEmpty()
{
    return this->head == nullptr;
}

template<class T>
int LinkedList<T>::size()
{
    return listSize;
}

template<class T>
T LinkedList<T>::pop()
{
    if (!isEmpty())
    {
        Node* temp = this->head;
        T value = temp->data;
        this->head = this->head->next;
        delete temp;
        listSize--;
        return value;
    }
}
//#include "LinkedList.h"
//#include <stdexcept> // כדי להשתמש בstd::out_of_range
//
//template <class T> class LinkedList
//LinkedList<T>::LinkedList()
//{
//    head(nullptr);
//    size(0);
//}
//
//template <typename T>
//LinkedList<T>::~LinkedList() 
//{
//    while (!isEmpty()) 
//    {
//        remove();
//    }
//}
//
//template <typename T>
//void LinkedList<T>::add(T value) 
//{
//    Node* newNode = new Node(value);
//    if (head == nullptr) 
//    {
//        head = newNode;
//    }
//    else {
//        Node* current = head;
//        while (current->next != nullptr) 
//        {
//            current = current->next;
//        }
//        current->next = newNode;
//    }
//    size++;
//}
//
//template <typename T>
//void LinkedList<T>::remove() 
//{
//    if (isEmpty()) 
//    {
//        throw std::out_of_range("LinkedList is empty");
//    }
//    Node* temp = head;
//    head = head->next;
//    delete temp;
//    size--;
//}
//
//template <typename T>
//T LinkedList<T>::front() const 
//{
//    if (isEmpty()) 
//    {
//        throw std::out_of_range("LinkedList is empty");
//    }
//    return head->data;
//}
//
//template <typename T>
//bool LinkedList<T>::isEmpty() const 
//{
//    return head == nullptr;
//}
//
//template <typename T>
//int LinkedList<T>::count() const 
//{
//    return size;
//}
