#include <stdio.h>
int main() 
{
   int  present_month,present_year,person_month,person_year;
   int year, month,t1,t2,age;
   printf("Enter present_year:\n ");
   scanf("%d", &present_year);
   printf("Enter a present_month:\n ");
   scanf("%d", &present_month);
   printf("Enter person_year:\n ");
   scanf("%d", &person_year);
   printf("Enter a person_month:\n ");
   scanf("%d", &person_month);
   t1=present_year-person_year;
   t2=present_month-person_month;
   printf("The present age of the person is %d year %d month",t1,t2);
   
   return 0;
}