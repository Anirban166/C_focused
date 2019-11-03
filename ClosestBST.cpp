#include<cmath>
#include<float.h>
using namespace std;

class BST {
public: int value;
        BST *left,*right;
        
        BST(int val);
        BST &insert(int val);
          };
int findclosestvalueinbst(BST *tree,int target);
int findclosestvalueinbsthelper(BST *tree, int target, double closest);
int findclosestvalueinbst(BST *tree,int target)
{ return findclosestvalueinsthelper(tree,target,DBL_MAX); }

int findclosestvalueinbsthelper(BST *tree, int target, double closest)
{ if(abs(target-closest)>abs(target-tree->value))
  closest=tree->value;
  if(target<tree->value && tree->left!=NULL)
  return findclosestvalueinbstheler(tree->left,target,closest);
  else if(target>tree->value && tree->right!=NULL)
  return findclosestvalueinbsthelper)tree->right,target,closest);
  else
  return (int)closest;
}
