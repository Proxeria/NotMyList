#include "Node.h"
//node object owns student object, pass in student

Node::Node(Student* newStudent) {
  student = newStudent;
  next = NULL;
}

Node::~Node() {
  delete student;
  next = NULL;
}

void Node::setNext(Node* newnext) {
  next = newnext;
}

Node* Node::getNext() {
  return next;
}

Student* Node::getStudent() {
  return student;
}
