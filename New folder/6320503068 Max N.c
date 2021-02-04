#include<stdio.h>

    void main()
    {
        int n;
        scanf("%d",&n);

        int Num[n] ,i ,max=0 ,lo=0;
        for( i=0 ; i<n ; i++ )
        {
            scanf("%d",&Num[i]);
        }

        for( i=0 ; i<n ; i++ )
        {
            if(max<Num[i])
            {
                max=Num[i];
                lo=i+1;
            }
        }
        printf("%d %d",lo ,max);
    }
