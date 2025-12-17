# Submission Summary

Name(s):
ID:
Date:

---
## submission structure
```text
submission/
├── README.md
├── flag_1.md
├── flag_2.md
├── flag_3.md
├── flag_4.md
└── flag_5.md
```
## Summary
```text
| Flag | Status |
|------|--------|
| Flag 1 – Unauthorized Policy Handler Execution | Observed / Not Observed |
| Flag 2 – Return Address Integrity Violation | Observed / Not Observed |
| Flag 3 – Runtime Function Resolution Tampering | Observed / Not Observed |
| Flag 4 – Non-Linear Control Transfer Abuse | Observed / Not Observed |
| Flag 5 – Unobserved Execution Path Activation | Observed / Not Observed |
```
### flagX.md

# Flag X – <Flag Name>

## Invariant
What execution rule is being validated?

## Telemetry
What did you instrument, and why?

## Observation
Observed or Not Observed.
Include brief evidence or reasoning.

## Security Impact
Why does this matter in a real system?

## Limitations
What might your approach miss?

## Submission Method

### Repository Workflow

1. **Fork** the provided repository on GitHub  
2. Work only in **your fork**
3. Do NOT open pull requests to the upstream repository

---

### Submission Structure

You must create a directory named `submission/` with the following files:

Each `flag_X.md` reports whether the corresponding execution violation
was **Observed** or **Not Observed**, with reasoning and evidence.

---

## Submission Steps (Commands)

```bash
# Clone your fork
git clone https://github.com/<your-username>/authz_bridge.git
cd authz_bridge
```
# Create submission files
```bash
mkdir submission
touch submission/README.md
touch submission/flag_1.md submission/flag_2.md submission/flag_3.md \
      submission/flag_4.md submission/flag_5.md
```
# Add and commit your submission
```bash
git add submission/
git commit -m "Binary integrity & control-flow telemetry submission"
```
# Create the required tag
```bash
git tag mssva-binary-telemetry
```
# Push commit and tag to your fork
```bash
git push origin main
git push origin mssva-binary-telemetry
```