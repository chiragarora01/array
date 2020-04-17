#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
void push();
int main()
{
   return 0;
}
void push()
{
    /*
    entering data at the end of the list
    O(1)
    because it know the all location of element in RAM
    */
   int arr[500];
   int no,num,x;
    printf("enter the number of elements");
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
        printf("enter element %d\t",i);
        scanf("%d",&arr[i]);
    }
    no=sizeof(arr)/sizeof(arr[0]);
    printf("\nenter the value you want to put at end \t");
    scanf("%d",&num);
    arr[no]=num;
    for (int i=0;i<6;i++)
    {
        printf("%d\t",arr[i]);
    }
}

void lookup()
{
    /*
    searching also take
    O(1)
    because it know all the location
    */
    int arr[500];
    int loc,x;
     printf("enter the number of elements");
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
        printf("enter element %d\t",i);
        scanf("%d",&arr[i]);
    }
    printf("enter the location you want to visit");
    scanf("%d",&loc);
    printf("%d",arr[loc]);
}

void deleted()
{
    /*
    we need to change the location of other array elements it can either be a first element which is a worst case
    in that we have of change the location of all the elements means time complexity of ---------------> O(n)
    or in case we want to remove last element we don't need to change any address means time complexity of ---------------> O(1)
    */
    int arr[500];
    int loc,i,bef,x;
     printf("enter the number of elements");
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
        printf("enter element %d\t",i);
        scanf("%d",&arr[i]);
    }
    printf("enter the location you want to delete");
    scanf("%d",&loc);
    for(i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
    bef=sizeof(arr)/sizeof(arr[0]);

    for(i=0;i<bef+1;i++)
    {
        arr[loc]=arr[loc+1];
        loc++;
    }
    printf("\n");
    for(i=0;i<bef;i++)
    {
        printf("%d\t",arr[i]);
    }
}

void inserted()
{
    /*
    we need to change the location of other array elements it can either be a first element which is a worst case
    in that we have of change the location of all the elements means time complexity of ---------------> O(n)
    or in case we want to add last element we don't need to change any address means time complexity of ---------------> O(1)
    */
    int arr[500];
    int loc,i,bef,data,temp,x;
    printf("enter the number of elements");
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
        printf("enter element %d\t",i);
        scanf("%d",&arr[i]);
    }
    printf("enter the location you want to enter");
    scanf("%d",&loc);
    printf("enter the data you want to enter");
    scanf("%d",&data);
    x++;

    bef=sizeof(arr)/sizeof(arr[0]);
    for(i=x;i>=loc;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[loc-1]=data;
    printf("\n");
    for(i=0;i<x;i++)
    {
        printf("%d\t",arr[i]);
    }
}
