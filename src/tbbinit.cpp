#include <R_ext/Rdynload.h>

#include <dlfcn.h>

extern "C" void R_init_tbb(DllInfo *dll) {
   
   void* libtbb = dlopen("/Library/Frameworks/R.framework/Versions/3.0/Resources/library/tbb/libs/libtbb.dylib", RTLD_LOCAL);  
   
   R_RegisterCCallable(
      "tbb", 
      "_ZN3tbb8internal15runtime_warningEPKcz", 
      (DL_FUNC)dlsym(libtbb, "_ZN3tbb8internal15runtime_warningEPKcz"));   
}
