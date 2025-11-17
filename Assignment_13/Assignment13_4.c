#include <stdio.h>

int sum_natural_numbers(int limit) 
{
    return limit * (limit + 1) / 2;
}

int main() 
{
    int limit;
    printf("Enter number: ");
    scanf("%d", &limit);
    printf("%d\n", sum_natural_numbers(limit));
    return 0;
}