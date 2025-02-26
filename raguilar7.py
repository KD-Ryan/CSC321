#Ryan Aguilar
#CSC-321-40 
#Lab 7a

#======================

#Starting variables
a = 8
b = 6.817
strVar = "This is definitely not a string"

#Variables to check against the ones above
checkA = 5
checkB = 29.18
checkStr = "Can this be compared?!"

#Check Variable A
if a > checkA:
    print('The variable a ', a, ' is greater than my number', checkA)
elif a == checkA:
    print('The variable a ', a, 'is the same as my number', checkA)
elif a < checkA:
    print('The variable a ', a, 'is less than my number', checkA)

#Check Variable B
if b > checkB:
    print('The variable b ', b, 'is greater than my number', checkB)
elif b == checkB:
    print('The variable b ', b, 'is the same as my number', checkB)
elif b < checkB:
    print('The variable b ', b, 'is smaller than my number', checkB)

#Check the String Vriable
if strVar == checkStr:
    print('These are definitely the same strings')
elif strVar != checkStr:
    print('The string', strVar, ' is NOT the same as mine!')
