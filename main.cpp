#include <iostream>
#include "Stack.cpp"
#include "LinkedList.cpp"
#include "Queue.cpp"

using namespace std;

int main() {
    // ����� �� LinkedList
    LinkedList<int> list;

    // ����� ������ ������
    list.insert(10);
    list.insert(20);
    list.insert(30);
    std::cout << "After adding elements to the list: " << std::endl;
    std::cout << "List count: " << list.size() << std::endl; // ����� 3
    std::cout << "First element: " << list.size() << std::endl; // ����� 10

    // ���� ���� �������
    list.pop();
    std::cout << "After removing one element from the list: " << std::endl;
    std::cout << "List count: " << list.size() << std::endl; // ����� 2
    std::cout << "First element: " << list.size() << std::endl; // ����� 20

    // ����� �� ������ ����
    if (list.isEmpty()) {
        std::cout << "The list is empty." << std::endl;
    } else {
        std::cout << "The list is not empty." << std::endl; // ���� "not empty"
    }

    // ����� �� Queue
    Queue<std::string> queue;

    // ����� ������ ����
    queue.push("Hello");
    queue.push("World");
    queue.push("C++");

    std::cout << "After adding elements to the queue: " << std::endl;
    std::cout << "Queue count: " << queue.size() << std::endl; // ����� 3
    std::cout << "Front element: " << queue.top() << std::endl; // ����� "Hello"

    // ���� ���� �����
    queue.pop();
    std::cout << "After removing one element from the queue: " << std::endl;
    std::cout << "Queue count: " << queue.size() << std::endl; // ����� 2
    std::cout << "Front element: " << queue.top() << std::endl; // ����� "World"

    // ����� �� ���� ���
    if (queue.isEmpty()) {
        std::cout << "The queue is empty." << std::endl;
    } else {
        std::cout << "The queue is not empty." << std::endl; // ���� "not empty"
    }

    // ����� �� Stack
    Stack<int> stack;

    // ����� ������ �������
    stack.push(5);
    stack.push(10);
    stack.push(15);

    std::cout << "After pushing elements onto the stack: " << std::endl;
    std::cout << "Stack count: " << stack.size() << std::endl; // ����� 3
    std::cout << "Top element: " << stack.top() << std::endl; // ����� 15

    // ���� ���� ��������
    stack.pop();
    std::cout << "After popping one element from the stack: " << std::endl;
    std::cout << "Stack count: " << stack.size() << std::endl; // ����� 2
    std::cout << "Top element: " << stack.top() << std::endl; // ����� 10

    // ����� �� ������� ����
    if (stack.isEmpty()) {
        std::cout << "The stack is empty." << std::endl;
    } else {
        std::cout << "The stack is not empty." << std::endl; // ���� "not empty"
    }

    return 0;
}
