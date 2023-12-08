#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Link to Exercise: https://www.hackerrank.com/challenges/playing-with-characters/problem?isFullScreen=true

int main() 
{    
    char first_input;
    char * secondInput[50];
    char * thirdInput[50];

    scanf("%c", &first_input);
    scanf("%s", &secondInput);
    scanf("\n");
    scanf("%[^\n]%*c", &thirdInput);

    printf("%c\n",first_input);
    printf("%s\n",&secondInput);
    printf("%s\n",&thirdInput);


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}