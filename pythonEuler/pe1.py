def isMofY(x,y):
    if (x % y == 0):
        return True
    else:
        return False


def sum():
    total=0
    for x in range(1000):
        if ((isMofY(x,5)==True) or (isMofY(x,3)==True)):
            total=total+x
    print(total)

def main ():
    sum()

main()
