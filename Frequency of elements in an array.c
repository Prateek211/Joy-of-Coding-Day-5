#include<stdio.h> 
int main() 
{ 
    int n,i,a[100]; 
    printf("Enter size of array: \n"); 
    scanf("%d",&n);
    printf("Enter elements in array: \n"); 
    for(i=0;i<n;i++) 
        scanf("%d",&a[i]); 
    int freq[100]={0};
    for(i=0;i<n;i++) 
        freq[a[i]]++;
    printf("\nCount:\n");
    for(i=0;i<100;i++) 
        if(freq[i]) 
        printf("%d is %d\n",i,freq[i]);
    return 0;
}