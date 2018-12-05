#include<stdio.h>
#include<math.h>
main()
{
 int a;
 bool is;
 while(1)
 {
  is=true;
  printf(" ‰»Î");
  scanf("%d",&a);
  for(int i=2;i<=sqrt(a);i++)
  {
   if(a%i==0)
   {
    is=false;
    break;
   }
  }
  if(is)
   printf("YES");
  else
   printf("No");
 }
}
