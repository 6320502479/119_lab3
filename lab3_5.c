#include <stdio.h>
int main()
{
    int k,m=2,i=0,mod[3],j;
    scanf("%d",&k);
    j=k;
        while(k != 0)
    {
        if(k==1)
            printf("1\n");
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
        printf("%d is a Lucky Number.",j);
    else
        printf("%d is not a Lucky Number.",j);
}
