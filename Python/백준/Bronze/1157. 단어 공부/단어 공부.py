a = input().upper()
al = [0] * 26

for i in a:
    idx = ord(i)-65
    al[idx] += 1

a=0
max = max(al)
for i in range(len(al)):
    if al.count(max) > 1:
        a=1

if a==0:
    print(chr(al.index(max)+65))
else:
    print('?')
