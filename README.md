# Array Sorting Performance & White-Box Testing

This project has two sections:

- **Section 1** benchmarks array-sorting time across different array sizes and initial data orderings (random, sorted, reverse-sorted).
- **Section 2** applies white-box testing techniques to validate floating-point error tolerance in user-defined trigonometric functions.

## Tech Used

- C++
- Standard Library (`<chrono>` for timing, `<cmath>` for trig)

## File Breakdown

### Section 1 — Sorting Benchmarks

| File | Description |
|------|-------------|
| `sec1_header.h` | Header file with function declarations and global variables. Included in `sec1_arrayutils.cpp`. |
| `sec1_main.cpp` | Entry point — invokes sorting routines and records timing results. |
| `sec1_arrayutils.cpp` | Implements the functions declared in the header. Included in `sec1_main.cpp`. |
| `sec1_executable.exe` | Pre-built executable binary. |

### Section 2 — White-Box Testing

| File | Description |
|------|-------------|
| `sec2_header.h` | Header file with function declarations and global variables. Included in `sec2_trigono_utils.cpp`. |
| `sec2_main.cpp` | Entry point — runs test cases against the trig functions in `S2.cpp`. |
| `sec2_trigono_utils.cpp` | Implements the test utility functions declared in the header. Included in `sec2_main.cpp`. |
| `S2.cpp` | Contains the user-defined trigonometric functions under test. |
| `sec2_executable.exe` | Pre-built executable binary. |

## How to Build & Run

Compile with any C++ compiler (e.g. g++):

```bash
# Section 1
g++ sec1_main.cpp -o sec1 && ./sec1

# Section 2
g++ sec2_main.cpp -o sec2 && ./sec2
```

Or run the pre-built `.exe` files directly on Windows.
