#include<stdio.h>
main()
{
int a,b,i,j,c;
scanf("%d",a);
for(i=2;i<=a;i++)
{
c=1;
for(b==2;b=i;b++)
{
if(i%b==0)
{
c=c+0;
}
else{c++;}
}
if(c==i-1)
{
printf("%d",b);
}
}
return(0);
}