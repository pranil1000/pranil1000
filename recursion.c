#include <stdio.h>
int fact(int n);
int main()
{
    int(f)=fact(4);
    printf("The factorial is %d",f);
    return 0;
}
int fact (int n)
{
    if(n==1)
    return 1;
    else
        return n*fact(n-1);

}


