#include <iostream>
using namespace std;

// 1.Take marks of 3 subjects and check if a student passes or fail
int main()
{
    int Math, English, Computer;

    cout << "Enter Subjects Number" << endl;
    cin >> Math >> English >> Computer;

    if (Math >= 40 && English >= 40 && Computer >= 40)
    {
        cout << "You are Pass" << endl;
    }
    else
    {
        cout << "You are fail" << endl;
    }
    return 0;
}

// 2.Students grades -> 90-100 -> A Grade ,75-89 ->B Grade ,60-74 -> C Grade , <60 -> Fail.
int main()
{
    int marks;
    cout << "Enter Student Marks" << endl;
    cin >> marks;

    if (marks >= 90 && marks <= 100)
    {
        cout << "A Grade" << endl;
    }
    else if (marks >= 75 && marks <= 89)
    {
        cout << "B Grade" << endl;
    }
    else if (marks >= 60 && marks <= 74)
    {
        cout << "C Grade" << endl;
    }

    else
    {
        cout << "बधाई हो, आप Fail हो गए हैं।" << endl;
    }
    return 0;
}

// 3.Write a program that checks if a number is positive,negative,or zero.
int main()
{
    int num;
    cout << "Enter Number" << endl;
    cin >> num;

    if (num > 0)
    {
        cout << "Possitive Number" << endl;
    }
    else if (num < 0)
    {
        cout << "Negative Number" << endl;
    }
    else
    {
        cout << "Zero " << endl;
    }
    return 0;
}

// 4.Write a program that asks for a number (1-7) and prints the day name using a switch statement.
int main()
{
    int Day;
    cout << "Enter Your Favorite Day" << endl;
    cin >> Day;

    switch (Day)
    {
    case 1:
        cout << "Monday" << endl;
        break;
    case 2:
        cout << "Tuesday" << endl;
        break;
    case 3:
        cout << "Wednesday" << endl;
        break;
    case 4:
        cout << "Thusday" << endl;
        break;
    case 5:
        cout << "Friday" << endl;
        break;
    case 6:
        cout << "Saturday" << endl;
        break;
    case 7:
        cout << "Sunday" << endl;
        break;

    default:
        break;
    }
    return 0;
}

// 5.Write a program to find whether a person is eligible for a driving license (age >= 18).
int main()
{
    int age;
    cout << "Enter Your Age" << endl;
    cin >> age;
    if (age >= 18)
    {
        cout << "You are eligible for driving licence" << endl;
    }
    else
    {
        cout << "You are *not* eligible for driving licence" << endl;
    }
    return 0;
}

// 6.Write a program to check if a number is positive or negative.
int main()
{
    int num;
    cout << "Enter Number" << endl;
    cin >> num;

    if (num >= 0)
    {
        cout << "Possitive Number" << endl; //7
    }
    else
    {
        cout << "Negative Number" << endl; //-7
    }
    return 0;
}

// 7.Write a program to check whether a number is even or odd.
int main()
{
    int num;
    cout << "Enter Number" << endl;
    cin >> num;

    if (num % 2 == 0)
    {
        cout << "Even Number" << endl;
    }
    else
    {
        cout << "Odd Number" << endl;
    }
    return 0;
}

// 8.Write a program to check if a number is divisible by 5.
int main()
{
    int num;
    cout << "Enter Number " << endl;
    cin >> num;

    if (num % 5 == 0)
    {
        cout << " Divisible by 5" << endl;
    }
    else
    {
        cout << " *NOT* Divisible by 5" << endl;
    }
    return 0;
}

// 9.Write a program to check which number is greater between two numbers.
int main()
{
    int a, b;
    cout << "Enter Two Numbers:" << endl;
    cin >> a >> b;

    if (a > b)
    {
        cout << "A is Greater" << endl;
    }
    else if (a < b)
    {
        cout << "B is Greater" << endl;
    }
    else
    {
        cout << "Both Number are Equal" << endl;
    }
    return 0;
}

// 10.Write a program to check whether a number is greater than 100 or not.
 int main(){
     int num;
     cout << "Enter Number:" << endl;
     cin >> num;

    if (num > 100)
    {
     cout << "Number is Greater than 100 " << endl;
    }
    else
    {
        cout << "Number *NOT* Greater than 100 " << endl;
    }
    return 0;
}

// 11.Write a program to check whether a character is a vowel or consonant.
int main()
{
    char ch;
    cout << "Enter Character:" << endl;
    cin >> ch;

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        cout << "Vowel" << endl;
    }
    else
    {
        cout << "Consonant" << endl;
    }
    return 0;
}

// 12.Write a program to check whether a number is multiply of 3.
 int main(){
     int num;
     cout << "Enter Number" << endl;
     cin >> num;

    if (num % 3 == 0)
    {
       cout << "Number is multiple by 3" << endl;
    }
    else
    {
        cout << "Number *NOT* multiple by 3" << endl;
    }
    return 0;
}

// 13.Write a program to check whether a number is division by both 3 and 5.
int main()
{
    int num;
    cout << "Enter Number" << endl;
    cin >> num;

    if (num % 3 == 0)
    {
        cout << "Number is Division by 3:" << endl;
    }
    else if (num % 5 == 0)
    {
        cout << "Number is Division by 5:" << endl;
    }
    else
    {
        cout << "Number *NOT* Division by Both:" << endl;
    }
    return 0;
}

// 14.Write a program to find the largest of three numbers.
int main()
{
    int a, b, c;
    cout << "Enter Three Numbers:";
    cin >> a >> b >> c;

    if (a >= b && a >= c)
    {
        cout << "A Largest" << endl;
    }
    else if (b >= a && b >= c)
    {
        cout << "B Largest" << endl;
    }
    else
    {
        cout << "C Largest" << endl;
    }
    return 0;
}

// 15.Write a program to check if a year is a leap year.
int main()
{
    int year;
    cout << "Enter Your Year" << endl;
    cin >> year;

    if (year % 400 == 0)
    {
        cout << "Leap Year" << endl;
    }

    else if (year % 100 == 0)
    {
        cout << "*Not*  a Leap year" << endl;
    }

    else if (year % 4 == 0)
    {
        cout << "Leap Year" << endl;
    }

    else
    {
        cout << "*Not*  a Leap year" << endl;
    }
     return 0;
}

// 16.Write a program to check whether a number is a 3-digit number.
 int main(){
     int num;
     cout << "Enter Three Digit Number:" << endl;
     cin >> num;

    if (num >= 100 && num <= 999 || num <= -100 && num >= -999)
    {
        cout << "Three Digit Number:" << endl;
    }
    else
    {
        cout << "*NOT* Three Digit Number:" << endl;
    }
    return 0;
}

// 17.Write a program to check if a number is divisible by 7 or 11.
int main()
{
    int num;
    cout << "Enter Number" << endl;
    cin >> num;

    if (num % 7 == 0 || num % 11 == 0)
    {
        cout << "Division by 7 or 11:" << endl;
    }

    else
    {
        cout << "*NOT* Division by 7 or 11:" << endl;
    }
    return 0;
}

// 18.Write a program to find the smaller of three numbers.
int main(){
    int a,b,c;
    cout << "Enter Three Number" << endl;
    cin >> a >> b >> c;

    if (a <= b && a <= c)
    {
        cout << "Smaller = " << a << endl;
    }
    else if (b <= a && b <= c)
    {
        cout << "Smaller = " << b << endl;
    }
    else
    {
        cout << "Smaller = " << c << endl;
    }
    return 0;
}

// 19.Write a program to check whether a character is uppercase or lowercase.
int main()
{
    char ch;
    cout << "Enter Character:" << endl;
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z')
    {
        cout << "Upper Case" << endl;
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        cout << "Lower Case" << endl;
    }
    else
    {
        cout << "Defalt Case" << endl;
    }
    return 0;
}

// 20.Write a program to check whether a number lies between 10 and 50.
int main()
{
    int num;
    cout << "Enter Lies Number:" << endl;
    cin >> num;

    if (num >= 10 && num <= 50)
    {
        cout << "Number lies between 10 or 50" << endl;
    }
    else
    {
        cout << "Number does *NOT* lie between 10 and 50" << endl;
    }
    return 0;
}

// 21.Write a program to calculate electricity bill First 100 cost $5/unit,
//  next 100 cost $7/unit, Above 200 cost $10/unit.

int main() {
    int unit, fix_charge, total_bill;

    cout << "Enter Unit" << endl;
    cin >> unit;

    cout << "Enter Fix_charge" << endl;
    cin >> fix_charge;

    // Calculate energy cost based on slabs
    int energy_cost = 0;

    if (unit <= 100) {
        energy_cost = unit * 5;
    }
    else if (unit <= 200) {
        // First 100 units at $5 + remaining units at $7
        energy_cost = (100 * 5) + ((unit - 100) * 7);
    }
    else {
        // First 100 at $5 + next 100 at $7 + remaining units above 200 at $10
        energy_cost = (100 * 5) + (100 * 7) + ((unit - 200) * 10);
    }

    // Add fixed charge to get the total bill
    total_bill = energy_cost + fix_charge;

    cout << "Total bill = " << total_bill << endl;

    return 0;
}

// 22.Write a program to check whether a number is a multiple of 2 and 3 but not 6.
int main()
{
    int num;
    cout << "Enter Number" << endl;
    cin >> num;

    if ((num % 2 == 0 || num % 3 == 0) && num % 6 != 0)
    {
        cout << "Multiple by 2 or 3 but not 6" << endl;
    }

    else
    {
       cout << "Does not match the condition" << endl;
    }
    return 0;
}

// 23.Print This  + ,-,*,/, Symbel Using switch.
int main()
{
    int symbel;
    cout << "Enter case:" << endl;
    cin >> symbel;

    switch (symbel)
    {
    case 1:
        cout << "+" << endl;
        break;
    case 2:
        cout << "-" << endl;
        break;
    case 3:
        cout << "*" << endl;
        break;
    case 4:
        cout << "/" << endl;
        break;

    default:
        cout << "No symbel" << endl;
        break;
    }
    return 0;
}

// 24.Print the months name using switch.
int main()
{
    int month;
    cout << "Enter case:" << endl;
    cin >> month;

    switch (month)
    {
    case 1:
        cout << "Jan" << endl;
        break;
    case 2:
        cout << "Feb" << endl;
        break;
    case 3:
        cout << "Mar" << endl;
        break;
    case 4:
        cout << "Apr" << endl;
        break;
    case 5:
        cout << "May" << endl;
        break;
    case 6:
        cout << "Jun" << endl;
        break;
    case 7:
        cout << "July" << endl;
        break;
    case 8:
        cout << "Aug" << endl;
        break;
    case 9:
        cout << "Set" << endl;
        break;
    case 10:
        cout << "Oct" << endl;
        break;
    case 11:
        cout << "Nov" << endl;
        break;
    case 12:
        cout << "Dec" << endl;
        break;

    default:
        cout << "No month" << endl;
        break;
    }
    return 0;
}

// 25.Write a program to print vowel or consonent using switch.
int main()
{
    char ch;
    cout << "Enter case:" << endl;
    cin >> ch;

    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        cout << "Vowel" << endl;
        break;

    default:
        cout << "Consonent" << endl;
        break;
    }
}

// 26.Write a program to create menu-driven food ordering system and adding five items.
int main()
{
    int choice, qty;
    float total = 0;
    string itemName = "";

    // Menu Display
    cout << "*****************************************" << endl;
    cout << "           JUNK FOOD CAFE MENU           " << endl;
    cout << "*****************************************" << endl;
    cout << "  1. Hot dogs       -  Regional Price: 100" << endl;
    cout << "  2. Potato chips   -  Regional Price: 30" << endl;
    cout << "  3. French fries   -  Regional Price: 90" << endl;
    cout << "  4. Cookies        -  Regional Price: 40" << endl;
    cout << "  5. Energy drinks  -  Regional Price: 110" << endl;
    cout << "*****************************************" << endl;

    // User Input
    cout << "Enter Choice (1-5)" << endl;
    cin >> choice;
    cout << "Enter Quantity" << endl;
    cin >> qty;

    // Processing Choice
    switch (choice)
    {
    case 1:
        total = qty * 100;
        itemName = "Hot dogs";
        break;
    case 2:
        total = qty * 30;
        itemName = " Potato chips";
        break;
    case 3:
        total = qty * 90;
        itemName = "French fries";
        break;
    case 4:
        total = qty * 40;
        itemName = "Cookies";
        break;
    case 5:
        total = qty * 110;
        itemName = "Energy drinks";
        break;

    default:
        cout << "\nError: Invalid choice selection!" << endl;
        return 0; //  if your choice is invalid to program Exit
        break;
    }

    // Final Order Card Receipt
    cout << "\n=========================================" << endl;
    cout << "               ORDER CARD                " << endl;
    cout << "=========================================" << endl;
    cout << " Item Ordered : " << itemName << endl;
    cout << " Quantity     : " << qty << endl;
    cout << "-----------------------------------------" << endl;
    cout << " Total Bill   : Regional Currency " << total << endl;
    cout << "=========================================" << endl;

    return 0;
}

//    #######..... Logic Building Questions (Important)..... #######

// 27.Write a program to check whether a tringle is valid or not.
int main()
{
    float a, b, c;
    cout << "Enter trangle side" << endl;
    cin >> a >> b >> c;

    if (a + b > c && b + a > b && c + a > a)
    {
        cout << "Valid Triangle" << endl;
    }
    else
    {
        cout << "Invalid Triangle" << endl;
    }
    return 0;
}

// 28.Write a program to check whether a triangle is eguilateral, isosceles, or scalene.
int main()
{
    int a, b, c;
    cout << "Enter Triangle side" << endl;
    cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a)

        if (a == b && b == a)
        {
            cout << "Eguilateral Triangle" << endl;
        }
        else if (a == b || b == c || a == c)
        {
            cout << "Isosceles Triangle" << endl;
        }
        else
        {
            cout << "Scalene Triangle" << endl;
        }
    else
    {
        cout << "Invalid Trangle" << endl;
    }
    return 0;
}

// 29.Write a program to calculate bonus based on year of service.
int main(){
    int year;
    float bonus,salary;
    cout << "Enter your salary" << endl;
    cin >> salary;

    cout << "Enter your service in my company" << endl;
    cin >> year;

    if (year <= 5)
    {
        bonus = 0;
    }
    else if(year >= 5 && year <= 10){
         bonus = salary * 0.10;
        }

        else
        {
        bonus = salary * 0.20;
    }
    cout << "Bonus Point In Your Salary = " << bonus << endl;
    return 0;
}

// 30.Write a program to check if three numbers can form a triangle.
int main()
{
    int a, b, c;
    cout << "Enter " << endl;
    cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a)
    {
        cout << "Valid Triangle: These sides can form a triangle." << endl;
    }
    else
    {
        cout << "Invalid Triangle: These sides cannot form a triangle." << endl;
    }
    return 0;
}
