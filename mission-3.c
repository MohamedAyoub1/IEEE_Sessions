#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*output should be: number n last digit is (even | odd),
	the last digit is num, and it is (more | less) than 5*/
    int x = abs(n % 10);
    if(x%2 ==0 )
    {
        printf(" number %d last digit is even \n", n);
        if (x<5)
        {    
        
        printf(" The last digit is %d and it is less than 5", x);
        }
        else
        {
            printf(" The last digit is %d and it is more than 5", x);
        }   
    }
    else
    {
        printf(" number %d last digit is odd \n", n);
        if (x<5)
        {    
        
        printf(" The last digit is %d and it is less than 5", x);
        }
        else
        {
            printf(" The last digit is %d and it is more than 5", x);
        }   
    }
	return (0);
}
