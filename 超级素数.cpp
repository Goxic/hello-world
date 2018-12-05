#include<stdio.h>
#include<math.h>
int n[4]={10},k;
bool is1(int a)
{
 for(int i=2;i<=sqrt(a);i++)
 {
  if(a%i==0)
  {
   return false;
  }
 }
 return true;
}
bool is2(int a)
{
 int i=0;
 while(a)
 {
  n[i]=a%10;
  a/=10;
  i++;
 }
 k=i;
 a=0;
 for(i=0;i<k;i++)
 {
  a+=n[i];
 }
 return is1(a);
}
bool is3(int a)
{
 a=1;
 for(int i=0;i<k;i++)
 {
  if(n[i]==0)
   return false;
  a*=n[i];
 }
 return is1(a);
}
bool is4(int a)
{
 a=0;
 for(int i=0;i<k;i++)
 {
  a+=n[i]*n[i];
 }
 return is1(a);
}
main()
{
 int i;
 for(i=100;i<10000;i++)
 {
  if(is1(i)&&is2(i)&&is3(i)&&is4(i))
   printf("%d\n",i);
 }
}
