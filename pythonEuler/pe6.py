#WORKING
#The sum of the squares of the first ten natural numbers is, The square of the sum of the first ten natural numbers is, Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

def squareOfSum(x):
    sum=0
#i think that I need to do the x+1 thing
    for j in range(x+1):
        sum += j
    return (sum*sum)


def sumOfSquare(y):
    sumOfSquareCounter=0
    for i in range(y+1):
        print (y)
        square=(i*i)
        print (square)
        sumOfSquareCounter+=square
    return sumOfSquareCounter

def difference(x,y):
    return x-y

def main():
    x=squareOfSum(100)
    y=sumOfSquare(100)
    print (x)
    print(y)
    print(difference(x,y))
main()
