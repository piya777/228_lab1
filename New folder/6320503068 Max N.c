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
            if(max<Num[i])
            {
                max=Num[i];
                lo=i+1;
            }
        }
        printf("%ld %ld",lo ,max);
    }
