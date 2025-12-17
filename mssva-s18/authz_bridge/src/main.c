#include <stdio.h>
#include <stdlib.h>
#include "policy.h"

void start_server(void);

int main(void) {
    init_policies();
    start_server();
    return 0;
}
