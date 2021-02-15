#include <stdio.h>
int main()
{
    int k,m=2,i=0;
    scanf("%d",&k);
    if(k>=1 && k<=1000)
    {
        while(k != 0)
    {
        if(k!=0)
        {
            if(k%m==0)
            {
            k=k/m;
            printf("%d\n",m);
            }
            else
            m++;
            if(k<m)
            break;

        }
    }
        printf("0");
    }
}
