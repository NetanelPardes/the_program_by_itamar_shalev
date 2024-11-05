#include <iostream>
#include "Stack.cpp"
#include "LinkedList.cpp"
#include "Queue.cpp"

using namespace std;

int main() {
    // עבודה עם LinkedList
    LinkedList<int> list;

    // הוספת איברים לרשימה
    list.insert(10);
    list.insert(20);
    list.insert(30);
    std::cout << "After adding elements to the list: " << std::endl;
    std::cout << "List count: " << list.size() << std::endl; // צפויה 3
    std::cout << "First element: " << list.size() << std::endl; // צפויה 10

    // הסרת איבר מהרשימה
    list.pop();
    std::cout << "After removing one element from the list: " << std::endl;
    std::cout << "List count: " << list.size() << std::endl; // צפויה 2
    std::cout << "First element: " << list.size() << std::endl; // צפויה 20

    // בדיקה אם הרשימה ריקה
    if (list.isEmpty()) {
        std::cout << "The list is empty." << std::endl;
    } else {
        std::cout << "The list is not empty." << std::endl; // צפוי "not empty"
    }

    // עבודה עם Queue
    Queue<std::string> queue;

    // הוספת איברים לתור
    queue.push("Hello");
    queue.push("World");
    queue.push("C++");

    std::cout << "After adding elements to the queue: " << std::endl;
    std::cout << "Queue count: " << queue.size() << std::endl; // צפויה 3
    std::cout << "Front element: " << queue.top() << std::endl; // צפויה "Hello"

    // הסרת איבר מהתור
    queue.pop();
    std::cout << "After removing one element from the queue: " << std::endl;
    std::cout << "Queue count: " << queue.size() << std::endl; // צפויה 2
    std::cout << "Front element: " << queue.top() << std::endl; // צפויה "World"

    // בדיקה אם התור ריק
    if (queue.isEmpty()) {
        std::cout << "The queue is empty." << std::endl;
    } else {
        std::cout << "The queue is not empty." << std::endl; // צפוי "not empty"
    }

    // עבודה עם Stack
    Stack<int> stack;

    // הוספת איברים למחסנית
    stack.push(5);
    stack.push(10);
    stack.push(15);

    std::cout << "After pushing elements onto the stack: " << std::endl;
    std::cout << "Stack count: " << stack.size() << std::endl; // צפויה 3
    std::cout << "Top element: " << stack.top() << std::endl; // צפויה 15

    // הסרת איבר מהמחסנית
    stack.pop();
    std::cout << "After popping one element from the stack: " << std::endl;
    std::cout << "Stack count: " << stack.size() << std::endl; // צפויה 2
    std::cout << "Top element: " << stack.top() << std::endl; // צפויה 10

    // בדיקה אם המחסנית ריקה
    if (stack.isEmpty()) {
        std::cout << "The stack is empty." << std::endl;
    } else {
        std::cout << "The stack is not empty." << std::endl; // צפוי "not empty"
    }

    return 0;
}
