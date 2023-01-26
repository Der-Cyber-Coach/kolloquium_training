#include <stdio.h>

int test(int a);

int main(void)

{
    for(int i =0; i <= 199;i++)
    {
    printf("%d\n",test(i));
    };
    return 0;
}



int test(int a) 
{
    int b = 12;

    return a+b;

}