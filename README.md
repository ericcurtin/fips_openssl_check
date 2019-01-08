# fips_openssl_check
A simple C program to check if installed libcrypto library has FIPS enabled

Compile like so:

`gcc fips_openssl_check.c -lcrypto`

or

`gcc fips_openssl_check.c -l:libcrypto.so.1.0.2`

if you have multiple libcrypto versions installed and want to check a specific
one. Other compilers such as clang are fine too.

Execute to perform the check:

`./a.out`

