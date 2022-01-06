#include<stdio.h>
using namespace std;
int main()
{
    int a,i,k;
    printf("\n%d",a);
    scanf("%d",&a);
    for(i=1;i<=10;i++)
    {
        k=a*i;
        printf("\n%d*%d=%d",a,i,k);
    }
}