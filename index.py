#Made By The Real OG Player
#1/29/2023

import os

os.system('cls')
name = input("What is your name? \n")
sexInput = input("What is your sex? (M=Male, F=Female) \n")
age = float(input("What is your age? \n"))
feet = float(input("What is your height: Feet: \n"))
inches = float(input("What is Your height: Inches: \n"))
hight = (feet * 12) + inches 
weight = float(input("What is your weight in Pounds? \n"))
os.system('cls')

print("WARNING: Although our calculator may say you can handle more then you think. A lot more factors go into it and we highly recommend talking to a doctor before trying anything to this amount. This is for fun and is not scientific")

BMI = 703 * weight / hight ** 2

#Print If The user is healthy
if BMI <= 18.5:
    BMIH = "Underweight"
elif BMI >= 18.5 and BMI <= 24.9:
    BMIH = "Normal Weight"
elif BMI >= 25 and BMI <= 29.9:
    BMIH = "Over Weight"
elif BMI >= 30:
    BMIH = "Obese"

#Get's user input

print(name, ", Your BMI is: ", BMI, " Meaning you are, ", BMIH)



if sexInput.upper() == "M":
    sex = "Male"
elif sexInput.upper() == "F":
    sex = "Female"
else:
    print("Sex was not correct, Needs to be Male Or Female not ", sexInput)
    exit()


#Conversions 
if sex == "Male":
    weightInKG = weight * 0.45359237
    hightInCM = hight * 2.5

    metabolism = 66.5 + (13.75 * weightInKG) + (5.003 * hightInCM) - (6.775 * age)


    print("Your average calories burnt per day, by doing nothing is: " , metabolism, "\n",)
    print(name, " You will need", weight * 13.5, "Grams of Sugure to die")
    print(name, " You will need", (0.00000025 * weightInKG) * 1000 , "Grams of Adderll to die")
    print(name, " You will need", (0.00015 * weightInKG) * 1000 ,"Grams of Caffeine to die")
    print(name, " You will need", (0.00075 * weightInKG) * 1000 ,"Grams of Table Salt to die")
    print(name, " You will need", (0.000636 * weightInKG) * 1000 ,"Grams of IBuprofen to die")
    print(name, "You will Die at the age of: ", (BMI + metabolism) * 0.04818372569130743311024716691492)

    exit()

if sex == "Female":
    weightInKG = weight * 0.45359237
    hightInCM = hight * 2.5

    metabolism = 655.1 + (9.563 * weightInKG) + (1.850 * hightInCM) - (4.676 * age)


    print("Your average calories burnt per day, by doing nothing is: \n" , metabolism, "\n")
    print(name, " You will need ", weight * 13.5, "Grams of Sugure to die")
    print(name, " You will need", (0.00000025 * weightInKG) * 1000 , "Grams of Adderll to die")
    print(name, " You will need", (0.00015 * weightInKG) * 1000 ,"Grams of Caffeine to die")
    print(name, " You will need", (0.00075 * weightInKG) * 1000 ,"Grams of Table Salt to die")
    print(name, " You will need", (0.000636 * weightInKG) * 1000 ,"Grams of IBuprofen to die")
    print(name, "You will Die at the age of: ", (BMI + metabolism) * 0.04818372569130743311024716691492)

    exit()
