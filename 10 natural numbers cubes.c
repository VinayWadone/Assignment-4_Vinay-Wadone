#include<stdio.h>
int main()
{
    int i=1,j=0;
    do
    {
    j=i*i*i;
    printf("\n%d\n",j);
    i++;
    }
    while(i<=10);
    return 0;

}
