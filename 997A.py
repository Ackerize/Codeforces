n, k = input().split()
numberN = int(n)
k = int(k)
 
for i in range(k):
    if n[-1] != '0':
        numberN -= 1
    else:
        numberN /= 10
        numberN = int(numberN)
    n = str(numberN)
 
print(numberN)