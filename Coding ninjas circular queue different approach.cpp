class CircularQueue
{
    int *arr;
    int front;
    int rear;
    int size;
public:
    // Initialize your data structure.
    CircularQueue(int n)
    {
        size = n;
        arr = new int[size];
        front = rear = -1;
    }
    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value)
    {
        if(front==-1)///atake if(front==-1){ front==rear=0; hbe }
        {
            front=rear=0;
                    arr[rear]=value;
        return true;

            
        }
        else if((rear+1)%size==front)
        {
            return false;////ata queue ta full bujate use kora hoi
        }
        else
        {
            rear=(rear+1)%size;
                    arr[rear]=value;
        return true;

            
        }

    }

    int dequeue()
    {
        int ans=arr[front];///2
        if(front==-1)
        {
            return -1;/////
        }
        
       // arr[front]=-1;

        if(front==rear)
        {
            front=rear=-1;
             return ans;///2
            
        }
        else
        {
            front=(front+1)%size;
             return ans;///2
        }
       
    }
};
