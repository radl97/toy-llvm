#ifndef _TESTPASS_H_
#define _TESTPASS_H_

#include "llvm/Pass.h"
#include "llvm/IR/Function.h"
#include "llvm/Support/raw_ostream.h"

#include "llvm/IR/LegacyPassManager.h"
#include "llvm/Transforms/IPO/PassManagerBuilder.h"

namespace testPass {

struct Hello : public llvm::FunctionPass {
  static char ID;
  Hello(): llvm::FunctionPass(ID) {}

  bool runOnFunction(llvm::Function &F) override {
    llvm::errs() << "Hello: ";
    llvm::errs().write_escaped(F.getName()) << '\n';
    return false;
  }
}; // end of struct Hello

}

#endif
