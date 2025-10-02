/**************************************************************************
Class:			CSCI 3333.01 Data Structures and Algorithms
				Spring 2025
Project 2:		Binary Arithmetic Expression Trees
Name:			Coder Warrior
ID:             11111111
Description: Use stacks to build the binary expression tree for a given 
	input binary arithmetic expression and do syntactic and semantic analysis.
Input file: expressions.txt
Output file: outfile.txt
Example format of output file:
	Input expression 1
	List of errors, if any.
	If no errors, then give the value of the expression
	Infix expression
	Infix expression
	Postfix expression
	......
**************************************************************************/

#include <iostream>
#include <fstream>
#include <cassert>
#include <string> 
#include <cstdlib>
#include <stack>

//the header file defines the tree node and other parts needed.
#include "project2_head.h"	


using namespace std;

int main()
{
	ifstream inFile;
	oftream outFile; 

	char str[100];
	int i, j;
	string numStr;
	double x;
	char p;
	stack<char> opStack; //a stack of operators
	stack<treeNodePtr> treeStack; //a stack of tree node pointers
	treeNodePtr tmpNode, lc, rc;
	bool tag;

	// open input file of expressions
	inFile.open("expressions.txt");
	// open output file
	outFile.open("output.txt"); 

	//use a loop to read input expressions, one at a time
	i = 0;
	while (!inFile.eof())
	{
		i++;
		inFile.getline(str, 100);
		outFile << "Input expression "<<i<<": " << str << endl;
		//use the stacks to build the binary expression tree for expression str
		//do syntactic and semantic analysis.
		// if no errors, then calculate the value and 
		// list prefix, infix and post fix expressions 
		//.....................

	}

	//complete the program
	cout << " Okay, all are done!" << endl;
	inFile.close();
	OutFile.close(); 
	return 0;
}
