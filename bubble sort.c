#include <stdio.h>
int main(){
    int n;

    printf("enter size of an array\t");
    scanf("%d",&n);
    int a[n];
   int temp;
    for (int i=0; i<n; i++)
    {
        printf("Enter the element at %d\t", i+1);
        scanf("%d",&a[i]);
    }
       {
           for(int i=0; i<n-i; i++)
           {
               for(int j=0; j<=n-i-2; j++)
               {
                   if(a[j] >a[j+1])
                   {
                       temp= a[j];
                       a[j]= a[j+1];
                       a[j+1]=temp;
                   }
               }
           }
       }
        printf("sorted array");
        for(int i=0; i<n; i++)
        {
            printf("%d\t",a[i]);
        }
    return 0;

}
