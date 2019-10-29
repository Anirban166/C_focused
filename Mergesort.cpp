//Merge Sort : Best,avg,worse time : O(nlogn) ; space same.
#include<iostream>
#include<vector>
using namespace std;
vector <int> mergeSortedArrays(vector<int>leftHalf, vector<int>rightHalf);
vector <int> mergeSort(vector<int>array)
{
	if (array.size() <= 1) return array;
	int middleindex = array.size() / 2;
	vector<int>lefthalf(array.begin(), array.begin() + middleindex);
	vector<int>righthalf(array.begin() + middleindex, array.end());
	return mergeSortedArrays(mergeSort(lefthalf), mergeSort(righthalf));
}
vector<int> mergeSortedArrays(vector<int>lefthalf, vector<int>righthalf)
{
	vector<int>sortedArray(lefthalf.size() + righthalf.size(), 0);
	int i, j, k; i = j = k = 0;
	while (i < lefthalf.size() && j < righthalf.size())
	{
		if (lefthalf[i] <= righthalf[j])
			sortedArray[k++] = lefthalf[i++];
		else
			sortedArray[k++] = righthalf[j++];
	}
	while (i < lefthalf.size())
		sortedArray[k++] = lefthalf[i++];
	while (j < righthalf.size())
		sortedArray[k++] = righthalf[j++];
	return sortedArray;
}
int main()
{
	vector<int> a = { 4,7,2,9,5,4,8,1 };
	a=mergeSort(a);
	for (auto i = a.begin(); i != a.end(); ++i)
		cout << *i;
	return 0;
}
