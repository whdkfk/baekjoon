a = int(input())
arr = list(map(int, input().split()))

m = max(arr)

n = 0
for i in range(a):
    n += arr[i] / m * 100

print(n / a)
