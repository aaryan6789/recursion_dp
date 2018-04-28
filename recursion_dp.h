/*
 * recursion_dp.h
 *
 *  Created on: Dec 31, 2017
 *      Author: hsahu
 */

#ifndef RECURSION_DP_H_
#define RECURSION_DP_H_

// RECURSION

void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod);

void print_all_parens(int n);
void print_parens(int n, int pos, int left, int right);


void printPowerSet(char *set, int set_size);

// RECURSION + DP
int count_ways(int n);
int count_ways_dp(int n);
int count_ways_dp_memorization(int n, int memo[]);
int count_ways_wrapper(int n);



int makeChange(int amount, int coins[], int coin_types, int index);
int makeChangeWrapper(int amount);
#endif /* RECURSION_DP_H_ */
