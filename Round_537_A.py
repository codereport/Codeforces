# code_report Solution
# Video Link: https://youtu.be/082mInmBC8Q
# Problem Link: https://codeforces.com/contest/1111/problem/A

def is_vowel(c):
    return c in ['a','e','i','o','u']

def superhero_transformed(a, b):
    if len(a) != len(b): return False
    res = True
    for c, d in zip(a, b):
        res = res and is_vowel(c) == is_vowel(d)
    return res
    
a, b = input().strip(), input().strip()
if superhero_transformed(a, b): print('Yes')
else:                           print('No')
