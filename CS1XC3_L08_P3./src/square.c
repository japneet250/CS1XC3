/*******************************************************************************
*
* Purpose: Square area calculator.  Outputs caculated square areas from 
* side length provided via standard input... outputs them with a unit 
* provided as 2nd argv values.  i.e. if we run with ""./square inches" expect 
* output of the format: 50 inches
*
*******************************************************************************/
#include <stdio.h>
#include "library.h"

int main(int argc, char *argv[]){
  int m;
  if (argc != 2) 
  {
    printf("Incorrect number of arguments provided.\n");
    return 0;
  }
  while (scanf("%d", &m) != EOF) 
  {
   
    printf("%d ", square_area(m));
    printf("%s\n",argv[1]);
  }

  return 0;
}