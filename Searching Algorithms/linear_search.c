#include<stdio.h>
#include<stdlib.h>
int compcount=0;

void accept(int a[], int n)
{
    int i;
    printf("\nEnter %d elements:",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
}

int linearSearch(int a[],int n,int key)
{
    int i;
    for(i=0;i<n;i++)
    {
        compcount++;
        if(a[i]==key)
            return i;
    }
    return -1;
}

void main()
{
    int a[10],n,key,pos;
    printf("\nenter how many numbers:");
    scanf("%d",&n);
    accept(a,n);
    printf("\nenter the key to search:");
    scanf("%d",&key);
    pos=linearSearch(a,n,key);
    if(pos==-1)
        printf("\n%d is not found in array",key);
    else
        printf("\n%d is found at position %d",key,pos);
    printf("\nTotal number of comparisons = %d",compcount);
}