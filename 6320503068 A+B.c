#include<stdio.h>
#include<math.h>
    void main()
    {
        int a,b;
        scanf("%d",&a);
        scanf("%d",&b);
        if (a>=0 && a<=pow(10,9) && b>=0 && b<=pow(10,9) )
        {
            printf("%d",a+b);
        }
    }
