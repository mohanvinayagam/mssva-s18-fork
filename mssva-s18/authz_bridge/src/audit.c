#include <stdio.h>
#include "authz.h"

int audit_policy(authz_request_t *req) {
    if (req->resource_id == 42) {
        return DENY;
    }
    return ALLOW;
}
