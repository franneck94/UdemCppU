# Compiler Support

To see what features are already implemented for the compilers, see [here](https://en.cppreference.com/w/cpp/compiler_support).

## Important C++20 Features

| Feature          | GCC  | Clang | MSVC | Apple Clang |
| ---------------- | ---- | ----- | ---- | ----------- |
| Concepts         | Yes  | Yes   | Yes  | Part        |
| Ranges           | Part | Part  | Yes  | No          |
| Modules          | Part | Part  | Yes  | Part        |
| Span             | Yes  | Yes   | Yes  | Yes         |
| Three-way Comp.  | Yes  | Yes   | Yes  | No          |
| Init. Range Loop | Yes  | Yes   | Yes  | Yes         |
| constinit        | Yes  | Yes   | Yes  | Yes         |
| Erase            | Yes  | Yes   | Yes  | Yes         |
| Coroutines       | Yes  | Part  | Yes  | Part        |
| Formatting       | No   | Yes   | Yes  | No          |

## Important C++23 Features

| Feature          | GCC  | Clang | MSVC | Apple Clang |
| ---------------- | ---- | ----- | ---- | ----------- |
| if consteval     | Yes  | Yes   | No   | Part        |
| string contains  | Yes  | Yes   | Yes  | Yes         |
| range *_with     | No   | No    | Yes  | No          |
