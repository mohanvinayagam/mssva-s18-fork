# MSSVA-S18: Binary Integrity & Control-Flow Telemetry

## Context

You are given an internal service called `authz_bridge`.

It is a security-critical authorization service that:
- Runs continuously
- Produces correct output
- Does not crash

You are **not** asked to exploit or fix it.

Your task is to determine whether its **runtime execution can still be trusted**.

---

## Threat Model

Assume:
- The binary on disk is trusted
- The service is already running
- An attacker may influence runtime memory or control flow
- The attacker wants to stay stealthy

---

## Objective

Design and implement **user-space runtime telemetry** to validate the
execution integrity of `authz_bridge`.

You must decide:
- What execution assumptions matter
- What invariants must hold
- What to instrument to validate them

---

## Constraints

- Do NOT modify or recompile the service
- Do NOT rely on crashes
- Kernel instrumentation is NOT allowed
- Use intentional, minimal telemetry

---

## Submission

You must submit a directory named `submission/` with the following files:

