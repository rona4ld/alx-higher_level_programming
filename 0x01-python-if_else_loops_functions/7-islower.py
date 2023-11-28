#!/bin/python3
def islower(c):

    return ord('a') <= ord(c) <= ord('z')

print(islower('a'))  # True
print(islower('A'))  # False
print(islower('1'))  # False

