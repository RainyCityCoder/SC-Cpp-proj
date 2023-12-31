#ifndef PRINT_H
#define PRINT_H
#include <iostream>
#include <vector>
#include <list>
using namespace std;

inline void printList(const list<int>& list) {
  for (const auto& e: list) {
    cout << e << ',';
  }
  cout << endl;
}

inline void printVector(vector<int> &input) {
  for (int i=0; i<input.size(); i++) {
    cout <<input.at(i) << ',';
  }
  cout << endl;
}

#endif 