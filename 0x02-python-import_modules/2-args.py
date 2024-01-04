#!/bin/usr/python3

import sys

args = sys.argv[1:]

num_args = len(args)

print("Number of argument{}: ".format('s' if num_args != 1 else ''), end='')
print("{}".format(num_args), end='')
print("{}".format('' if num_args == 0 else ':'))

if num_args > 0:
    for i, arg in enumerate(args, start=1):
        print("{}: {}".format(i, arg))
