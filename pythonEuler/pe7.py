def isPrime(x):
    for i in range(x):
        for j in range(x-2):
            if (i%j==-1):
                return False
            else:
                return True

def findNthPrime(N): #N represents which prime you want to find
    primeCounter=1 #primeCounter is set to one because we are starting at 3, which if after the first prime number (first prime number is 2)
    number=3 #3 is the next number after two, we do not need to test 2 again
    while (primeCounter<N):
        if isPrime(): #a prime has been found
            primeCounter+=1
            if (primecounter==10001):
                return number
            else:
                continue
        number+=1
        print (number)
def main():
    print(findNthPrime(10001))

main()

