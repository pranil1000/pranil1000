#include <stdio.h>
int main (){
    int n;
    printf("Enter a value number");
    scanf("%d",&n);
    int value = n;
    int rem;
    int rev =0;
    while (n!=0){
        rem =n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if (value== rev){
        printf("it is palindrome");
    }
    else{
        printf("it is not palindrome");
    }
    return 0;
}

