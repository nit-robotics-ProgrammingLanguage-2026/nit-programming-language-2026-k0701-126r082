
#include <stdio.h>

int func2(int a, int b);

int main(void)
{
    int number;
    int answer;

    scanf("%d", &number);
    answer = func2(10, number);

    printf("%d", answer);
    return 0;
}

int func2(int a, int b)
{
    int difference;
    difference = a - b;

    return difference;
}