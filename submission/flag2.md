\## Status

Observed



\## Description

The service uses setjmp() and longjmp() to perform non-local control transfers,

which bypass normal function return semantics and stack unwinding.



\## Root Cause

longjmp() restores execution context directly, skipping intermediate return

addresses and violating call/return integrity assumptions.



\## Impact

Return-based control-flow telemetry cannot reliably validate execution order,

and malicious control transfers may be hidden within recovery logic.



\## Evidence

Execution resumes at a saved context without executing intervening return

instructions.



