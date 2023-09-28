#include <iostream>
#define SIZE 2
using namespace std;
class Queue
{
int data[SIZE];
int rear, front;
public:
Queue()
{
rear=front=-1;
}
void insert(int element)
{
    if(isFull() ==1 )
     cout<<"queue is full";
     else
    data[++rear]=element;
    if(front==-1)
    front =0;
}
int remove()
{
    if(isEmpty()== 1)
    return -1;
    else 
    return data[front++];
}
int isEmpty()
{
    if(rear==front == -1 || front>rear){
        cout<<"empty";
    return 1;
    }
    else 
    return 0;
}
int isFull()
{
    if(rear == SIZE -1 )
    return 1;
    else
    return 0;
}
int peek()
{
    if(isEmpty()==1)
    return -1;
    else
    return data[front];
}
};
int main()
{
    cout<<"static implementation of queue";
    Queue st;
    st.insert(10);
    st.insert(20);
    cout<<"\n queue is empty"<< st.isEmpty();
    cout<<"\n queue is full"<<    st.isFull();
    cout<<"\n element at top position"<< st.peek();
    cout<<"\n element is removed"<< st.remove();
     cout<<"\n element is removed"<< st.remove();
      cout<<"\n element is removed"<< st.remove();
    return 0;
}