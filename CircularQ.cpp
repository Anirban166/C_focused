Circular queues

A circular queue is an improvement over the standard queue structure. In a standard queue, when an element is deleted,
the vacant space is not reutilized. However, in a circular queue, vacant spaces are reutilized.

While inserting elements, when you reach the end of an array and you need to insert another element,
you must insert that element at the beginning (given that the first element has been deleted and the space is vacant).

Enqueue

void enqueue(int queue[], int element, int& rear, int arraySize, int& count) {
    if(count == arraySize)            // Queue is full
            printf(“OverFlow\n”);
    else{
        queue[rear] = element;
        rear = (rear + 1)%arraySize;
        count = count + 1;
    }
}
Dequeue

void dequeue(int queue[], int& front, int rear, int& count) {
    if(count == 0)            // Queue is empty
        printf(“UnderFlow\n”);
    else {
        queue[front] = 0;        // Delete the front element
        front = (front + 1)%arraySize;
        count = count - 1;
    }
}
Front

int Front(int queue[], int front) {
    return queue[front];
}
Size

int size(int count) {
    return count;
}
IsEmpty

bool isEmpty(int count) {
    return (count == 0);
}
