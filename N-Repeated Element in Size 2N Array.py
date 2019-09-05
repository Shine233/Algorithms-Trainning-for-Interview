from collections import Counter

A = [5, 1, 5, 2, 5, 3, 5, 4]
C = dict(Counter(A))

for k, v in C.items():
    if v > 1:
        print(k)
