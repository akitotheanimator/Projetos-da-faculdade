import math

def compare(a,b):
    a1 = a
    b1 = b
    if b > a:
        a1 = b
        b1 = a
    while a == 0 or b == 0:
        a1 += 1
        b1 += 1
    

    res = math.floor(b1 / a1)
    return 1 if res == 1 else 0



print(compare(8.5, 8.5))
