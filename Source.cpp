//Made By therealogplayer & codfish890
//Made On 1/29/2023
//Updated 09/05/2023

#include <cctype>
#include <iostream>
#include<cmath>

using namespace std;

int main()
{

    //Gets User Input
    string name;
    string sexInput;
    float age;
    float feet;
    float inches;
    float weight;
    cout << "What is your name? \n";
    cin >> name;
    cout << "What is your sex?(M=Male, F=Female)\n";
    cin >> sexInput;
    cout << "What is your age? \n";
    cin >> age;
    cout << "What is your height: Feet: \n";
    cin >> feet;
    cout << "What is your height: Inches: \n";
    cin >> inches;
    cout << "What is your weight? \n";
    cin >> weight;
    system("cls");

    cout << "Warrning This Calculator Was Made For Fun And Is Not To Be Used As A Recommendation.\n\n";


    float hight = (feet * 12) + inches;
    float hightInCM = hight * 2.5;
    float weightInKG = weight * 0.45359237;


    //Gets User BMI
    float BMI = (703 * weight) / pow(hight, 2);

    //See Whats The User Weight Is:
    if (BMI <= 18.5)
    {
        string BMIH = "Underweight";
        cout << name << ", your BMI is: " << BMI << " Meaning you are, " << BMIH << "\n";
    }
    else if (BMI >= 18.5 && BMI <= 24.9)
    {
        string BMIH = "Normal Weight";
        cout << name << ", your BMI is: " << BMI << " Meaning you are, " << BMIH << "\n";
    }
    else if (BMI >= 25 && BMI <= 29.9)
    {
        string BMIH = "Over Weight";
        cout << name << ", your BMI is: " << BMI << " Meaning you are, " << BMIH << "\n";
    }
    else if (BMI >= 30)
    {
        string BMIH = "Obese";
        cout << name << ", your BMI is: " << BMI << " Meaning you are, " << BMIH << "\n";
    }

    //Conversion

    if (sexInput == "M" || sexInput == "m")
    {
        float metabolism = 66.5 + (13.75 * weightInKG) + (5.003 * hightInCM) - (6.775 * age);

        cout << name << ", Your average calories burnt per day, by doing nothing is: " << metabolism << "\n";
        cout << name << ", You will need " << weight * 13.5 << " Grams of Sugure to die.\n";
        cout << name << ", You will need " << (0.00000025 * weightInKG) * 1000 << " Grams of Adderll to die.\n";
        cout << name << ", You will need " << (0.00015 * weightInKG) * 1000 << " Grams of Caffeine to die.\n";
        cout << name << ", You will need " << (0.00075 * weightInKG) * 1000 << " Grams of Table Salt to die.\n";
        cout << name << ", You will need " << (0.000636 * weightInKG) * 1000 << " Grams of IBuprofen to die.\n\n";

        system("pause");
        return 0;
    }
    else if (sexInput == "F" || sexInput == "f")
    {
        float metabolism = 655.1 + (9.563 * weightInKG) + (1.850 * hightInCM) - (4.676 * age);


        cout << name << ", Your average calories burnt per day, by doing nothing is: " << metabolism << "\n";
        cout << name << ", You will need " << weight * 13.5 << " Grams of Sugure to die.\n";
        cout << name << ", You will need " << (0.00000025 * weightInKG) * 1000 << " Grams of Adderll to die.\n";
        cout << name << ", You will need " << (0.00015 * weightInKG) * 1000 << " Grams of Caffeine to die.\n";
        cout << name << ", You will need " << (0.00075 * weightInKG) * 1000 << " Grams of Table Salt to die.\n";
        cout << name << ", You will need " << (0.000636 * weightInKG) * 1000 << " Grams of IBuprofen to die.\n\n";

        system("pause");
        return 0;
    }
    else {
        cout << "Sex was not correct, Needs to be Male Or Female not " << sexInput << "\n Don't forget it is CAP sensitive.\n\n";

        system("pause");
        return 0;
    }

}
