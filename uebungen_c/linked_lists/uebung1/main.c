#include <stdio.h>

int test(int a);

int main(void)

{
    int max,i;
    printf("Geben Sie eine Ganzzahl ein: \n");
    scanf("%d",&max);
    for(i=0;i <= max;i++)
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