#include<stdio.h>
#include<conio.h>
int ulang (int n);
int main (void)
{
int n;
printf("Masukkan nilai (n) :");
scanf("%d",&n);
ulang (n);
}
int ulang (int n)
{
int i;
for(i=1;i<=n;i++)
printf("Algoritma dan Pemrograman\n");
return(i);
}
