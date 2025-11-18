//The population of a town is 100000. The population has increased steadily at the rate of 10% per year for the last 10 years. Write a program to determine the population at the end of each year in the last decade.

#include<stdio.h>
int main() {
    int year;
    float population=100000;
    for (year=1;year<=10;year++)
    { population=population*1.1;
      printf(" year=%d ,population=%f \n",year,population); }
return 0; }
