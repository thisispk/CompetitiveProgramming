#include<stdio.h>
int main()
{
 int i,j,k,l,rev;
 scanf("%d",&i);
 for(int f=0;f<i;f++)
 {
 rev=0,k=0;
 scanf("%d",&j);
 while(j!=0)
 {
 k=j%10;
 rev=(rev*10)+k;
 j=j/10;
 }
 printf("%d\n",rev);
 }
 return 0;
}
