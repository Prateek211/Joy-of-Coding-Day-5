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
    printf("Enter the position where you want to push the element:\n"); 
    scanf("%d", &p);
    printf("Enter the element to be pushed:\n");
    scanf("%d", &v);
    for(i=n-1;i>=p-1;i--)
        a[i+1]=a[i];
        a[p-1]=v;
    printf("The array after the adding is:\n");
    for(i=0;i<=n;i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}