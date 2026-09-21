#include<stdio.h>
#include<math.h>
void main()
          //even ->1
          //odd  ->0
{
int x;
clrscr();
    printf("print a number:");
    scanf("%d", &x);
    printf("%d", x%2==0);
    getch();
    
}