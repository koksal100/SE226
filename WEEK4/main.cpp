#include <iostream>

using namespace std;

class Node{

public:
    int data=0;
    Node* next=nullptr;

    Node(int number){
        data=number;
        next=nullptr;
    }
};

class Queue{


    public:
    Node* front=nullptr;
    Node* rear=nullptr;
    int numberOfObjects=0;


    bool isEmpty(){
        return rear==nullptr;
    }


    void enqueue(int number){
        Node* newNode = new Node(number);
        if(isEmpty()){
            front=newNode;
            rear=newNode;
            numberOfObjects++;
        }else{
            rear->next=newNode;
            rear=newNode;
            rear->next=nullptr;
            numberOfObjects++;
        }

    }

    int dequeue(){
        int tempData=0;
        if(isEmpty()){
            cout<<"THIS QUEUE IS EMPTY"<<endl;
            return -1;
        }else if(rear==front){
            tempData=front->data;
            delete front;
            rear=nullptr;
            front=nullptr;
            numberOfObjects--;
            return tempData;
        }else{
            Node* oldFront=front;
            tempData=front->data;
            front=front->next;
            delete oldFront;
            numberOfObjects--;
            return tempData;
        }

    }
    int size(){
        return numberOfObjects;
    }

    void print(){

        Node* temp=rear;
        for(temp=front;temp!=nullptr;temp=temp->next){

            cout<<temp->data<<" ";
        }
        cout<<endl;


    }



};



int main()
{
    Queue q;
    q.enqueue(2);
    q.enqueue(21);
    q.enqueue(23);
    q.enqueue(24);
    q.print();
    q.dequeue();
    q.print();
    q.dequeue();
    q.print();
    q.dequeue();
    q.print();
    q.dequeue();
    q.print();
    q.dequeue();
    q.print();
    return 0;
}
