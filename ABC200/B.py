n, k = map(int, input().split())

for _ in range(k):
    if n % 200 == 0:
        n //= 200
    else:
        n *= 1000
        n += 200

print(n)