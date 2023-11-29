//Michael Turner
//18229090
//11/29/2023
//function.cpp
#include "header.h"
#include <iostream>
#include <fstream>
using namespace std;

void populateMatrix(int (& matrix1)[4][4], int(& matrix2)[4][4]){
  ifstream inputfile("matrix1.txt");
  if(!inputfile.is_open()) cout << "Error opening file" << endl; // make sure file is open

  for (int r=0; r< 4; r++){// read input file into matrix1 for each row and column
    for(int c=0; c< 4; c++){
      inputfile >> matrix1[r][c];
    }
  }
  inputfile.close();
  ifstream inputfile2("matrix2.txt");
  if(!inputfile2.is_open()) cout << "Error opening file" << endl;// make sure file is open

  for (int r=0; r< 4; r++){// read input file into matrix2 for each row and column
    for(int c=0; c< 4; c++){
      inputfile2 >> matrix2[r][c];
    }
  }
  inputfile2.close();
  return;
}
void printMatrix(int ( matrix1)[4][4], int( matrix2)[4][4]){
  for (int r=0; r< 4; r++){// double for loop to print the array
    for(int c= 0 ; c< 4; c++){
      cout << matrix1[r][c] << " \t";
    }
    cout << endl;
  }
  cout << endl;
  for (int r=0; r< 4; r++){// double for loop to print the array
    for(int c= 0 ; c< 4; c++){
      cout << matrix2[r][c] << " \t";
    }
    cout << endl;
  }
}

void addMatrix(int(& matrix1)[4][4], int(& matrix2)[4][4], int(& sum)[4][4]){
  for (int r=0; r< 4; r++){// double for loop to add the matrices for each row and column
     for(int c= 0 ; c< 4; c++){
       sum[r][c] = matrix1[r][c] + matrix2[r][c]; //the sum of the matrices is stored in the sum matrix of this row and column
     }
  }
} 
void printMatrix(int ( sum)[4][4]){
  for (int r=0; r< 4; r++){// double for loop to print out the matrix
    for(int c= 0 ; c< 4; c++){
      cout << sum[r][c] << " ";
    }
    cout << endl;
  }
  ofstream outputfile("output.txt");// writing the sum array to the output file
  if(outputfile.is_open()){ // make sure file is open
    for (int r=0; r< 4; r++){// double for loop to write out the whole matrix
      for(int c= 0 ; c< 4; c++){
        outputfile << sum[r][c] << " ";
      }
      outputfile << endl;
    }
    outputfile.close();
  }else {
    cout << "Error opening file" << endl;
  }
  
}