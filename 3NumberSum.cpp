#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int>> Threenumbersum(vector <int> array, int targetsum)
{ sort(array.begin(),array.end());
  vector<vector<int>>triplets;
  for(int i=0; i<array.size()-2;i++)
  {
  int left=i+1; int right=array.size()-1;
  while(left<right)
  { int currentsum=array[i]+array[left]+array[right];
  if(currentsum==targetsum)
  { triplets.push_back({array[i],array[left],array[right]});
    left++;
    right--;
  }
  else if(currentsum<targetsum)
  left++;
  else if(currentsum>targetsum) 
  right--;
  }//while end
  }//for end
  return triplets;
}
