#include<stdio.h>
#include<math.h>


int main()
{
    int i,j,n; ///Iterator

    scanf("%d",&n);

    for(i=0;i<=n;i++)
    {
        for(j=0;j<=i;j++)

            printf("%d ",j);
            printf("\n");
    }

    return 0;
}
