#ifndef NODE_H
#define NODE_H
#include <iostream>
#include "Student.h"

using namespace std;



class Node {
 public:
  Node(Student*);
  ~Node();
  void setNext(Node* newnext);
  Node* getNext();
  Student* getStudent();
 private:
  Node* next;
  Student* student;
  
};
#endif
