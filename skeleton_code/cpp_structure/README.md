# CPP Project Structure

Following instructions from https://medium.com/swlh/
c-project-structure-for-cmake-67d60135f6f5

## Dir Structure
- src (private source files (.h, .m, .cpp))
- include (public header files)
- test (tests)
- libs (third party libraries e.g. googletest)

## Setup

```
mkdir build
cd build
cmake ..
make
make test
```