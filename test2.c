#include "student_info.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/time.h>

int main()
{
	int a;
	int i,j;
	int c[40]={0};
	srand(time(NULL));
	for (i= 0; i < sizeof(info)/sizeof(struct student); ++i) {
		printf("%d - %s\n", info[i].id, info[i].name);
	}	
	for(i=0;i<40;i++)	
	{a=rand()%40;
	while(c[a]==1)
	{
		a=rand()%40;
	}
         printf("第%d组:%d - %s\n",i/4+1, info[a].id, info[a].name);
	if((i+1)%4==0) printf("\n");
	c[a]=1;
}
	return 0;
}
