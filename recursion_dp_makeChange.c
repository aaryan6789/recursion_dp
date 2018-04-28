/*
 * recursion_dp_makeChange.c
 *
 *  Created on: Mar 5, 2018
 *      Author: hsahu
 */

#include <stdio.h>
#include <stdlib.h>
#include "recursion_dp.h"



/**
 * makeChange - MakeChange for a particlar amount using the coins of different
 * 				coin Value in the array coins.
 * 	Recursive solution
 */
int makeChange(int amount, int coins[], int coin_types, int index) {
	if (index >= (coin_types-1))
		return 1;

	int coinValue = coins[index];
	int ways =0;

	for (int i = 0; i*coinValue <= amount; i++){
		int amountRemaining = amount - i*coinValue;
		ways = ways + makeChange(amountRemaining, coins, coin_types, index+1);
	}

	return ways;
}

int makeChangeWrapper(int amount){

	int coins[] = {25, 10, 5, 1};
	int coin_types = sizeof(coins)/sizeof(coins[0]);

	return makeChange(amount, coins, coin_types, 0);
}
