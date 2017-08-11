#include <stdio.h>

int main(void) {
	int n;
	scanf("%d",&n);  //enter the year
	if(n%4==0)
	{
	printf("leap year");
	}
	else
	{
		printf("not a leap year");
	}
	return 0;
}
