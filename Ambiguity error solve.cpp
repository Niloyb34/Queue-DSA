when we use queue[100] array then it will give "queue is ambiguous " to resolve this we have to use this method 
"NUMBER 1-------->CHANGE THE QUEUE ARRAY NAME MANE queue[100] use na kore onno kono name use koro jemon aikane myqueue use korci
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int myQueue[100],n=100,front=-1,rear=-1;

void Insert()
{
    int val;
    if(rear==n-1)
    {
        cout<<"OVERFLOW"<<endl;
    }
    else
    {
        if(front==-1)
        {
            front=0;
        }
        cout<<"Insert the element into the queue: ";
        cin>>val;
        rear++;
        myQueue[rear]=val;
    }
}

void Delete()
{
    if(front==-1||front>rear)
    {
        cout<<"Underflow"<<endl;
        return;
    }
    else
    {
        cout<<"Element deleted from queue is : "<<myQueue[front]<<endl;
        front++;
    }
}

void Display()
{
    if(front==-1)
    {
        cout<<"Queue is empty "<<endl;
    }
    else
    {
        cout<<"Queue elements are :  ";
        for(int i=front;i<=rear;i++)
        {
            cout<<myQueue[i]<<"  ";
            cout<<endl;
        }
    }
}

int main()
{
    int ch;
    cout<<"1)Insert element to queue: "<<endl;
    cout<<"2)Delete element from queue: "<<endl;
    cout<<"3)Display all the elements of queue"<<endl;
    cout<<"4)Exit"<<endl;
    while(ch!=4)
    {
        cout<<"Enter your choice : "<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1:Insert();
            break;
            case 2:Delete();
            break;
            case 3:Display();
            break;
            case 4:cout<<"Exit"<<endl;
            break;
            default:cout<<"Invalid choice"<<endl;
        }
    }
    return 0;
}
The ambiguity in the reference to the queue is caused because the name "queue" is used both for the name of the integer array and also as the name of the user-defined function. To resolve this ambiguity, you can either rename the integer array to a different name or rename the user-defined function to a different name.

Here's an example of how you can rename the integer array to a different name, let's say "myQueue":
