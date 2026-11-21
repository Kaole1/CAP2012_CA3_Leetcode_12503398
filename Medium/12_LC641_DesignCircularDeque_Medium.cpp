class MyCircularDeque {
private:
    vector<int> arr;
    int front;
    int rear;
    int count;
    int capacity;

public:

    MyCircularDeque(int k) {
        capacity = k;
        arr.resize(k);

        front = 0;
        rear = k - 1;
        count = 0;
    }

    // Insert at front
    bool insertFront(int value) {

        if (isFull())
            return false;

        front = (front - 1 + capacity) % capacity;

        arr[front] = value;
        count++;

        return true;
    }

    // Insert at rear
    bool insertLast(int value) {

        if (isFull())
            return false;

        rear = (rear + 1) % capacity;

        arr[rear] = value;
        count++;

        return true;
    }

    // Delete from front
    bool deleteFront() {

        if (isEmpty())
            return false;

        front = (front + 1) % capacity;

        count--;

        return true;
    }

    // Delete from rear
    bool deleteLast() {

        if (isEmpty())
            return false;

        rear = (rear - 1 + capacity) % capacity;

        count--;

        return true;
    }

    // Get front element
    int getFront() {

        if (isEmpty())
            return -1;

        return arr[front];
    }

    // Get rear element
    int getRear() {

        if (isEmpty())
            return -1;

        return arr[rear];
    }

    // Check if empty
    bool isEmpty() {
        return count == 0;
    }

    // Check if full
    bool isFull() {
        return count == capacity;
    }
};