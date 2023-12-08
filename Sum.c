#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Link to exercise: https://www.hackerrank.com/challenges/sum-numbers-c/problem?isFullScreen=true

typedef struct{
    int first_input;
    int second_input;
    int sum;
    int diff;
}st_int_inputs;

typedef struct{
    float first_input;
    float second_input;
    float sum;
    float diff;
}st_float_inputs;

int main()
{
    st_int_inputs int_inputs;
    st_float_inputs float_inputs;

	int int_first_input, int_second_input, int_sum, int_diff;
    float ft_first_input, ft_second_input, ft_sum, ft_diff;

    scanf("%d %d",&int_inputs.first_input, &int_inputs.second_input);
    scanf("%f %f",&float_inputs.first_input,&float_inputs.second_input);

    
    int_inputs.sum = int_inputs.first_input + int_inputs.second_input;
    int_inputs.diff = int_inputs.first_input - int_inputs.second_input;

    float_inputs.sum = float_inputs.first_input + float_inputs.second_input;
    float_inputs.diff = float_inputs.first_input - float_inputs.second_input;

    printf("%d %d", int_inputs.sum, int_inputs.diff);
    printf("\n%0.1f %0.1f", float_inputs.sum, float_inputs.diff);

    
    return 0;
}