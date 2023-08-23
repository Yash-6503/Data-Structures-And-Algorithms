#include<stdio.h>
int compcount=0;

void accept(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
}

void display(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
}

void bubbleSort(int a[], int n)
{
    int i,temp,pass;
    for(pass=1;pass<n;pass++)
    for(i=0;i<=n-pass-1;i++)
    {
        compcount++;
        if(a[i]>a[i+1])
        {
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
}

int main()
{
    int a[10],n;
    printf("\nEnter how many numbers:");
    scanf("%d",&n);
    printf("\nEnter the Unsorted elements:");
    accept(a, n);
    bubbleSort(a, n);
    printf("\nThe Sorted Output is:");
    display(a, n);
    printf("\nTotal number of comparison = %d",compcount++);
    return 0;
}