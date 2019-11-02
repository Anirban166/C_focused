Queues support the following fundamental functions:

Enqueue

If the queue is not full, this function adds an element to the back of the queue, else it prints “OverFlow”.

void enqueue(int queue[], int element, int& rear, int arraySize) {
    if(rear == arraySize)            // Queue is full
            printf(“OverFlow\n”);
    else{
         queue[rear] = element;    // Add the element to the back
         rear++;
    }
}
Dequeue

If the queue is not empty, this function removes the element from the front of the queue, else it prints “UnderFlow”.

void dequeue(int queue[], int& front, int rear) {
    if(front == rear)            // Queue is empty
        printf(“UnderFlow\n”);
    else {
        queue[front] = 0;        // Delete the front element
        front++;
    }
}
Front

This function returns the front element of the queue.

int Front(int queue[], int front) {
    return queue[front];
}
Support functions

Size

This function returns the size of a queue or the number of elements in a queue.

int size(int front, int rear) {
    return (rear - front);
}
IsEmpty

If a queue is empty, this function returns 'true', else it returns 'false'.

bool isEmpty(int front, int rear) {
    return (front == rear);
}

Problem 1:
You are given a string. Take the first character of the string and put it at the end of the string.

Find out what the string will be after  steps.

The string can be considered as a queue. At each step, dequeue the character from the front and enqueue it at the end. Repeat this process  times.

Let us code this problem.

#include <iostream>
#include <cstdio>

using namespace std;

void enqueue(char queue[], char element, int& rear, int arraySize) {
    if(rear == arraySize)            // Queue is full
        printf("OverFlow\n");
    else {
        queue[rear] = element;    // Add the element to the back
        rear++;
    }
}


void dequeue(char queue[], int& front, int rear) {
    if(front == rear)            // Queue is empty
        printf("UnderFlow\n");
    else {
        queue[front] = 0;        // Delete the front element
        front++;
    }
}

char Front(char queue[], int front) {
    return queue[front];
}


int main() {
    char queue[20] = {'a', 'b', 'c', 'd'};        
    int front = 0, rear = 4;                
    int arraySize = 20;                // Size of the array
    int N = 3;                    // Number of steps
    char ch;
    for(int i = 0;i < N;++i) {
        ch = Front(queue, front);
        enqueue(queue, ch, rear, arraySize);
        dequeue(queue, front, rear);
    }
    for(int i = front;i < rear;++i)
        printf("%c", queue[i]);
    printf("\n");
    return 0;
}
Output: dabc  
