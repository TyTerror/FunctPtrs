#include <stdio.h>
#include <stdlib.h>

/* IMPLEMENT ME: Declare your functions here */
// Write a program that takes a single character
// ‘0’ - add
// ‘1’ - subtract
// ‘2’ - multiply
// ‘3’ - divide
// ‘4’ - exit program

int (*operator[4]) (int a, int b);

int add (int a, int b);
int subtract (int a, int b);
int multiply (int a, int b);
int divide (int a, int b);
int done(int a,  int b);


int main (void)
{
	/* IMPLEMENT ME: Insert your algorithm here */
	int a;
  int b;
  int o;

	operator[0] = &add; // address of sum()
  operator[1] = &subtract; // address of subtract()
  operator[2] = &multiply; // address of mul()
  operator[3] = &divide; // address of div()
  operator[4] = &done; // address of exit()

	while (o!=4) {
		printf( "Operand ‘a’ : ");
		scanf("%d",&a);
		printf( "Operand ‘b’ : ");
		scanf("%d",&b);
		printf( "Specify the operation to perform (0 : add | 1 : subtract | 2 : Multiply | 3 : divide | 4 : exit): ");
		scanf("%d",&o);

		printf("x = %d\n", operator[o](a,b));
  }
  return 0;
}

/* IMPLEMENT ME: Define your functions here */
int add (int a, int b) { printf ("Adding 'a' and 'b'\n"); return a + b; }
int subtract (int a, int b) { printf("Subtracting 'a' from 'b'\n"); return b-a; }
int multiply (int a, int b) { printf("Multiplying 'a' and 'b'\n"); return a*b; }
int divide (int a, int b) { printf("Dividing 'a' by 'b'\n"); return a/b; }
int done(int a,  int b){ return 0; }
