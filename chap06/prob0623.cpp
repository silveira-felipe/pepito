// File: prob0623.cpp// Computer Systems, Fourth Edition// Problem 6.23#include <iostream>using namespace std;int binCoeff (int n, int k) {   if ((k == 0) || (n == k)) {      return 1;   }   else {      return binCoeff (n - 1, k) + binCoeff (n - 1, k - 1);   }}int main () {     cout << binCoeff (3, 1) << endl;   return 0;}