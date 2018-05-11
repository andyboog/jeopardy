#include <iostream>
using namespace std;

class LinkedList {
    struct Node {
        char x;
        Node *next;
    };

  public:
    LinkedList() {
        head = NULL;
    }

    ~LinkedList() {
        Node *next = head;

        while (next) {
            Node *deleteMe = next;
            next = next->next;
            delete deleteMe;
        }
    }

    void push(char val) {
        Node *n = new Node();
        n->x = val;
        n->next = head;
        head = n;
    }

    char pop() {
        Node *n = head;
        char ret = n->x;

        head = head->next;
        delete n;
        return ret;
    }

  private:
    Node *head;
};

