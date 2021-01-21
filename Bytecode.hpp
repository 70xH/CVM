#ifndef BYTECODE_H
#define BYTECODE_H

#include <string>

class Bytecode
{
  public:
    const static int IADD = 1;    // int add
    const static int ISUB = 2;    // int sub
    const static int IMUL = 3;    // int multiply
    const static int ILT  = 4;    // int less than
    const static int IEQ  = 5;    // int equal
    const static int BR   = 6;    // branch
    const static int BRT  = 7;    // branch if true
    const static int BRF  = 8;    // branch if false
    const static int ICONST = 9;  // push constant int
    const static int LOAD   = 10; // load from local
    const static int GLOAD  = 11; // load from global
    const static int STORE  = 12; // store in local
    const static int GSTORE = 13; // store in global variables
    const static int PRINT  = 14; // print stack top
    const static int POP    = 15; // pop the top of the stack
    const static int HALT   = 16; // Stop!!

    const std::string opcodes[16] = { 
      "IADD",
      "ISUB",
      "IMUL",
      "ILT",
      "IEQ",
      "BR",
      "BRT",
      "BRF",
      "ICONST",
      "LOAD",
      "GLOAD",
      "STORE",
      "GSTORE",
      "PRINT",
      "POP",
      "HALT"
    };
};

#endif
