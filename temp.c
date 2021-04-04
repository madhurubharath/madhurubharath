// C program for generating a
// random number in a given range.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>//
  
// Generates and prints 'count' random
// numbers in range [lower, upper].
void printRandoms(int lower, int upper, int count)//randoms function definition
{
    int i,j,time=10;
    static int  Celsius;
    static int  Fahrenheit;
    for(j=0;j<time;j++)
    {
    for (i = 0; i < count; i++) 
    {
      int num1 = (rand()%(upper - lower + 1)) + lower;//to get random number 
      int num=num1/5.0;   //resaulation 
      Celsius=((num * 5.0 / 1024) * 100);//converting resulation to celsius formula
      Fahrenheit=((Celsius * 1.8 )+ 32);  //converting celsius to fahrenheit formula
        
    }
    printf("Celsius :%d°C  Fahrenheit:%d °F\n",Celsius,Fahrenheit);
    }
}
int main()
{
    int lower,upper,count = 1;
    printf("enter lower range ADC value\n");
    scanf("%d",&lower);
    printf("enter upper range ADC value\n");
    scanf("%d",&upper);
    srand(time(0)); //current time as seed of random number generator
    printRandoms(lower, upper, count);// function calling 
    return 0;
}
