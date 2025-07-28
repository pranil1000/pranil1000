#include <stdio.h>
int main(){
    int count =0;
    printf("prime number less than 20\n");
    printf("1\t");
    for (int i= 2;i<20;i++)
    {
        for(int j= 1;j<=i/2 ;j++)
        {
            if (i%j==0)
                count ++;
        }
         if (count ==1)
                printf("%d\t",i);
         count =0;
    }
    return 0;
}
