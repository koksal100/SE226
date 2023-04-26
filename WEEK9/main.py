import random

def function1(list1,list2):
    list3=[]
    for element in list1:
        if element in list2:
            list3.append(element)
    return list3



def isPalindrome(word):
    i=0
    for i in range(len(word)//2):
        if word[i] == word[-1 - i]:
            i += 1
        else:
            return False
    return True


def function2(list1):
    newList=[]
    i=0
    for word in list1:
        if isPalindrome(word):
            newList.append(word)


def  function3(list1):
    list1=sorted(list1)
    markedNumbers=[]
    primeNumbers=[]
    for number in list1:

        if number not in markedNumbers:
            if number >1:
                primeNumbers.append(number)
                for list1Number in list1:
                    if not list1Number in primeNumbers:
                        if not list1Number in markedNumbers:
                            for primeNumber in primeNumbers:
                                if list1Number%primeNumber==0:
                                    markedNumbers.append(list1Number)

    return primeNumbers


numbers=[]

for i in range(100):
    numbers.append(random.randint(0,100))

numbers=function3(numbers)
print(numbers)


def anagrams(word, word_list):

    sorted_word = sorted(word)

    anagrams = []

    for wordOflist in word_list:

        sorted_w = sorted(wordOflist)

        if sorted_word == sorted_w:

            anagrams.append(wordOflist)

    return anagrams







