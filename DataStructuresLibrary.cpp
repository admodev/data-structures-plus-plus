#include "DataStructuresLibrary.h"
#include <stdio.h>

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

		while (arr[i] != key)
		{
			i++;

			arr[n - 1] = last;

			if ((i < n - 1) || (arr[n - 1] == key))
			{
				printf("%d is present at index %d", key, i);

				return i;
			}
			else
			{
				printf("Element not found");

				return -1;
			}
		}
	}

	int Arrays::BinarySearch(int arr[], int l, int r, int x)
	{
		while (l <= r)
		{
			int m = l + (r - 1) / 2;

			if (arr[m] == x)
			{
				return m;
			}

			if (arr[m] < x)
			{
				l = m + 1;
			}
			else
			{
				r = m - 1;
			}
		}

		return -1;
	}

	int Arrays::TernarySearch(int arr[], int l, int r, int key)
	{
		if (r >= l)
		{
			int mid1 = l + (r - l) / 3;
			int mid2 = r - (r - l) / 3;

			if (ar[mid1] == key)
			{
				return mid1;
			}
			if (ar[mid2] == key)
			{
				return mid2;
			}

			if (key < ar[mid1])
			{

				return Arrays::TernarySearch(arr, l, mid1 - 1, key);
			}
			else if (key > ar[mid2])
			{
				return Arrays::TernarySearch(arr, mid2 + 1, r, key);
			}
			else
			{
				return Arrays::TernarySearch(arr, mid1 + 1, mid2 - 1, key);
			}
		}

		return -1;
	}
}
