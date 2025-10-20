class Node {
  public:
    int data;
    Node* next;

    Node(int new_data) {
        data = new_data;
        next = nullptr;
    }
};

class myQueue {

  public:
    myQueue() {
        // Initialize your data members
    }

    bool isEmpty() {
        // check if the queue is empty
    }

    void enqueue(int x) {
        // Adds an element x at the rear of the queue
    }

    void dequeue() {
        // Removes the front element of the queue
    }

    int getFront() {
        // Returns the front element of the queue
        // If queue is empty, return -1
    }

    int size() {
        // Returns the current size of the queue.
    }
};
