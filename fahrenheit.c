//
// Created by joachim on 09/12/17.
//
#include <stdio.h>

int main() {
    float fahrenheit, celsius;
    unsigned int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahrenheit = lower;

    while(fahrenheit <= upper) {
        celsius = (5.0/9.0) * (fahrenheit - 32.0);
        printf("%3.0f\t%6.1f\n", fahrenheit, celsius);
        fahrenheit += step;
    }
}

