#include <stdio.h>
int main()
{
    int k,m=2,in;
    scanf("%d",&k);
    in=k;
    int i=0,mod[3]={0,0,0},c=0;
        while(k != 0)
    {
        if(k!=0)
        {
            if(k%m==0)
            {
            k=k/m;
            mod[i]=m;
            i++;
            }
            else
            m++;
            if(k<m)
            break;
        }
    }
    if(mod[0]!=mod[1] && mod[1]!=mod[2] && mod[0]!=mod[2])
     c=1;
    if(mod[2]==0)
     c=0;
    if(c==1)
    {
        printf("%d is a Lucky Number.",in);
    }
   else if(c==0)
    {
        printf("%d is not a Lucky Number.",in);
    }
}



