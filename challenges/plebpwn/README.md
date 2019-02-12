# PlebPwn

Baby difficulty exploitation challenge. The task is a simple trigger overwrite
of a function pointer to point to a `print_me()` function.

Creator: amon

## Challenge Text

```html
Please pwn my plebian password program!

Please connect to xxx.xxx.xxx.xxx:1700
```

## Setup Guide

Run dockerbuild.sh, and then run dockerrun.sh.

## Solution Details

The stored EIP is at offset 80 and can be overwritten. A complication is the
`strcmp()` function that will crash program when the buffer is overwritten so to
actually trigger the arbitrary jump, a null byte has to be placed at the front
of the payload so we can go down the `strlen(buffer) == 0` path and avoid the
`strcmp` call.

Exploit is in service/exploit.py.

## Flag

`CrossCTF{av01d_th0s3_cr4sh3s}`
