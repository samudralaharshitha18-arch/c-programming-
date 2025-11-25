
#include<stdio.h>
#include<math.h>
int main()
{
	double num,root;
	//intput
	printf("enter an number:");
	scanf("%lf",&num);
	root=sqrt(num);
	printf("the square root of %.2lf is %.2lf.",num,root);
	return 0;
}
