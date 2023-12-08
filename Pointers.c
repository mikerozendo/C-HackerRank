#include <stdio.h>

//Link to exercise: https://www.hackerrank.com/challenges/pointer-in-c/problem?isFullScreen=true
void update(int *a,int *b) {
    int updateA = *a + *b;
    int absDiffValue = abs(*a - *b);
    *a = updateA;
    *b = absDiffValue;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}