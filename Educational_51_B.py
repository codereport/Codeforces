# code_report Solution
# https://youtu.be/vcF8mTjgt6o

l, r = (int(i) for i in input().split())
print('YES')
for i in range(l, r, 2):
    print(i, i+1)
