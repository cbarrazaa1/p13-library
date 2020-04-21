# Conversions Library
Library with helper functions to convert strings to actual numbers, with support for binary and hexadecimal bases too.

# How to use
Download `P13.dll` and include it in the same folder as your app. Manually import each function using the `Windows.h` header.

1. `#include` the `Windows.h` header.
2. Declare a pointer to hold your dll:
```
HMODULE dll = LoadLibraryA("P13.dll");
```
3. Load each function separately. I recommend declaring the following type definitions so you write less code:
```
typedef int (*BinaryToIntFunc)(const char*);
typedef int (*HexToIntFunc)(const char*);
typedef double (*AsciiToDoubleFunc)(const char*);
```
4. Then you can load each function using `GetProcAddress`. For example:
```
BinaryToIntFunc asciiBinaryToInt = GetProcAddress(dll, "asciiBinaryToInt);
```
5. Once loaded, you can now use it as a function:
```
asciiBinaryToInt("011") ==> 3
```
**NOTE:** make sure you check for NULL after calling `LoadLibraryA` and `GetProcAddress` to make sure there was no error while loading the DLL or any of its functions.

# Available functions
```
int asciiBinaryToInt(const char* s);
```
Converts a binary number represented as a string to its numerical representation in decimal base.

```
int asciiHexToInt(const char* s);
```
Converts a hexadecimal number represented as a string to its numerical representation in decimal base.

```
double asciiToDouble(const char* s);
```
Converts a floating-point number represented as a string to its numerical representation as a double.
