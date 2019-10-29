#include <vector>
using namespace std;
vector<int>bubbleSort(vector<int> array);
vector<int> bubbleSort(vector<int>array)
{   if(array.empty())  return {}; 
	
    for(int i=0; i<array.size(); i++)
    {  
      bool flag = false;
       for(int j=0; j<array.size()-i-1; j++)
       {
          if(array[j]>array[j+1])
          {
            flag = true;
             int temp = array[j+1];
             array[j+1] = array[j];
             array[j] = temp;
          }
       }
      // No Swapping happened, array is sorted
      if(!flag)
			{ 
         return array; 
      } 
   }
}

