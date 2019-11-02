Double-ended queue

In a standard queue, a character is inserted at the back and deleted in the front. However, in a double-ended queue, characters can be inserted and deleted from both the front and back of the queue.

Functions supported

The following functions are supported by double-ended queues:

Insert at back

void insert_at_back(int queue[], int element, int &rear, int array_size){
    if(rear == array_size)
        printf("Overflow\n");
    else{
        queue[rear] = element;
        rear = rear + 1;
    }
}
Delete from back

void delete_from_back(int queue[], int &rear, int front){
    if(front == rear)
        printf("Underflow\n");
    else{
        rear = rear - 1;
        queue[rear] = 0;
    }
}
Insert at front

void insert_at_front(int queue[], int &rear, int &front, int element, int array_size){
    if(rear == array_size)
        printf("Overflow\n");
    else{
        for(int i=rear; i>front; i--)
            queue[i] = queue[i-1];
        queue[front] = element;
        rear = rear+1;
    }
}
Delete from front

void delete_front_front(int queue[], int &front, int &rear){
    if(front == rear)
        printf("Underflow\n");
    else{
        queue[front] = 0;
        front = front + 1;
    }
}
Get front element

int get_front(int queue[], int front){
    return queue[front];
}
Get rear element

int get_rear(int queue[], int rear){
    return queue[rear-1];
}
Support functions
Size and IsEmpty are implemented in the same way as in a standard queue.
