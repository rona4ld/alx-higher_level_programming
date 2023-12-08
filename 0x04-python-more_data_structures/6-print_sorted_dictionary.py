#!/usr/bin/python3

def print_sorted_dictionary(a_dictionary):
    if a_dictionary is None:
        return
    for k in sorted(a_dictionary.keys()):
        print("{}: {}".format(K, a_dictionary.get(k)))
