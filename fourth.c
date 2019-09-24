#include<stdio.h>
int main()
{
  int arr[10],arr1[10],max;
  int top=-1,m,top1=-1;
  printf("\n Enter the number of elements in the array ");
scanf("%d",&m);
printf("\n Enter the elementsof array ");
  for(int i=0;i<m;i++)
{
  top++;
  scanf("%d",&arr[top]);
}
if(top==-1)
printf("\n The stack is empty");
top1++;
arr1[top1]=arr[top];
top--;
while(top!=-1)
{
    if(arr1[top1]<=arr[top])
  {
    top1++;
    arr1[top1]=arr[top];
    top--;
  }
  else
  {
    max=arr[top];
    while(arr1[top1]>max && top1>=0)
    {
      arr[top]=arr1[top1];
top++;
      top1--;
    }
    top--;
    top1++;
    arr1[top1]=max;
  }
}
printf("Sorted stack is \n");
while(top1!=-1)
{
  printf("%d\n",arr1[top1]);
  top1--;
}
}
