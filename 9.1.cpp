#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Node {
  Node *next;
  Node *prev;

  int value;
  Node(int value_ = NULL) : next(NULL), value(value_) {}
};

Node *nil;

void init() {
  nil = new Node();
  nil->next = nil;
  nil->prev = NULL;
};

void push(int x) {
  Node *next = nil;
  while (next != NULL) {
    next = next->next;
  };
  next->next = new Node(x);
};

int pop(int x) {
  Node *next = nil;
  while (next != NULL) {
    next = next->next;
  };
  int value = next->value;
  next = NULL;
  return value;
};
