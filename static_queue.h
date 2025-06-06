/*TB - 02
Group DeepSeek*/

#ifndef STACK_QUEUE_H
#define STACK_QUEUE_H

// Node structure for Dynamic Stack
struct StackNode {
    int data;
    StackNode* next;
};

// Dynamic Stack class
class DynamicStack {
private:
    StackNode* top;

public:
    DynamicStack();               // Constructor
    ~DynamicStack();              // Destructor
    void push(int value);        // Push an element onto the stack
    void pop();                  // Pop an element from the stack
    void display();              // Display stack contents
    bool isEmpty();              // Check if the stack is empty
};
struct Queuenode{
    int value;
    Queuenode *next;
};
class Dynamicintqueue{
private:
    Queuenode *front;
    Queuenode *rear;
    int numItems;
public:
Dynamicintqueue();
~Dynamicintqueue();
void enqueue(int);
void dequeue(int &);
bool isEmpty()const;
void clear();
};

#endif
