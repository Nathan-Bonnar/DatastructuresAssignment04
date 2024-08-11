#include"hash.h"
int main()
{
	//create a hash table as reuqested in the requiremnets
	int hashTable[SIZE] = { 0 };
	//created a input array as requested in the requirements
	int input[SIZE] = { 764, 35954, 8683, 41, 11004, 1362, 77, 1, 448, 118, 5507 };
	//create a M and R intiger with sizes of 11 and seven like as requested in the requirementts
	int M = SIZE;
	int R = 7;
	bool check = false;
	//use the hash init function
	check = hashInit(hashTable, input, M, R);
	//assess if the hasing was a sucessus or not and if it was then print all the number and locations 
	//as requested in the requirements
	if (check == true)
	{
		printf("HASH PASSED\n");
		for (int i = 0; i < SIZE; i ++)
		{
			printf("%d at location %d\n", hashTable[i], i);
		}
		return 0;
	}
	//if it doesnt pass return an error 
	else
	{
		printf("HASH FAILED\n");
		return 1;
	}
}
