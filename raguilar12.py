#Ryan Aguilar
#CSC321-40
#Lab 12 - April 4th, 2025

#Calculate the area of the rectangle
def rectangleArea(base, height):
    return base * height

#Calculate the area of a circle
def circleArea(radius):
    return radius * radius * 3.1415


print("AREA CALCULATOR: RECTANGLE & CIRCLE")
print("===========================\n")
print("Rectangle Area Calculator: \n")
base = int(input("Enter the base: "))
height = int(input("Enter the height: "))
rectArea = rectangleArea(base, height)
print("The area of the rectangle is ", rectArea)

print("\nArea of a Circle Calculator: \n")
radius = int(input("Enter the radius: "))
circArea = circleArea(radius)
print("The area of the circle is ", circArea)

