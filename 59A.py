s = input()
contLower = 0
contUpper = 0
 
for i in s:
    if i.islower():
        contLower += 1
    else:
        contUpper += 1
 
if contUpper > contLower:
    print(s.upper())
else:
    print(s.lower())