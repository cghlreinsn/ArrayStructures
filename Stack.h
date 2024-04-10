#ifndef STACK_H
#define STACK_H

#include "BaseStructure.h"

template <typename T, unsigned int size>
class Stack: BaseStructure<T,size> {
public:
    Stack(): BaseStructure() {}
    ~Stack() {}

    void push(T item) {
        iArray[top] = item;
        top = (top+1)%size;
    }

    void pop() {
        iArray[top] = nullptr;
        top = (top-1)%size;
    }

    T peek() {
        return iArray[top];
    }

protected:
    int top;
};

#endif
