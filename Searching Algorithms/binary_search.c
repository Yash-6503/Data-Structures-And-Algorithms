#include<stdio.h>
#include<stdlib.h>
int compcount=0;
int binarySearch(int A[],int n,int key)
{
    int begin=0,end=n-1,mid;
    while(begin<=end)
    {
        compcount++;
        mid=(begin+end)/2;
        if(key==A[mid])
           return mid;
        else if(key<A[mid])
           end=mid-1;
        else
           begin=mid+1;

    }
    return -1;
}
void accept(int A[], int n)
{
    int i;
    printf("\nenter the %d elements in sorted order:",n);
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
    
}

void main()
{
    int A[20],n,key,pos;
    printf("\n How many numbers:");
    scanf("%d",&n);
    accept(A,n);
    printf("\nenter the key to be searched:");
    scanf("%d",&key);
    pos = binarySearch(A,n,key);
    if(pos==-1)
       printf("%d not found in the array",key);
    else
       printf("%d found at position %d",key,pos);
    printf("\n the total number of comparisons = %d",compcount);

}