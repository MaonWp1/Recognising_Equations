#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <math.h>
#include "scanner.h"
#include "recognizeExp.h"

int main(int argc, char *argv[]) {
  recognizeExpressions();
  return 0;
}



/*
 * CHANGES:
 *
 * 1. recognizeEquations:
 * 		in main change recognizeExpression for new recognizeEquation. The latter will compare whether if the input is <expression> '=' <expression>
 * 		- Create new recognizeEquation.c file and its header. (don't just define it here.)
 * 		-
 *
 * 2. in recognizeExpression:
 * 		- have to add the recognition of ^number ...
 * 		- change print statements to return 1 or 0.
 * 		- *readInput:
 * 			needs, to scan not for whole line, but until equal sign.
 * 		- balbhablakb
 *
 *
 * */
