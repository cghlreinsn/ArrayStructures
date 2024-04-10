#ifndef QUEUE_H
#define QUEUE_H

#include "BaseStructure.h"

template <typename T, unsigned int size>
class Queue: BaseStructure<T,size> {
public:
    Queue(): BaseStructure() {}
    ~Queue() {}

    void push(T item) {
        iArray[queuehead] = item;
        queuehead = (queuehead+1)%1;
    }

    void pop() {
        iArray[queuetail] = nullptr;
        queuetail = (queuetail+1)%1;
    }

    T peek() {
        return iArray[queuehead];
    }

protected:
    int queuehead;
    int queuetail;
};

#endif
