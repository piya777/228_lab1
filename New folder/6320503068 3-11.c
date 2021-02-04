#include<stdio.h>
#include<math.h>
    void main()
    {
        unsigned long long int N;
        scanf("%llu",&N);
        if ( N>=0 && N<pow(10,1000000) )
        {
            printf("%llu %llu",N%3 ,N%11);
        }
    }
