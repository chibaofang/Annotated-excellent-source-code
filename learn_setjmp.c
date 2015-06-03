#include "trans.h"
#include <stdio.h>
#include <stdlib.h>
#include <setjmp.h>

jmp_buf restart;

int main()
{
  int value;
  Trans *transaction;
  value = setjmp(restart);
   
  switch(setjmp(restart)){
    default:
      fputs("fatal error.\n", stderr);
      break;
    case 1:
    fputs("Invalid transaction.\n", stderr);
    
    case 0:
      while((transaction = geet_trans()) != NULL ){
        process_trans(transaction);
      }
  }
  
  write_data_to_file();
  return value ==0 ? EXIT_SUCCESS:EXIT_FAILURE;
}
