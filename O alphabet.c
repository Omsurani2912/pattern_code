#include<stdio.h>
#include<stdlib.h>

int main()
{
int i,j,k;
system("color 0c");
for(i=0;i<=11;i++)
{
for(j=0;j<=2;j++)
{
if(i==0&&j<2||i==1&&j<2||i==11&&j<2||i==10&&j<1)
{
printf(" ");
}
else
{
printf("*");
}
}
for(k=1;k<=6;k++)
{
if(i>=0&&i<2||i>9&&i<=11)
{
printf("**");
}
else
{
printf("  ");
}
}
for(j=0;j<=2;j++)
{
if(i==0&&j>0||i==1&&j>1||i==11&&j>0||i==10&&j>1)
{
printf(" ");
}
else
{
printf("*");
}
}
printf("\n");
}

}
