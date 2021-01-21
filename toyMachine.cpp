// CPP libs
#include <cstdlib>
#include <vector>

// HPP libs
#include "Bytecode.hpp"
#include "CVM.hpp"

using namespace std;

Bytecode bCode;
vector<int> codeOne = { 
  bCode.ICONST, 99,
  bCode.PRINT,
  bCode.HALT 
};


int main()
{
  CVM cvm(codeOne, 0, 0);
  cvm.trace = true;
  cvm.cpu();

  return 0;
}
