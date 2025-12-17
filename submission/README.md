\# MSSVA-S18: Binary Integrity \& Control-Flow Telemetry



Name(s): mohanraj v

ID: mohanvinayagam

Date: 18-12-25



\## Service

authz\_bridge



\## Objective

To determine whether the runtime execution of a security-critical authorization

service can be trusted under a stealthy attacker model, without modifying the

binary, recompiling the service, or using kernel instrumentation.



\## Constraints

\- Binary on disk is trusted

\- Service is already running

\- No recompilation or binary modification

\- No kernel instrumentation

\- Correct output does not imply trusted execution



\## Methodology

User-space execution integrity reasoning was applied using:

\- Control-flow invariants

\- Runtime function dispatch analysis

\- Non-linear control transfer analysis

\- Behavioral execution path analysis



\## Summary



| Flag | Status |

|------|--------|

| Flag 1 – Unauthorized Policy Handler Execution | Observed |

| Flag 2 – Return Address Integrity Violation | Observed |

| Flag 3 – Runtime Function Resolution Tampering | Observed |

| Flag 4 – Non-Linear Control Transfer Abuse | Observed |

| Flag 5 – Unobserved Execution Path Activation | Observed |



\## Conclusion

Although authz\_bridge produces correct output and does not crash, multiple

execution-integrity violations exist at runtime. These violations demonstrate

that correct behavior alone is insufficient to establish trust in execution.



