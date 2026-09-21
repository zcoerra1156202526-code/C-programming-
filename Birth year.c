#include <stdio.h>
void main()
 {
    int age;
    int birthYear;
    int currentYear = 2026; 
    printf("Enter your age: ");
    scanf("%d", &age);
    birthYear = currentYear - age;
    printf("You were born in (or around): %d\n", birthYear);

    getch();
}
