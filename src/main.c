#include "lib/log.h"

void test(void);
int main(void);

void test(void) {
    log_info("fn: %p", &test);
}

int main(void) {
    log_trace("fn: %p", &main);
#ifdef NDEBUG
    log_debug("debug value: %d", 1);
#else
    log_debug("debug value: %d", 0);
#endif
    test();
    log_error("Error!");
    log_fatal("Fatal error!");
    return 0;
}
