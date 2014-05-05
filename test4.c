#include "student_info.h"
#include <stdio.h>

int main()
{
	int i=0,n,j,a[40]={0};
	srand(time(NULL));
        for (i= 0; i < sizeof(info)/sizeof(struct student); ++i) {
	n=rand()%40;
 	while(a[n]==1)
	{
	    n=rand()%40;
	}
        printf("第%d组：%d - %s\n",i/4+1, info[n].id, info[n].name);
	if((i+1)%4==0) printf("\n");
	a[n]=1;
}	
	return 0;
}
