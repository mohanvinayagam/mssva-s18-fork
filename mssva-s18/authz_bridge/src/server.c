#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include "authz.h"
#include "policy.h"

void start_server(void) {
    int server_fd, client_fd;
    struct sockaddr_in addr;
    authz_request_t req;

    server_fd = socket(AF_INET, SOCK_STREAM, 0);
    addr.sin_family = AF_INET;
    addr.sin_port = htons(9090);
    addr.sin_addr.s_addr = INADDR_ANY;

    bind(server_fd, (struct sockaddr *)&addr, sizeof(addr));
    listen(server_fd, 5);

    printf("[authz_bridge] listening on 9090\n");

    while (1) {
        client_fd = accept(server_fd, NULL, NULL);
        read(client_fd, &req, sizeof(req));

        policy_fn fn = get_policy(req.action);
        int decision = fn(&req);

        write(client_fd, &decision, sizeof(decision));
        close(client_fd);
    }
}
