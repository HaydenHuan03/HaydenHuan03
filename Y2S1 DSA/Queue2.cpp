#include <iostream>
#define N 5
using namespace std;

class Queue{
    int front, back, count;
    int items[N];

    public:
    Queue(){
        front = 0;
        count = 0;
        back = N-1;
    }

    // destroyQueue()

    bool isEmpty(){
        return count == 0;
    }

    bool isFull(){
        return count == N-1;
    }

    void enQueue(char _item){
        if(isFull()){
            cout << "Sorry, the queue is full\n";
        }
        else
        items[++back] = _item;
        //back++; items[back] = _item;
    }

    void deQueue(){
        if(isEmpty()){
            cout << "Sorry, the queue is empty\n";
        }
        else{
            front++;
        }
    }
    char getFront(){
        return items[front];
    }

    char getBack(){
        return items[back];
    }

    void print(){
        if(isEmpty()){
            cout << "No item to be printed.";
        }
        else{
            for(int i = front; i< back; i++){
                cout << "[front = " << front << ", back = " << back << "]";
                cout << items[i];
                cout << endl;
            }
        }
    }
};

int main(){
    Queue q1;

    q1.print();

    q1.enQueue('L');
    q1.print();

    q1.enQueue('D');
    q1.print();

    q1.deQueue();
    q1.print();

    q1.deQueue();
    q1.print();

    q1.deQueue();
    q1.print();

    return 0;
}