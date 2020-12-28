#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
int n,i;
long int a[10000];
long int sum=0;
scanf("%d",&n);
for (i=0;i<n;i++)
{
    scanf("%ld",&a[i]);
}
for (i=0;i<n;i++)
{
  sum =sum+a[i];
}
printf("%ld",sum);
return 0;
}

