#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
void push();
int main()
{
    inserted();
   return 0;
}
void push()
{
    /*
    entering data at the end of the list
    O(1)
    because it know the all location of element in RAM
    */
   int arr[]={1,2,3,4,5};
   int no,num;
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
    int arr[]={1,2,3,4,5};
    int loc;
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
    int arr[]={1,2,3,4,5};
    int loc,i,bef;
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
    int arr[500]={1,2,3,4,5};
    int loc,i,bef,data,temp;
    printf("enter the location you want to enter");
    scanf("%d",&loc);
    printf("enter the data you want to enter");
    scanf("%d",&data);
    for(i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
    bef=sizeof(arr)/sizeof(arr[0]);
    for(i=;i<bef+1;i++)
    {
        temp=arr[loc];
        arr[loc+1]=temp;
        loc++;
    }
    arr[loc]=data;
    printf("\n");
    for(i=0;i<6;i++)
    {
        printf("%d\t",arr[i]);
    }
}
