# code_report Solution
# https://youtu.be/A33vNPH02FA

n, x, y = (int (i) for i in input ().split())
s = input ()

on = False
c  = 0

for e in s:
    if (e == '0' and not on):
        on = True
        c += 1
    elif (e == '1'):
        on = False

print (max(0, min((c-1)*x + y, c*y)))
