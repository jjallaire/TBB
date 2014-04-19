#include <tbb/tbb_stddef.h>

extern "C" DL_FUNC _ZN3tbb8internal15runtime_warningEPKcz = R_GetCCallable("tbb", "_ZN3tbb8internal15runtime_warningEPKcz");

// [[Rcpp::export]]
void testTbb() {
   tbb::internal::runtime_warning("no way!!!");
}
