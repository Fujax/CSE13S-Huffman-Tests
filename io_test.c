#include "code.h"
#include "io.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
//NOTE: THIS TEST ONLY WORKS WITH RESPECT TO WRITE_CODE AND WRITE_BYTES. READ_BIT AND BYTES CAN BE TESTED AND DEBUGGED USING ENCODE.C
//THE IMAGE PROVIDED WITH THE CORRECT OUTPUT HAS PRINT STATEMENTS THAT SHOW THE BIT BEING PUSHED TO THE BUFFER AND THE BUT IN THE CODE ARRAY. I STRONGLY RECCOMMEND PUTTING PRINT STATEMENTS IN YOUR WRITE_CODE TO SEE THIS. 
//NOTE: THIS TEST FILE PRINTS THE ASCII VALUE FOR P TO STDOUT BY PUSHING THE BINARY IN REVERSE ORDER A.K.A. LSB TO MSB. IF THIS ISN'T HOW YOU IMPLEMENTED YOUR CODE STACK, THEN UNCOMMENT THE RIGHT ORDER AND TEST THAT INSTEAD. 
//CODE.C ALSO HAS TO BE COMPILED IN ORDER FOR THIS TEST TO WORK
//void write_codez( int outfile, Code *c);

int main(void) {
    Code code = code_init();


    //code_push_bit(&code, 0);
    /*code_push_bit(&code, 0);
    code_push_bit(&code, 1);
    code_push_bit(&code, 0);
    code_push_bit(&code, 1);
    code_push_bit(&code, 0);
    code_push_bit(&code, 0);
    code_push_bit(&code, 0);
    code_push_bit(&code, 0);*/

    code_push_bit(&code, 0);
    code_push_bit(&code, 0);
    code_push_bit(&code, 0);
    code_push_bit(&code, 0);
    code_push_bit(&code, 1);
    code_push_bit(&code, 0);
    code_push_bit(&code, 1);
    code_push_bit(&code, 0);
    //code_push_bit(&code, 0);



         //code_push_bit(&code, 0);
    code_print(&code);
    write_code(STDOUT_FILENO, &code);
    //printf("J size = %d\n", j);
    //prinf buffer
    flush_codes(STDOUT_FILENO);
}
