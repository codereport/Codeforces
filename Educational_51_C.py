# code_report Solution
# https://youtu.be/q56uTA6t9Uk

def vasya_and_multisets(v):
    m = dict()
    for e in v:
        m[e] = m.get(e, 0) + 1
    
    ones = 0
    has_gt2 = False
    for e in m.values():
        if (e == 1):
            ones += 1
        if (e > 2):
            has_gt2 = True
    odd_ones = ones % 2 == 1
    
    if (odd_ones and not has_gt2):
        print("NO")
    else:
        print("YES")
        A = True
        ans = ''
        for e in v:
            if (m[e] == 2):
                ans += 'A'
            elif (m[e] == 1):
                if A: 
                    ans += 'A' 
                else:
                    ans += 'B'
                A = not A
            else:
                if (odd_ones):
                    ans += 'B'
                    odd_ones = False
                else:
                    ans += 'A'
        print(ans)
            
n = int(input())
v = list(map(int,input().split()))
vasya_and_multisets(v)

