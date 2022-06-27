#include <stdio.h>
int main()
{
    int num;
    int reversedNum;
    int units,tens,hundreds;
    printf("Enter a three digit number : ");
    scanf("%d", &num);
    units=num%10;
    tens=(num/10)%10;
    hundreds=num/100;
    reversedNum=units;
    reversedNum=reversedNum*10+tens;
    reversedNum=reversedNum*10+hundreds;
    printf("Reversed Number of %d = %d", num,reversedNum);
    return 0;
}
