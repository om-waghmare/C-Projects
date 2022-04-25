#include<stdio.h>

int main()
{
    int a,b,c,d;
    printf("Enter the Four numbers: \n");
    scanf("%d %d %d %d", &a,&b,&c,&d);
    if (a>b)
        if(a>c)
            if (a>d)
            {
               printf("%d is the greatest number\n",a);
            }
 if (b>a)
        if(b>c)
            if (b>d)
            {
               printf("%d is the greatest number\n",b);
            }
 if (c>a)
        if(c>b)
            if (c>d)
            {
               printf("%d is the greatest number\n",c);
            }
 if (d>a)
        if(d>b)
            if (d>c)
            {
               printf("%d is the greatest number\n",d);
            }

    return 0;
}