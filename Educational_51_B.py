# code_report Solution
# 

l, r = (int(i) for i in input().split())
print('YES')
for i in range(l, r, 2):
    print(i, i+1)
