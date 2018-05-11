#include <iostream>
using namespace std;

class LinkedList {
    struct Node {
        int x;
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

    void addValue(int val) {
        Node *n = new Node();
        n->x = val;
        n->next = head;
        head = n;
    }

    int popValue() {
        Node *n = head;
        int ret = n->x;

        head = head->next;
        delete n;
        return ret;
    }

  private:
    Node *head;
};

