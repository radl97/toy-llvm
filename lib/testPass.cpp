#include "testPass.h"

using namespace llvm;
using namespace testPass;

char Hello::ID = 0;

static RegisterPass<Hello> X("hello2", "Hello World Pass",
                             false /* Only looks at CFG */,
                             false /* Analysis Pass */);
