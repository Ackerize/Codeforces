year = int(input())
actual = year + 1
while True:
    if len(set(str(actual))) == 4:
        print(actual)
        break
    actual += 1