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
        return count == N;
    }

    void enQueue(int _item){
        if(isFull()){
            cout << "Sorry, the queue is full\n";
        }
        else{
            back = (back + 1)%N;
            items[back] = _item;
            count ++;
        }
    }

    void deQueue(){
        if(isEmpty()){
            cout << "Sorry, the queue is empty\n";
        }
        else{
            front = (front + 1) % N;
            count--;
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
            cout << "[front = " << front << ", back = " << back << "]";
            if(front <= back){
                for(int i = front; i< back; i++){
                cout << items[i];
                cout << " ";
                }
                cout << endl;
            }
        }
    }
};

int main(){
    Queue q1;

    q1.enQueue(10);
    q1.print();

    q1.enQueue(20);
    q1.print();

    q1.enQueue(30);
    q1.print();

    q1.enQueue(40);
    q1.print();

    q1.enQueue(50);
    q1.print();

    return 0;
}