#include <stdio.h>
#include <arpa/inet.h>
#include <unistd.h>
#include "authz.h"

int main() {
    int fd;
    struct sockaddr_in addr;
    authz_request_t req = {1, 10, 0};
    int decision;

    fd = socket(AF_INET, SOCK_STREAM, 0);
    addr.sin_family = AF_INET;
    addr.sin_port = htons(9090);
    addr.sin_addr.s_addr = inet_addr("127.0.0.1");

    connect(fd, (struct sockaddr *)&addr, sizeof(addr));
    write(fd, &req, sizeof(req));
    read(fd, &decision, sizeof(decision));

    printf("Decision: %s\n", decision ? "ALLOW" : "DENY");
    close(fd);
}
