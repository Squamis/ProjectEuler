#Problem 3 The prime factors of 13195 are 5, 7, 13 and 29.What is the largest prime factor of the number 600851475143 ?
#this gave me a memory error, I found a better solution while looking for a fix to this, see below. 
"""def isPrime(x):
    for i in range(x):
        y=x-2
        for j in range(x,2,1):
            if (i%j==0):
                 return False
    return True

def largestFactor(x):
    y=x-2
    for i in range(y,2,-1):
        if (isPrime(i)==True):
            return i
            break

def main():
    print(largestFactor(600851475143))
main()"""


i=2
n=600851475143
while i*i < n:
    while n%i == 0:
        n = n/i
        i = i+1
print n
