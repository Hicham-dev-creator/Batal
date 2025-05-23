#include <stdio.h>
int main ()
{
    int m,n,i;
    do
    {
        printf("Entrer un nombre entre 1 et 10 :\n",i);
        scanf("%d",&n);
        i++;
    }
    while(n<0 || n>=10);
    for (i=1; i<=10; i++)
    {
        m=i*n ;
        printf("%d * %d = %d \n",m,n,i);
    }

    return 0;
}
