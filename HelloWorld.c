#include <stdio.h>
#include <string.h>

int main() 
{	
    char s[100];
    scanf("%[^\n]%*c", &s);
  	printf("Hello, World!");
  	printf("\n%s",s);
    return 0;
}