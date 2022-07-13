#include <stdio.h>
int main() 
{
   int  present_month,present_year,person_month,person_year;
   int age_year, age_month,age;
   printf("Enter present_year:\n ");
   scanf("%d", &present_year);
   printf("Enter a present_month:\n ");
   scanf("%d", &present_month);
   printf("Enter person_year:\n ");
   scanf("%d", &person_year);
   printf("Enter a person_month:\n ");
   scanf("%d", &person_month);
   if(person_month>present_month)
	{
    age_year=(present_year-person_year)-1;
    printf("age in year:%d\n",age_year);
    age_month=(12-person_month)+present_month;
    printf("age in month:%d\n",age_month);
	}
	else
	{
	age_year=present_year-person_year;
	printf("age in year:%d\n",age_year);
	age_month=present_month-person_month;
	printf("age in month:%d\n",age_month);
	}
   
   printf("The present age of the person is %d year %d month",age_year,age_month);
   
   return 0;
}
