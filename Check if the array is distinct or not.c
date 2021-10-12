#include<stdio.h>
int main()
{
    int a[100],i,n,j,p=0;
    printf("Enter the number of elements:\n");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=1;i<n;i++)
        for(j=0;j<i;j++)
            if(a[i]==a[j])
            {
                p++;
            }
    if(p==0)
        printf("The array elements are distinct\n");
    else
        printf("The array elements are not distinct\n");
    return 0;
}
