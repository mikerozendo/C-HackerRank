#include <stdio.h>

//Link to exercise: https://www.hackerrank.com/challenges/functions-in-c/problem?isFullScreen=true

int max_of_four(int a, int b, int c, int d){

    int values[] = {a,b,c,d};
    int highest = values[0];

    for (int i = 1; i <= 3; i++){  
        if(values[i] > highest){
            highest = values[i];
        }
    }

    return highest;    
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}