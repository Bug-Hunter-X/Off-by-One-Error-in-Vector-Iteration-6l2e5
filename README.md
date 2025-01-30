# Off-by-One Error in C++ Vector Iteration

This repository demonstrates a common off-by-one error that occurs when iterating over a `std::vector` in C++.  The error arises from using the `<=` operator in the loop condition, which attempts to access an element beyond the valid index range of the vector.

The `bug.cpp` file contains the code with the error, which leads to undefined behavior (likely a crash). The `bugSolution.cpp` file shows the corrected code with proper loop bounds.