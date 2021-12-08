#include<stdio.h>
main()
{
	int x,y,z,a;
	x=(2*3)+(4*5);
	y=(7*(6%15))/9;
	z=(4+8)/2+(4*2);
	a=(0>5)||(0<0);
    printf("\n%d \n%d \n%d \n%d",x,y,z,a);
    printf("\n%d",3%2);
    printf("\n%d",'A');
    printf("\n%c",'A'+10);
    printf("%d",printf("\ngood"));
    printf("\n%d",- -2);
    printf("\n%d",!10);
    printf(5>3? "\n5 is max": "\n3 is max");
	}
