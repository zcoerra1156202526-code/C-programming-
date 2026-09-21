#include<stdio.h>
void main()
{
int num1, num2, num3, smallest;
clrscr();
    printf("Enter the three numbers :");
    scanf("%d %d %d ", &num1, &num2, &num3);
    smallest = (num1 < num2 < num3)? num1;num2;
    printf("The smallest number  is : %d\n", smallest);
    getch();
    
}