#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n = 8; 
    int i, j=1; 
    for (i=1; i<=n; i++)
    {
        printf("%d\n",j);
        j*=2;
    }
    system("Pause");
    return 0; 
}
