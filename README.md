# dsa-prep

C++ implementations of classic algorithms and data structures, written from scratch while prepping for technical interviews.

## What's here

- [Binary Search](cpp/binarysearch.cpp)
- [Merge Sort](cpp/mergesort.cpp)

Shared helpers (`printVector`, `copyToVector`) live in [`cpp/utils.h`](cpp/utils.h) / [`cpp/utils.cpp`](cpp/utils.cpp).

## Build & run

Each file compiles with `clang++` alongside `utils.cpp`:

```sh
clang++ -g cpp/binarysearch.cpp cpp/utils.cpp -o cpp/binarysearch
./cpp/binarysearch
```

```sh
clang++ -g cpp/mergesort.cpp cpp/utils.cpp -o cpp/mergesort
./cpp/mergesort
```

In VS Code, you can instead open a source file and run the default build task (`Cmd+Shift+B`), which does the same thing.
