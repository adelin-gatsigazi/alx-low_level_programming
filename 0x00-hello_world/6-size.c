#include <stdio.h>

/**
* main - print the string in the put function
*
* Description: using the main function 
* this program prints "Programming is like building a multilingual puzzle 
*Return: 0
*/
int main(void)
{
       char c;
       int i;
       long li;
       long long lli;
       float f;


       printf("SIze of a char: %ld byte(s)\n", Sizeof(c));
       printf("size of an int: %ld byte(s)\n", sizeof(i));
       printf("Size of a long int: %ld byte(s)\n", sizeof(li));
       printf("size of a long long int: %ld byte(s)\n", sizeof(lli));
       printf("size of a float: %ld byte(s)", sizeof(f));
       return (0);
