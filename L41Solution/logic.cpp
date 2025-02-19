#include <iostream>
#include "logic.h"


int rndm_matrix(int* matrix, int n, int m) 
{
	int matrix[N][N];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			matrix[i] = rand() % ;
		}
	}


	return 0;
}

string is_exist_zero_element(int* matrix, int n, int m) {
	string result = "";
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (matrix[i][j] == 0) {
				result += to_string(i + 1) + " ";
				break;
			}
		}
	}
}

bool find_acending_order(int* matrix, int n, int m){

}