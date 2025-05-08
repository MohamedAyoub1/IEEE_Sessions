#include <stdio.h>
int main(void)
{
    int num;
    printf("Enter The Number");
    scanf("%d", &num);
    if (num >=1 && num <=9)
    {
        printf("The Equivlent Character is %c", num + 0);
    }
    else 
    {
        printf("Number must be between 1 and 9");
    }

}
