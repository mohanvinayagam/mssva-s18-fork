CC=gcc
CFLAGS=-Wall -Wextra -fno-omit-frame-pointer -O0 -g
LDFLAGS=

INCLUDES=-Iinclude
SRC=src/main.c src/server.c src/policy.c src/audit.c src/recovery.c policies/default_policy.c 
BIN=authz_bridge

all:
	$(CC) $(CFLAGS) $(INCLUDES) $(SRC) -o $(BIN)

clean:
	rm -f $(BIN)
