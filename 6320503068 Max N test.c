#include<stdio.h>

    void main()
    {
        long int n;
        scanf("%ld",&n);

        long int Num[n] ,i ,max=0 ,lo=0;
        for( i=0 ; i<n ; i++ )
        {
            scanf("%ld",&Num[i]);
        }

        for( i=0 ; i<n ; i++ )
        {
            if(Num[0]<Num[i])
            {
                Num[0]=Num[0];
                lo=i+1;
            }
        }
        printf("%ld %ld",lo ,max);
    }
