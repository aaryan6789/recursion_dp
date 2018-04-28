/*
 * recursion_tower_of_hanoi.c
 *
 *  Created on: Mar 1, 2018
 *      Author: hsahu
 */


#include <stdio.h>

static int count = 1;
// C recursive function to solve tower of hanoi puzzle
// from_rod = src
// to_rod = dst
// aux_rod = temp

void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod) {
    // Base Case
	if (n == 1) {
		printf("\n %d Move disk 1 from rod %c to rod %c", count, from_rod, to_rod);
		count++;
		return;
	}

	// Recursive Case
	towerOfHanoi(n-1, from_rod, aux_rod, to_rod);
	printf("\n %d Move disk %d from rod %c to rod %c", count, n, from_rod, to_rod);
	count++;
	towerOfHanoi(n-1, aux_rod, to_rod, from_rod);
}
