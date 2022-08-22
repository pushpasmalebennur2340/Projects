#include<stdio.h>
void main()
{
int a[2][3],i,j;
for(i=0;i<2;i++)
{
    for(j=0;j<3;j++)
    {
        printf("enter elements ");
        scanf("%d ",&a[i][j]);
    }
}
for(i=0;i<2;i++)
{
    for(j=0;j<3;j++)
    {
       // printf("enter elements ");

       printf("%d ",a[i][j]);
    }

}
}

