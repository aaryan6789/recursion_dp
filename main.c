/* main.c      Author: hsahu */

#include <stdio.h>
#include "recursion_dp.h"

int main()
{
	//int n = 2; // Number of disks
	//towerOfHanoi(n, 'A', 'C', 'B'); // A, B and C are names of rods


	count_ways(5);
	int ct = count_ways_dp(5);
	printf("ct dp = %d\n", ct);

	ct = count_ways_wrapper(5);
	printf("ct dp = %d\n", ct);

	int mc = makeChangeWrapper(1);
	printf("MakeChange = %d\n", mc);

	print_all_parens(5);
	return 0;
}
