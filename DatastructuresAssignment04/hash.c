//created a hash.c and hash.h as requested in the requirements
#include"hash.h"
bool hashInit(int* hashTable, int* input, int M, int R)
{
	//move through all the elements of the array
	for (int j = 0; j < SIZE; j++)
	{
		//do the first hasing calculation as presented in the requirements
		int hashone = input[j] % M;
		//if no conflicts then put the number in the specified location
		if (hashTable[hashone] == 0)
		{
			hashTable[hashone] = input[j];
		}
		else
		{
			//loop until you can find a location that is sutabile for the number that created the conflict
			for (int i = 0; i < SIZE; i++)
			{
				//if there is a conflict using the second hashing algorithm presented in the requirements find a new location for the number
				int tempone = input[j] % (M);
				int temptwo = (R - (input[j] % R)) * (i);
				int hashtwo = (tempone + temptwo) % M;
				if (hashTable[hashtwo] == 0)
				{
					hashTable[hashtwo] = input[j];
					break;
				}
			}
		}
	}
	return true;
}