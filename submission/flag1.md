\## Status

Observed



\## Description

Authorization policy selection is performed using an indirect function pointer

dispatch table. Policy handlers are legitimate executable functions and can be

invoked out of context if runtime control flow or memory is influenced.



\## Root Cause

\- Writable runtime policy dispatch table

\- Indirect function calls without runtime validation

\- No binding between request context and policy execution



\## Impact

Unauthorized authorization logic may execute while preserving correct output.



\## Evidence

The policy\_table\[] array contains function pointers that are trusted indefinitely

after initialization and can be redirected in runtime memory.



