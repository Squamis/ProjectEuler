# 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder. What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?


def main():
    number=20
    #remenderFound is the more global one should only go to flip to true when the final number is found
    #subRemander is used in the fuction that goes throught the first 20 numbers, if it stays true that means that the remanderFound will turn to true, dont forget to reset this
    remanderFound=False
    subRemander=True
    while (remanderFound==False):
        for i in range (20,1,-1):
            if (number%i!=0):
                number=20
                subRemander=False
                break

            else:
                continue
        if(subRemander==True):
            remanderFound=True
            print(number)
            break
                
main()
