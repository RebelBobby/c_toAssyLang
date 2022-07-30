/*Joseph Matulewicz
Project 2 Assembly Project
7/30/2022
*/

#include <stdio.h>

void main() {
  int tuitYr = 10000;
  int total = 0;

  for (int i = 1; i <= 14; i++) {
    tuitYr += tuitYr * .04;

    if (i == 10) {
      printf("Tuition in 10-yrs= %d\n", tuitYr);
    }

    if (i > 10) {
      total = total + tuitYr;
    }
  }
  printf("The total cost of 4-yr worth of tuition after the tenth year = %d", total);
}

/*Test Run: 
Tuition in 10-yrs= 14798
The total cost of 4-yr worth of tuition after the tenth year = 65346
*/