def isEven(x):
    if (x%2==0):
        return True
    else:
        return False

def fib():
    switch=0
    last=1
    current=2
    total=0
    while (current<=4000000):
        if (isEven(current)==True):
            total=total+current
        switch=current
        current=current+last
        last=switch
    return total
def main():
    print (fib())

main()
