#include<stdio.h>
    void main()
    {
        unsigned long long int N ,mthree ,mele;
        scanf("%llu",&N);
        mthree=N%3;
        mele=N%11;
        printf("%llu %llu",mthree ,mele);
    }
