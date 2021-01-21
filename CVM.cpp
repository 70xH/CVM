// CPP libs
#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>

// HPP libs
#include "Bytecode.hpp"
#include "CVM.hpp"

void CVM::cpu()
{
  // fetch the instruction
  Bytecode bCode;

  while(ip < (int)code.size())
  {
    int opcode = code[ip];
    int operand;

    if ( trace )
    {
      printf("%04d: %s\n", ip, bCode.opcodes[opcode-1].c_str());      // using c_str will conver the std::string to char* with null terminator
    }

    // move to the next instruction
    ip++;

    switch(opcode)
    {
      case (bCode.ICONST):
        operand = code[ip];
        ip++;
        sp++;
        stack[sp] = operand;
        break;
      case (bCode.PRINT):
        operand = stack[sp];
        sp--;
        cout << operand << endl;
        break;
      case (bCode.HALT):
        return;
    }
  }
}
