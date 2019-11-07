using namespace std;
class Node
{ public: int value; Node *prev,*next;
  Node(int value);
};

class DoublyLinkedList
{ public: Node *head,*tail; 
  DoublyLinkedList() { head=NULL; tail=NULL; }
  
  void setHead(Node *node)
  { if(head==NULL)
    head=node; tail=node; return;
  }
  
  void setTail(Node *node)
  { 
  if(tail==NULL)
  {
    setHead(node);
    return;
  }
  insertAfter(tail,node);
  }
  
  void insertBefore(Node *node, Node *nodeToInsert)
  { if(nodeToInsert==head && nodeToInsert==tail)
     return;
     remove(nodeToInsert);
     nodeToInsert->prev=node->prev;
     nodeToInsert->next=node;
     if(node->prev==NULL)
     head=nodeToInsert;
     else node->prev->next=nodeToInsert;
     node->prev=nodeToInsert;
  }
    
