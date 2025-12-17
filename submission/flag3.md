\## Status

Observed



\## Description

Authorization decisions rely on runtime-resolved function pointers that are not

validated after initialization.



\## Root Cause

\- Function pointers stored in writable memory

\- No immutability or integrity checks after startup

\- Indirect calls trust runtime state completely



\## Impact

Authorization behavior can be silently redirected without modifying the binary.



\## Evidence

The policy dispatch table is populated once and trusted for the lifetime of the

service without runtime verification.



