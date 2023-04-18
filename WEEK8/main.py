factorıal = lambda x:  x*factorıal(x-1) if x>0 else 1


function1=lambda x,n: (n**x)/factorıal(x)+function1(x-1,n) if x!=0  else 1




globalVariable=0

def function2(n):
    """""
    this function calculates a sigma function
    which stars 1 and goes to the n.
    the rule is (-1 power (n+1)) divided by n. 
    """""
    global globalVariable
    if n==0:
        print(globalVariable)
    else:
        globalVariable+=(-1**(n+1))/(n)
        function2(n-1)


function2(11)