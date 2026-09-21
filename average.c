#include<stdio.h>
void main()
{
float num1, num2, num3, average;
clrscr();
    printf("Enter the three numbers :");
    scanf("%f %f %f ", &num1, &num2, &num3);
    average = (num1 + num2 + num3)/3.0;
    printf("The average is : %2f\n", average);
    getch();
    
}