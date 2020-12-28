#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n,i,a[1000];
    float p=0,ne=0,z=0;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
         if(a[i]>0)
         p++;
         else if(a[i]<0)
         ne++;
         else
         z++;
}


    printf("%f\n%f\n%f",p/n,ne/n,z/n);
    return 0;
}
