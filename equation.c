//求解如下方程组
//ax + by = c
//dx + ey = f
//注意输入/输出，数据类型
#include<stdio.h>
main()
{
 float a,b,c,d,e,f,x,y;
 printf("a,b,c\n");
 scanf("%f%f%f",&a,&b,&c);
 printf("d,e,f\n");
 scanf("%f%f%f",&d,&e,&f);
  if((a==0&&b==0&&c!=0)||(d==0&&e==0&&f!=0))
  printf("no answer");
  else
  {
   if(a*f*e==b*d*f==c*e*d)
   printf("infinite answer");
   else
   {
    x=(c*e-f*b)/(a*e-d*b);
    y=(c*d-f*a)/(d*b-a*e);
    printf("x=%.2f,y=%.2f",x,y);
   }
  }
}
