#include <stdio.h>

int main()
{
    int n;
    printf("enter size of an array\t");
    scanf("%d",&n);
    int A[n];
    int min,i,j,temp;
//input
        for(i=0;i<n;i++)
    {
    printf("enter the element of an array %d\t ", i+1);

    scanf("%d",&A[i]);

}

//sorting
    for(i=0;i<=n-i;i++)
    {
        min=i;
        for(j=i;j<=n-1;j++)
        {
            if(A[j]<A[min])
                min=j;
        }
        temp=A[i];
        A[i]=A[min];
        A[min]=temp;

    }

    //output

    for(i=0;i<n;i++)
    {
    printf("%d",A[i]);
}
    return 0;

}
