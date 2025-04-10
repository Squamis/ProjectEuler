def isPalendrom(x):
    testNumber=0
    savedX=x
    while (x>0):
        remainder=x%10
        testNumber=(testNumber*10)+remainder
        x=x //10
    if (testNumber==savedX):
        return True

def sum(x,y):
    largest=0
    for i in range(x,0,-1):
        for j in range(y,0,-1):
            if (isPalendrom(i*j)==True):
                if ((i*j)>largest):
                        largest=i*j
    return largest




def main():
    print(sum(999,999))

main()
