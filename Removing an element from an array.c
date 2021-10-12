#include<stdio.h>
int main()
{
    int a[100],i,p,v,n;
    printf("Enter the number of elements:\n");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the position where you want to pull the element:\n"); 
    scanf("%d", &p);
    if(p>n)
    printf("Out of Bounds\n");
    else
    {
        for(i=p-1;i<n-1;i++)
        {
            a[i]=a[i+1];
        }
        printf("The array after the element deletion is:\n");
        for(i=0;i<n-1;i++)
        printf("%d\n", a[i]);
    }
    return 0;
}
