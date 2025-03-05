#Ryan Aguilar
#CSC 321-40
#Lab 8b

import random

rand = random.randint(0,9)
userInt = 0
forCounter = 5
whileCount = 0

print("Guess the number I have. ")
userInt = int(input())

if userInt == rand:
    print("You win, you got the number I have which was ", rand)
elif userInt > rand:
    print("You lost!\n")
    print("Your number was larger than mine, mine was ", rand)
elif userInt < rand:
    print("You lost!\n")
    print("Your number was smaller than mine, mine was ", rand)

#Loops a print statement for as the counter
for i in range(forCounter):
    print("Why are there so many C languages, like C, C#, and C++?")

#THAT += WAS VERY MUCH NEEDED! Remember how to run while loops next time!!
while whileCount < 6:
    print("Favorite food are omelettes.")
    whileCount += 1

#This should be an interesting attempt
