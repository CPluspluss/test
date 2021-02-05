#include<stdio.h>
#include"t.hello"
void main()
{	
	struct date day;
	day.day = 1;
	day.month = 2;
	day.year = 2012;
	printf("%i/%.2i/%.2i",day.year,day.month,day.day);
	printf("%d\n",f(2));
}
