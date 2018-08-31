#include<iostream>
//#include<conio.h>
#include<stdlib.h>
using namespace std;
template<class t>
class queue
{
int rear,front,n;
t a[50];
public:
queue(int m)
{
rear=front=-1;
n=m;
}
void enque();
void deque();
void display();
};
template<class t>
void queue<t>::enque()
{
t ele;
if(rear>=n-1)
{
cout<<"queue is overflow\n";
return;
}
cout<<"enter the element\n";
cin>>ele;
if(front==-1)
rear=front=0;
else
rear++;
a[rear]=ele;
}
template<class t>
void queue<t>::deque()
{
t ele;
if(rear==-1)
{
cout<<"queue is underflow\n";
return;
}
ele=a[front];
if(rear==front)
rear=front=-1;
else
front++;
cout<<"the deleted element is:"<<ele;
}
template<class t>
void queue<t>::display()
{
int i;
if(rear==-1)
{
cout<<"queue is underflow\n";
return;
}
for(i=front;i<=rear;i++)
cout<<a[i]<<" ";
cout<<"\n";
}
int main()
{
int ch,n;
//clrscr();
cout<<"enter the size of the queue\n";
cin>>n;
queue<int>q(n);
while(1)
{
cout<<"\n menu 1eenque 2. deque 3.display 4.exit\n";
cout<<"enter ur choice:";
cin>>ch;
switch(ch)
{
case 1:q.enque();
break;
case 2:q.deque();
break;
case 3:q.display();
break;
case 4:exit(0);
break;
default:cout<<"invalid option\n";
break;
}
}
}
