#include <stdio.h>
int main()
{
    int in,m[7]={2,3,5,7,11,13,17},mod,h,out[50],i=0;
    scanf("%d",&in);
    if(in>=1 && in<=1000)
    {
        while(in != 0)
    {
        if(in!=0)
        {
            if(in%m[i]==0)
            {
            in=in/m[i];
            }
            else
            i++;
            if(in<m[i])
            break;
            printf("%d\n",m[i]);
        }
    }
        printf("0");
    }
}
