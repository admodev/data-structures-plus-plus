#pragma once

namespace DataStructuresLibrary
{
	class Arrays
	{
	public:
		// Search algorithms
		static int LinearSearch(int arr[], int n, int x);
		static int SentinelSearch(int arr[], int n, int key);
		static int BinarySearch(int arr[], int l, int r, int x);
		static int TernarySearch(int arr[], int l, int r, int key);
	};
}
