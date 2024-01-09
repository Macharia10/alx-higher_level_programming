#!/usr/bin/python3

if __name__ == "__main__":
    from calculator_1 import add, sub, mul, div

    a = 10
    b = 5

    add_result = add(a, b)
    sub_result = sub(a, b)
    mul_result = mul(a, b)
    div_result = div(a, b)

    print(add_result)
    print(sub_result)
    print(mul_result)
    print(div_result)
