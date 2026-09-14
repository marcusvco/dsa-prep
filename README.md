# dsa-prep

C++ implementations of classic algorithms and data structures, written from scratch while prepping for technical interviews.

## What's here

- [Binary Search](algorithms/binarysearch.cpp)
- [Merge Sort](algorithms/mergesort.cpp)

Shared helpers (`printVector`, `copyToVector`) live in [`algorithms/utils.h`](algorithms/utils.h) / [`algorithms/utils.cpp`](algorithms/utils.cpp).

## Build & run

Each file compiles with `clang++` alongside `utils.cpp`:

```sh
clang++ -g algorithms/binarysearch.cpp algorithms/utils.cpp -o algorithms/binarysearch
./algorithms/binarysearch
```

```sh
clang++ -g algorithms/mergesort.cpp algorithms/utils.cpp -o algorithms/mergesort
./algorithms/mergesort
```

In VS Code, you can instead open a source file and run the default build task (`Cmd+Shift+B`), which does the same thing.
