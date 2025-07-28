#include <stdio.h>
int main(){
    int n=132;
    int r;
    int rev=0;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    printf("The reverse number is %d",rev);
    return 0;
}
