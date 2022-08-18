#include <stdio.h>

int main() {
 // make some numbers
 volatile int a = 54, b = 12, c = 88;

 // useless loop
 int i;
 for (i = 0; i < 5; i++) {
  c += b + i;
}

// read in the guess
int guess
printf("number: "): fflush(stdout);
scanf("%d", &guess);

// compute and check
int ans = a * b + 4 * c;
if (ans == guess ) {
  printf ("WINNER!\n");
} else {
  printf("NOPE :(\n");
}
return 0;
}
