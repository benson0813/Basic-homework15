#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	int h,m;
	
	printf("請輸入現在的時間:\n");
	scanf("%d%d",&h,&m);
	
	if((h>=7)&&(h<=16))
	{
		if((h==7)&&(m>=30))
			printf("現在是上學時間\n");
		else if((h==16)&&(m<=59))
			printf("現在是上學時間\n");
		else if((h>=8)&&(h<=15))
			printf("現在是上學時間\n");
		else
			printf("現在是自由時間\n");	
	}
	else
		printf("現在是自由時間\n");
	system("pause");
	return 0;
	
}
