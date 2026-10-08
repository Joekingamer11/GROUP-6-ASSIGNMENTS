# Week 1
## Files added

I added a small test support header, `tests/mini_test.hpp`, which provides reusable macros for checking conditions, equality, numerical closeness, and exceptions. The `finish()` function reports the total number of test failures and returns `0` when all tests pass.

I also added `include/cppviz/text_util.hpp` and `src/text_util.cpp`. These provide helper functions for trimming whitespace, splitting strings, converting text to lowercase, and safely parsing numeric values. These utilities are designed to support CSV processing and other input-handling tasks in the library.
