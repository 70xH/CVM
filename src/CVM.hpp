#ifndef CVM_H
#define CVM_H

// CPP libs
#include <cstdlib>
#include <vector>

// HPP libs
#include "Bytecode.hpp"

using namespace std;

/*
 * A VM will have code mem, data mem, stack
*/

class CVM
{
  private:
    // memory
    vector<int> code;
    vector<int> data;
    vector<int> stack;

    // registers
    int ip;        // instruction pointer
    int sp = -1;   // stack pointer
    int fp;        // frame pointer

  public:
    // constructor - takes codes, initial starting point, memory it needs
    CVM(vector<int> code, int main, int datasize)
    {
      this->code = code;
      this->ip = main;
      this->data.reserve(datasize);
      this->stack.reserve(100);
    }

    bool trace = false;

    void cpu();
};

#endif
