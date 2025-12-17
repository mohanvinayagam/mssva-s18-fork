#include "authz.h"

int default_policy(authz_request_t *req) {
    if (req->user_id == 0)
        return DENY;
    return ALLOW;
}
