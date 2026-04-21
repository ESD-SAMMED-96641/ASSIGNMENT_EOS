#include"circle.h"
#include"rectangle.h"
#include"square.h"
#include<stdio.h>

int main(){

	float	length = 3 , breadth = 8.5 , radius = 3.5 , side = 9.8 ;
	printf("Circle Area = %.2f\n", circle_area(radius));
    printf("Square Area = %.2f\n",area_square(side));
    printf("Rectangle Area = %.2f\n",area_rectangle(length, breadth));
	return 0;
}
