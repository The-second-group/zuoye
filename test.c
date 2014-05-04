#include "student_info.h"
#include <stdio.h>

int main()
{
	int a[40]={0};
	int i,ran;
	srand(time(NULL));
	for (i=0 ;i < sizeof(info)/sizeof(struct student); ++i) {
		ran=rand()%40;
		while(a[ran]==1)
		{
		  ran=rand()%40;
		}
		printf("team:%d  %d - %s\n",i/4+1,info[ran].id, info[ran].name);
	        if((i+1)%4==0) printf("\n");
		a[ran]=1;
	}
	return 0;
}
