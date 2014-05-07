#include<malloc.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
void fun3()
{
   char *a="Hello world";
   *a='a';
   puts(a);
}
void fun2()
{
   char *p=NULL;
   *p='s';
   printf("%c\n",*p);
}
void fun1()
{
    int i,a[5]={1,2,3,4,5};
    a[6]='a';
   for(i=0;i<5;i++)
      printf("%d\n",a[i]);
}
int main()
{ 
    printf("the 1st\n");
    fun1();
    printf("the 2nd\n");
    fun2();
    printf("the 3rd\n");
    fun3();
    return 0;
}
