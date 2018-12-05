#include<stdio.h>
#include<math.h>
main()
{
 int a,i=-1,s[100];
 scanf("%d",&a);
 while(a)
 {
  i++;
  s[i]=a%10;
  a/=10;
 }
 for(;i>=0;i--)
 {
  printf("%d ",s[i]);
 }
}
