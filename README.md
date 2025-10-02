CSCI 3333 Project Two
Binary Arithmetic Expression Trees

Basic Part (100 points)
Problem Description
Program Part: 90 points. This project is about designing and implementing expression trees, which are special cases of parse trees or grammar trees. you need to implement a program to do the following:
a)	Get a binary arithmetic expression as input from a given input file, build a binary expression tree for the input expression. The input file “expressions.txt” contains a list of arithmetic expressions, one per line. You must not change the format or content of the input file.  
b)	Check whether there are any syntactic or semantic errors in the expression. If yes, then report the errors. 
c)	If there are no errors in the input expression,  then 
•	Calculate and display the value of the input expression.
•	Print the infix (in-order traversal), prefix (pre-order traversal) and postfix (post-order traversal) expressions of the input expression.
To help build the binary expression tree for an input arithmetic expression, you shall use two stack type data structures, one helps manage operators from the arithmetic expression, and the other help manage the tree nodes for building the trees.
The table below lists operation precedence and association orders.
Operator	Precedence (or Priority)	Association Order
(  )	0 (highest precedence)	 left to right
*, /	1	 left to right
+, -	2	 left to right
Use the following input arithmetic expressions to test your program:
1)	(10.24 + 5.4 * 2.5) / 6.7 + (12.5 * 20.67 + 10) * 25
2)	(10.24 + 5.4 * 2.5) / 6.7 + (12.5 * 20.67 + 10) * 25)
3)	(10.24 + 5.4 * 2.5) / 6.7 + (12.5 * 20.67 + ) * 25
Note: 
•	Expression 1 has no syntactic errors. 
•	Expressions 2 and 3 have one error each. 

Report Part: 10 points. In addition to the above program, you must write a one-page report to summarize the basic ideas of your programming development, explaining the algorithm design and the data structure design.   
Warning: Your report must be your own work. Plagiarism or AI generated work, in any sort, is not acceptable and will result in zero credit for you for this part.  
Below is the sketch of the coding for your reference: 
/**************************************************************************
Class:		CSCI 3333.01 Data Structures and Algorithms
        Spring 2025
Project 2:	Binary Arithmetic Expression Trees
Name:		Coder Warrior
ID:          11111111
Description: Use stacks to build the binary expression tree for a given 
input binary arithmetic expression and do syntactic and semantic analysis.
Input file: expressions.txt
Output file: outfile.txt
Example format of output file:
    Input expression 1
    List of errors, if any.
If there are no errors, then give the value of the expression.
    Infix expression
    Infix expression
    Postfix expression
    ......
**************************************************************************/

#include <iostream>
#include <fstream>
#include <string> 
#include <cstdlib>
#include <stack>

//the header file defines the tree node and other parts needed.
#include "project01_head.h"	


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


Optional Part – for possible extra credits (at most 2 extra credits)
In addition to binary arithmetic expressions, I would like you to consider binary relation operators of <, <=, ==, !=, >, >=, and logical operators of ||, &&, and !. I ask you to expand the functionality of your program for binary arithmetic expressions to deal with expressions that are composed of parentheses, binary arithmetic operator, binary relational operators, and logical operators. 
Save the following input arithmetic expressions into a file “more_expressions.txt” to test your program:
1)	(10.24 + 5.4 * 2.5) / 6.7 >= (12.5 * 20.67 + 10) * 25
2)	(10.24 + 5.4 * 2.5 <= 100)  &&  (12.5 * 20.67 < 10 * 25)
3)	(10.24 <= 5.4 * 2.5) || (!  ((26 / 12 <= 5 + 9)  &&  (12.5 * 20.67 < 10 * 25)))


