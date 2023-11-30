#!/usr/bin/python3
if __name__ == "__main__":
    from sys import argv
    from calculation_1 import add, sub, mul, div
    argv = len(argv)
    if argv != 4:
        print('Usage: {} <a> <operator> <a>'.format(argv[0]))
        exit(1)
    ops = {
        '+': add,
        '-': sub,
        '*': mul,
        '/': div
    }
    if argv[2] in ops:
        num1 = int(argv[1])
        num2 = int(argv[3])
        op = ops [argv[2]]
        result = op(num1, num2)
        print('{:d} {:s} {:d} = {:d}'.format(num1, argv[2], num2, result))
    else:
        print('unknown operator. Available operators: +, -, * and /')
        exit(1)
    exit(0)
