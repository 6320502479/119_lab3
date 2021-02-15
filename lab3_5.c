#include <stdio.h>
int main()
{
    int k,m=2;
    scanf("%d",&k);
    int in=k;
    int i=0,mod[3]={0,0,0},c=0;
        while(in != 0)
    {
        if(in!=0)
        {
            if(in%m==0)
            {
            in=in/m;
            mod[i]=m;
            i++;
            }
            else
            m++;
            if(in<m)
                break;
        }
    }

    if(mod[0]!=mod[1] && mod[1]!=mod[2] && mod[0]!=mod[2])
     c=1;
    if(mod[2]==0)
     c=0;
    if(c=1)
    {
        printf("%d is a Lucky Number.",k);
    }
   else if(c==0)
    {
      printf("%d is not a Lucky Number.",k);
    }


}



