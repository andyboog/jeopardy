#include<iostream>
using namespace std;
class queue{
  struct node{
        int data;
        node *next;
  }*front = NULL,*rear = NULL,*p = NULL,*np = NULL;

  public:
  void push(int x){
    np = new node;
    np->data = x;
    np->next = NULL;
    if(front == NULL){
      front = rear = np;
      rear->next = NULL;
    }
    else {
      rear->next = np;
      rear = np;
      rear->next = NULL;
    }
  }
  int remove(){
    int x;
    if(front == NULL) {
      cout<<"empty queue\n";
    }
    else {
      p = front;
      x = p->data;
      front = front->next;
      delete(p);
      return(x);
    }
  }
};

