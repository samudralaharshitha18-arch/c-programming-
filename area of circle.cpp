#include<stdio.h>
int main()
{

	//declare variables
	float len,wid,area;
	//take inputs
	printf("enter length & width of rectangle (in cm):");
	scanf("%f%f",&len,&wid);
	//calculate area
	area = len * wid;
	// display result
	printf("area of rectangle=%3f.cm\n",area);
	return 0;
}
