//Michael Turner
//18229090
//11/29/2023
//header.h
#ifndef HEADER_H
#define HEADER_H

//function to populate 2 arrays with a .txt file input
//pre: matrix1 and matrix 2 must exist
//post: adds each input of the .txt file to each array for each array respectively
void populateMatrix(int(& matrix1)[4][4], int(& matrix2)[4][4]);

//function to print the matrix1 and matrix2
//Pre:matrix1 and matrix2 must exist/ also for correct output must have used the populateMatrix funciton
//Post: outputs each array
void printMatrix(int ( matrix1)[4][4], int( matrix2)[4][4]);

//function to print the sum matrix and write the sum matrix to the "output.txt" file
//pre: sum array must exist and be populated must have used the addMatrix function for correct output for sum array
//outputs sum array and writes the array to the output.txt file
void printMatrix(int ( sum)[4][4]);

//function to add matrix 1 & 2 to form the sum array
//matrix 1 & 2 must exist and be populated, sum array must exist but doesn't need to be populated(doing population now)
//post: adds matrix 1&2 to form the sum array
void addMatrix(int(& matrix1)[4][4], int(& matrix2)[4][4], int(& sum)[4][4]);
#endif