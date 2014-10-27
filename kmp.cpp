#include <iostream>
using namespace std;

void get_next(char* array, int& next[])
{
	next[0] = -1;
	int sl = strlen(array);
	j = 0;
	k = -1;

	for(int i = 1; i < sl; i ++)
	{
		if (-1 == k || array[j] == array[k])
		{
			j ++;
			k ++;
			next[j] = k;
		}
		else
		  k = next[k];
	}
	return;
}
