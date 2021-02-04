#include<stdio.h>
#include<math.h>
    void main()
    {
        unsigned long int N;
        scanf("%d",&N);
        if ( N>=0 && N<pow(10,1000000) )
        {
            printf("%d %d",N%3 ,N%11);
        }
    }
