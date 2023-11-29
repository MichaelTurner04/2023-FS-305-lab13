//Michael Turner
//18229090
//11/29/2023
//main.cpp
#include <iostream>
#include "header.h"
#include <fstream>
using namespace std;
int main() {
  int matrix1[4][4];
  int matrix2[4][4];
  int sum[4][4];
  populateMatrix(matrix1, matrix2); // function to populate matrix 1 &2
  cout << "Before Addition: "<< endl;
  printMatrix(matrix1, matrix2); // function to print matrix 1 &2
  addMatrix(matrix1, matrix2, sum); //function that adds matrix 1 &2 together to form the sum array
  cout << "After Addition: "<< endl;
  printMatrix(sum); //function that prints the sum array and writes the array to the "output.txt" file
  return 0;
}