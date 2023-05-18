#include<stdio.h>

int main ()
{
    int start_hr, start_min, end_hr, end_min;
    scanf("%d %d %d %d", &start_hr, &start_min, &end_hr, &end_min);

    int diff = ((end_hr*60) + end_min) - ((start_hr*60) + start_min);

    if(diff <= 0) 
        diff += 24*60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", diff/60, diff%60);

    return 0 ;
}