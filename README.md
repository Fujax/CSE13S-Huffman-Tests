# Description
This repository contains multiple C files that are meant to test other C files used in the Huffman coding assignment for CSE13S Winter 2022

Note: These files are small test cases and do not account for edge and corner cases for this assignment. These files should be used before moving on to the encoder and decoder.
# Files required
```
node.c/h
pq.c/h
stack.c/h
code.c/h
io.c/h
huffman.c/h
```

# Running
Run the following:

```
clang -Wall -Werror -Wextra -Wpedantic -o executable_name_here  test_file_here  c_file_you_want_to_test_here  
```
Note that this can be included in a Makefile as well if your directory has one

# Building
```
./executable_name_here
```
