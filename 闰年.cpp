#include<stdio.h> 
int main() 
{
 int a;
 while(1)
 {
  scanf("%d",&a);
  if((a%4==0&&a%100!=0)||a%400==0)
   printf("YES\n");
  else
   printf("NO\n");
 }
}
