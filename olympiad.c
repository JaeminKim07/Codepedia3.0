#include <stdio.h>
#include <stdlib.h>

int main()
{
    while(1)
    {
        int n,m,o,temp,temp2;
        int t[12]={0,};
        int s[2]={0,};
        int f[2]={0,};
        int y[12]={1,2,3,4,5,6,7,8,9,10,11,12};
        printf("_____________________________________________\n");
        printf("QUARTERFINALS: Top Score 100\n");
        printf("12 test takers\n\n");
        for(n=1;n<=12;n++)
        {
            while(1)
            {
                printf("Test taker %02d: ",n);
                scanf("%d",&t[n-1]);
                if(t[n-1]>=0&&t[n-1]<=100)
                {
                    break;
                }
                else
                {
                    printf("\nNumber Out Of Range\n\n");
                }
            }
        }
        for(m=0;m<=11;m++)
        {
            for(o=m+1;o<=11;o++)
            {
                if(t[m]<t[o])
                {
                    temp=t[o];
                    t[o]=t[m];
                    t[m]=temp;
                    temp2=y[o];
                    y[o]=y[m];
                    y[m]=temp2;
                }
            }
        }
        printf("\nFinalist:\n");
        printf("Rank 01: Test Taker %02d: %d\n",y[0],t[0]);
        printf("\nSemi-Finalists:\n");
        printf("Rank 02: Test Taker %02d: %d\n",y[1],t[1]);
        printf("Rank 03: Test Taker %02d: %d\n",y[2],t[2]);
        printf("\nBronze Prize Winners:\n");
        printf("Rank 04: Test Taker %02d: %d\n",y[3],t[3]);
        printf("Rank 05: Test Taker %02d: %d\n",y[4],t[4]);
        printf("\n\n");
        printf("SEMI-FINALS: Top Score 30\n");
        printf("Second: %02d VS. Third: %02d\n\n",y[1],y[2]);
        while(1)
            {
                printf("Second %02d: ",y[1]);
                scanf("%d",&s[0]);
                if(s[0]>=0&&s[0]<=30)
                {
                    break;
                }
                else
                {
                    printf("\nNumber Out Of Range\n\n");
                }
            }
        while(1)
            {
                printf("Third  %02d: ",y[2]);
                scanf("%d",&s[1]);
                if(s[1]>=0&&s[1]<=30)
                {
                    break;
                }
                else
                {
                    printf("\nNumber Out Of Range\n\n");
                }
            }
        printf("\n");
        if(s[0]>=s[1])
        {
            printf("FINALS: Top Score 7\n");
            printf("Champion %02d VS. Challenger %02d\n\n",y[0],y[1]);
            while(1)
            {
                printf("<Champion> %02d: ",y[0]);
                scanf("%d",&f[0]);
                if(f[0]>=0&&f[0]<=7)
                {
                    break;
                }
                else
                {
                    printf("\nNumber Out Of Range\n\n");
                }
            }
            while(1)
            {
                printf("Challenger %02d: ",y[1]);
                scanf("%d",&f[1]);
                if(f[1]>=0&&f[1]<=7)
                {
                    break;
                }
                else
                {
                    printf("\nNumber Out Of Range\n\n");
                }
            }
            printf("\n");
            if(f[0]>=f[1])
            {
                printf("Grand : TEST TAKER %02d (  Final %d/7)\n",y[0],f[0]);
                printf("Gold  : TEST TAKER %02d (  Final %d/7)\n",y[1],f[1]);
                printf("Silver: TEST TAKER %02d (S Final %d/30)\n",y[2],s[1]);
                printf("Bronze: TEST TAKER %02d (Q Final %d/100)\n",y[3],t[3]);
                printf("Bronze: TEST TAKER %02d (Q Final %d/100)\n",y[4],t[4]);
            }
            else
            {
                printf("Grand : TEST TAKER %02d (  Final %d/7)\n",y[1],f[1]);
                printf("Gold  : TEST TAKER %02d (  Final %d/7)\n",y[0],f[0]);
                printf("Silver: TEST TAKER %02d (S Final %d/30)\n",y[2],s[1]);
                printf("Bronze: TEST TAKER %02d (Q Final %d/100)\n",y[3],t[3]);
                printf("Bronze: TEST TAKER %02d (Q Final %d/100)\n",y[4],t[4]);
            }
        }
        else
        {
            printf("FINALS: Top Score 7\n");
            printf("Champion %02d VS. Challenger %02d\n\n",y[0],y[2]);
            while(1)
            {
                printf("<Champion> %02d: ",y[0]);
                scanf("%d",&f[0]);
                if(f[0]>=0&&f[0]<=7)
                {
                    break;
                }
                else
                {
                    printf("\nNumber Out Of Range\n\n");
                }
            }
            while(1)
            {
                printf("Challenger %02d: ",y[2]);
                scanf("%d",&f[1]);
                if(f[1]>=0&&f[1]<=7)
                {
                    break;
                }
                else
                {
                    printf("\nNumber Out Of Range\n\n");
                }
            }
            if(f[0]>=f[1])
            {
                printf("Grand : TEST TAKER %02d (  Final %d/7)\n",y[0],f[0]);
                printf("Gold  : TEST TAKER %02d (  Final %d/7)\n",y[2],f[1]);
                printf("Silver: TEST TAKER %02d (S Final %d/30)\n",y[1],s[0]);
                printf("Bronze: TEST TAKER %02d (Q Final %d/100)\n",y[3],t[3]);
                printf("Bronze: TEST TAKER %02d (Q Final %d/100)\n",y[4],t[4]);
            }
            else
            {
                printf("Grand : TEST TAKER %02d (  Final %d/7)\n",y[2],f[1]);
                printf("Gold  : TEST TAKER %02d (  Final %d/7)\n",y[0],f[0]);
                printf("Silver: TEST TAKER %02d (S Final %d/30)\n",y[1],s[0]);
                printf("Bronze: TEST TAKER %02d (Q Final %d/100)\n",y[3],t[3]);
                printf("Bronze: TEST TAKER %02d (Q Final %d/100)\n",y[4],t[4]);
            }
        }
    }
}