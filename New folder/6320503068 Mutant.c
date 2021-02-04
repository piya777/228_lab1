#include<stdio.h>
    void main()
    {
        int m ,n ,t ,timechange,i;
        scanf("%d %d %d",&m ,&n ,&t);
        fflush (stdin);
        char first,finish;
        scanf("%c",&first);
        if( n>0 && n<1000 && m>0 && m <1000 && t>1 && t<1000000000 && n<t && m<t)
        {
            for( i=1 ; i<=t ; i++ )
            {
                if(i%(1+n+m)==0)
                {
                    timechange++;
                }
            }
            if(timechange%2 != 0)
            {
                if(first='L')
                {
                    finish='R';
                }
                else
                {
                    finish='L';
                }
            }
            printf("%c",finish);
        }
    }
