#include <stdio.h>
int main()
{
    int point[5][4],i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<4;j++)
            scanf("%d",&point[i][j]);
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<4;j++)
            printf("%d ",point[i][j]);
            printf("\n");
    }
}
