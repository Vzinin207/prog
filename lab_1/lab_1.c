#include <stdio.h>
int main()
{
    float a,b,x,sum,h;
    printf("Введите число a ");
    scanf("%f",&a);
    printf("Введите число b ");
    scanf("%f",&b);
    printf("Введите число x ");
    scanf("%f",&x);
    sum=a+b;
    if (sum<x)
    {
        h=sum/x;
        printf("частное суммы параметров a, b и параметра x %.3f\n",h);
        return 0;
    }
    if (sum>x)
    {
        h=sum/x;
        printf("частное суммы параметров a, b и параметра x %.3f\n",h);
        return 0;
    }
    if (sum==x);
    {
        h=b/x;
        printf("частное параметра b и параметра x %.3f\n",h);
        return 0;
    }
            
}
