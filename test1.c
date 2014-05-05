#include "student_info.h"
#include <stdio.h>

int main()
{
	int i=0,j,a[40];
	a[i++]=rand()%40;
	while(i<40)
	{
		a[i]=rand()%40;
		for(j=0;j<i;j++)
		{
			if(a[i]==a[j])
			{i--;continue;}
		}
		i++;
	};
	j=0;
	int k=0;
	for ( ; j<40;j++) {

		if((k++)%4==0)
		{
			
			printf("the group of %d \n",k/4+1);
		}
		i=a[j];
		printf("%d - %s\n", info[i].id, info[i].name);

	}
	return 0;
}
