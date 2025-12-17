#include <setjmp.h>
#include <stdio.h>

static jmp_buf recovery_env;

void setup_recovery(void) {
    setjmp(recovery_env);
}

void trigger_recovery(void) {
    longjmp(recovery_env, 1);
}
