//Binary Search O(nlogn) sorted array
#include<iostream>
#include<vector>
//#include<algorithm> includes binary search.
using namespace std;

//declarations:
int binarysearch(vector<int>array, int target);
int binarysearchaux(vector<int>array, int target, int left, int right);

//definitions:
int binarysearch(vector<int>array, int target)
{
	return binarysearchaux(array, target, 0, array.size() - 1);
	//or return bs(a,x,0,n-1) for static array.
}
int binarysearchaux(vector<int> array, int target, int left, int right)
{
	if (left > right) return -1;
	int mid = left + (right - left) / 2;
	int x = array[mid];
	if (target == x)
		return mid;
	else if (target < x)
		return binarysearchaux(array, target, left, mid - 1);
	else
		return binarysearchaux(array, target, mid + 1, right);
}
int main()
{
	vector<int>b = { 1,2,4,5,3,6 };
	int x = binarysearch(b, 8); cout << x;
	return 0;
}
