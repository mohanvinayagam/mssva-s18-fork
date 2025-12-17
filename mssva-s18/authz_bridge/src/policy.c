#include <stdio.h>
#include "policy.h"

/* policy dispatch table */
static policy_fn policy_table[3];

extern int default_policy(authz_request_t *);
extern int audit_policy(authz_request_t *);

void init_policies(void) {
    policy_table[0] = default_policy;
    policy_table[1] = audit_policy;
    policy_table[2] = default_policy;
}

policy_fn get_policy(int action) {
    if (action < 0 || action > 2)
        return default_policy;
    return policy_table[action];
}
