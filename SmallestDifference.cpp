#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
vector<int> smallestDifference(vector<int>arrayOne,vector<int>arrayTwo)
{ sort(arrayOne.begin(),arrayOne.end());  
  sort(arrayTwo.begin(),arrayTwo.end());
  int indexOne=0; int indexTwo=0;
  int smallest=INT_MAX; int current=INT_MAX;
  vector<int>smallestPair;
  while(indexOne<arrayOne.size() && indexTwo<arrayTwo.size())
  { int firstNum=arrayOne[indexOne];
    int secondNum=arrayTwo[indexTwo];
    if(firstNum<secondNum)
    { current=secondNum-firstNum;
      indexOne++;
    }
    else if(secondNum<firstNum)
    { current=firstNum-secondNum;
      indexTwo++;
    } 
    else return vector<int>{firstNum,secondNum}; //vector<int>{1,2} eg
    if(smallest>current)
    { smallest=current;
       smallestPair={firstNum,secondNum};
    }
    }
    return smallestPair;
}
