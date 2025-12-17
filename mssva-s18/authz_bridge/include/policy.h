#ifndef POLICY_H
#define POLICY_H

#include "authz.h"

void init_policies(void);
policy_fn get_policy(int action);

#endif
