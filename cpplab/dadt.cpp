#include<stdlib.h>
#include<iostream>
using namespace std;
#define max 10
class dic
{
public:
struct list
{
int data;
struct list *next;
}*ptr[max],*root[max],*temp[max];
int index;
dic()
{
int i;
index=-1;
for(i=0;i<max;i++)
{
root[i]=NULL;
ptr[i]=NULL;
temp[i]=NULL;
}
}
void insert(int );
void search(int );
void dele(int);
void disp();
};
void dic::insert(int key)
{
index=int(key%max);
ptr[index]=(struct list*)malloc(sizeof(struct list));
ptr[index]->data=key;
if(root[index]==NULL)
{
root[index]=ptr[index];
root[index]->next=NULL;
temp[index]=ptr[index];
}
else
{
temp[index]=root[index];
while(temp[index]->next!=NULL)
temp[index]=temp[index]->next;
temp[index]->next=ptr[index];
}
}
void dic::search(int key)
{
int flag=0;
index=int(key%max);
temp[index]=root[index];
while(temp[index]!=NULL)
{
if(temp[index]->data==key)
{
cout<<"\n search key is found";
flag=1;
break;
}
else
temp[index]=temp[index]->next;
}
if(flag==0)
cout<<"\n search key not found";
}
void dic::dele(int key)
{
index=int(key%max);
temp[index]=root[index];
while(temp[index]->data!=key && temp[index]!=NULL)
{
ptr[index]=temp[index];
temp[index]=temp[index]->next;
}
ptr[index]->next=temp[index]->next;
cout<<"\n"<<temp[index]->data<<"has been deleted";
temp[index]->data=0;
temp[index]=NULL;
free(temp[index]);
}
int main()
{
int val,ch,n,num;
char c;
dic d;
while(1)
{
cout<<"\n1.insert\n2.search\n3.delete\n4.exit:";
cout<<"\n enter ur choice:";
cin>>ch;
switch(ch)
{
case 1:cout<<"\n enter no. of ele:";
cin>>n;
cout<<"\nenter data:";
for(int i=0;i<n;i++)
{
cin>>num;
d.insert(num);
}
break;
case 2:cout<<"\n enter ele to search:";
cin>>n;
d.search(n);
break;
case 3:cout<<"\n enter ele to delete:";
cin>>n;
d.dele(n);
break;
case 4:exit(0);
}
}
}
