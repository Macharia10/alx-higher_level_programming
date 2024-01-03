#!/usr/bin/python3
def uppercase(s):
    for char in s:
        upper_code = ord(char) - 32 if 97 <= ord(char) <= 122 else ord(char)
        print("{}".format(chr(upper_code)), end="")
    print()
