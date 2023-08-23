#include<stdio.h>
int compcount = 0;

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

void selectionSort(int a[], int n)
{
    int i, temp, current, pos, smallest;
    for(current=0;current<n-1;current++)
    {
        smallest=a[current];
        pos=current;
        for(i=current+1;i<=n-1;i++,compcount++)
            if(a[i]<smallest)
            {
                smallest=a[i];
                pos=i;
            }
         temp=a[current];
         a[current]=a[pos];
         a[pos]=temp;
    }
}

int main()
{
    int a[10],i,n;
    printf("\nEnter how many numbers:");
    scanf("%d",&n);
    printf("\nEnter the unsorted elements:");
    accept(a,n);
    selectionSort(a,n);
    printf("\nThe Sorted Output is:\n");
    display(a, n);
    printf("\nTotal number of comparisons is %d",compcount);
    return 0;

}