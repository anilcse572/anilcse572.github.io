#include<stdio.h>
#include<math.h>
void main()
{
int i,n;
float x[10],y[10],sumx=0,sumy=0,sumxx=0,sumxy=0,A=0,a=0,b=0;
printf("enter the number of values");
scanf("%d",&n);
printf("enter the values of x[i],y[i]");
for(i=0;i<n;i++)
scanf("%f%f",&x[i],&y[i]);
for(i=0;i<n;i++)
{
sumx=sumx+x[i];
sumy=sumy+log(y[i]);
sumxy=sumxy+(x[i]*log(y[i]));
sumxx=sumxx+(x[i]*x[i]);
}
A=(sumy*sumxx-sumxy*sumx)/(n*sumxx-sumx*sumx);
b=(sumy-n*A)/sumx;
a=exp(A);
printf("the exponential curve is y=%f exp(%f x)",a,b);
}

