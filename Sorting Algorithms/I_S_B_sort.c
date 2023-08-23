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

/*void selectionSort(int a[], int n)
{
    int i,pos,temp,smallest,current;
    for(current=0;current<n-1;current++)
    {
        smallest = a[current];
        pos = current;
        for(i=current+1;i<=n-1;i++, compcount++)
            if(a[i]<smallest)
            {
                smallest=a[i];
                pos=i;
            }
        temp=a[current];
        a[current]=a[pos];
        a[pos]=temp;
    }
}*/

/*void insertionSort(int a[], int n)
{
    int i,j,key;
    for(i=1;i<n;i++)
    {
        key=a[i];
        for(j=i-1;j>=0;j--, compcount++)
        {
           if(key<a[j])
               a[j+1]=a[j];
           else
             break;
        }
    a[j+1]=key;
    }
}*/

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
    //insertionSort(a, n);
    //selectionSort(a, n);
    printf("\nThe Sorted Output is:");
    display(a, n);
    printf("\nTotal number of comparison = %d",compcount++);
    return 0;
}