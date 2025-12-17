#ifndef AUTHZ_H
#define AUTHZ_H

#define ALLOW 1
#define DENY  0

typedef struct {
    int user_id;
    int resource_id;
    int action;
} authz_request_t;

typedef int (*policy_fn)(authz_request_t *);

#endif
