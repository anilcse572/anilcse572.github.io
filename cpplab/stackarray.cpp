#include<iostream>
//#include<conio.h>
#include<stdlib.h>
using namespace std;
template<class t>
class stack
{
int top,n;
t a[50];
public:
stack(int m)
{
top=-1;
n=m;
}
void push();
void pop();
void display();
};
template<class t>
void stack<t>::push()
{
t ele;
if(top>=n-1)
{
cout<<"stack is over flow\n";
return;
}
top++;
cout<<"enter the element \n";
cin>>ele;
a[top]=ele;
}
template<class t>
void stack<t>::pop()
{
t ele;
if(top==-1)
{
cout<<"stack is underflow\n";
return;
}
ele=a[top];
top--;
cout<<"the deleted element is:"<<ele;
}
template<class t>
void stack<t>::display()
{
int i;
if(top==-1)
{
cout<<"stack is underflow\n";
return;
}
cout<<"the elements are:\n";
for(i=top;i>=0;i--)
cout<<a[i]<<" ";
}
int main()
{
int n,ch;

cout<<"enter the size of the stack:\n";
cin>>n;
stack<int>s(n);
while(1)
{
cout<<"\n menu 1.push. 2.pop 3.display 4.exit\n";
cout<<"enter ur choice:";
cin>>ch;
switch(ch)
{
case 1:s.push();
break;
case 2:s.pop();
break;
case 3:s.display();
break;
case 4:exit(0);
break;
default:cout<<"invalid choice";
break;
}
}
}
