#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n,i,j,d1=0,d2=0,d;
    static int a[10000][10000];

    //geting no. of row column
    scanf("%d",&n);
    //getting matrix value
  for (i = 0; i < n; ++i)
            {
                for (j = 0; j < n; ++j)
                {
                    scanf("%d", &a[i][j]);
                }
            }

        for (i = 0; i < n; ++i)
            {
                d1 = d1 + a[i][i];
                d2 = d2 + a[i][n - i - 1];
            }
    d=d1-d2;
    printf("%d",abs(d));
    return 0;
}
