# CF 1409A - Yet Another Two Integers Problem

t = int(input())
for _ in range(t):
    a, b = map(int, input().split())
    diff = abs(a - b)
    moves = (diff + 9) // 10   # ceil(diff / 10)
    print(moves)
