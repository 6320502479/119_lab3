#include <stdio.h>
int main()
{
    int k,m=2,in;
    scanf("%d",&k);
    in=k;
    int i=0,mod[3];
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
    {
        printf("%d is a Lucky Number.",in);
    }
    else
    {
        printf("%d is not a Lucky Number.",in);
    }

}
