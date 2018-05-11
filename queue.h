#include<iostream>
using namespace std;
class queue{
  struct node{
        int data;
        node *next;
  }*head = NULL,*tail = NULL,*p = NULL,*np = NULL;

  public:
  void push(int x){
    np = new node;
    np->data = x;
    np->next = NULL;
    if(head == NULL){
      head = tail = np;
      tail->next = NULL;
    }
    else {
      tail->next = np;
      tail = np;
      tail->next = NULL;
    }
  }
  int pop(){
    int x;
    if(head == NULL) {
      cout<<"empty queue\n";
    }
    else {
      p = head;
      x = p->data;
      head = head->next;
      delete(p);
      return(x);
    }
  }
  int back(){
    return tail->data;
  }
};

