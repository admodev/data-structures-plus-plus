#include "DataStructuresLibrary.h"

namespace DataStructuresLibrary
{
	int Arrays::LinearSearch(int arr[], int n, int x)
	{
		for (int i = 0; i < n; i++)
		{
			if (arr[i] == x)
			{
				return i;
			}
		}

		return -1;
	}

	int Arrays::SentinelSearch(int arr[], int n, int key)
	{
		int last = arr[n - 1];

		arr[n - 1] = key;
		
		int i = 0;

		while(arr[i] != key)
		{
			i++;

			arr[n - 1] = last;

			if ((i < n - 1) || (arr[n - 1] == key))
			{
				std::cout << key << "is present at index " << i;

				return i;
			}
			else
			{
				std::cout << "Element not found";

				return -1;
			}
		}
	}
}
