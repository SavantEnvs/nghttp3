#include <cstdlib>

// Leak detection is off for every fuzz binary: this fleet fuzzes for memory corruption and UB, not leaks.
extern "C" int __lsan_is_turned_off() { return 1; }
