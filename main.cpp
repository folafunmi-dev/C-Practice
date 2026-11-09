#include <iostream>
using namespace std;

int main() {

  /*  string Name;
    string Department;
    int Age;
    float CGPA;
    string Matricno;

    cout << "Enter Student Name:";
    cin >>Name;

    cout << "Enter Student Department:";
    cin >> Department;

    cout << "Enter Student Age:";
    cin >> Age;

    cout << "Enter Student CGPA:";
    cin >> CGPA;

    cout << "Enter Student Matricno:";
    cin >> Matricno;

    cout << "\n--- STUDENT DETAILS ---" << endl;
    cout << " Name: " << Name << endl;
    cout << " Matric Number: " << Matricno<< endl;
    cout << " Age: " << Age << endl;
    cout << " Department: " << Department<< endl;
    cout << " CGPA: " << CGPA << endl;

return 0;
}
*/
/*
    string Name;
    string ID;
    float Salary;
    float Allowance;
    float TotalSalary;

    cout << "Enter Employee Name:";
    cin >> Name;

    cout << "Enter Employee ID:";
    cin >> ID;

    cout << "Enter Employee Salary:";
    cin >> Salary;

    cout << "Enter Employee Allowance:";
    cin  >> Allowance;

    TotalSalary = Salary + Allowance;

     cout << "--- STUDENT DETAILS ---" << endl;
    cout << " Employee Name: " << Name << endl;
    cout << " Employee ID: " << ID << endl;
    cout << " Employee Salary: " << Salary << endl;
    cout << " Employee Allowance: " << Allowance << endl;
    cout << " TotalSalary: " << TotalSalary << endl;
return 0;
}
*/
/*

   string CustomersName;
   string AccountNumber;
   float AccountBalance;
   float Deposit;
   float NewBalance;
   float Withdrawal;
   float Remaining;

  cout << "Enter Customers Name:";
  cin >> CustomersName;

  cout << "Enter Account Number:";
  cin >> AccountNumber;

  cout << "Enter Account Balance:";
  cin >> AccountBalance;

  cout << "Enter Deposit:";
  cin >> Deposit;

  cout << "Enter Withdrawal Amount:";
  cin >> Withdrawal;

NewBalance = AccountBalance + Deposit;

  if (Withdrawal <= NewBalance)
    {
    Remaining =NewBalance - Withdrawal;

cout << "withdrawal successful" << endl;
    }
else {
    cout << "Insufficient balance" << endl;
    Remaining = NewBalance;
}


   cout << "--- CUSTOMERS DETAILS ---" << endl;
    cout << " Customers Name: " << CustomersName << endl;
    cout << " Account Number: " << AccountNumber << endl;
    cout << " Account Balance: " << AccountBalance << endl;
    cout << " Deposit: " << Deposit << endl;
    cout << " NewBalance: " << NewBalance << endl;
    cout << "Remaining: " << Remaining << endl;
return 0;
}

*/

/*
int score;
int i;

for (int i=1; i<=5 ; i++){
    cout <<"Enter Student Score:";
    cin >> score;

cout << "Student " << i << " score: " << score <<endl;
}
return 0;
}
*/

/*int score;
int total = 0;
float average;

 for (int i=1; i<=5 ; i++){

  cout << "Enter Student Score:";
  cin >> score;
        total = total + score;
    cout << "Student " << i << " score: " << score <<endl;
 }

  average = (float)total / 5;

cout << "Total Score: " << total << endl;
cout << "Average Score: " << average << endl;
 return 0;
 }
*/
 /*
 int score =  40;

    cout << boolalpha<<(score >= 50);
    return 0;
    }
*/
/*
    int score = 80;

    if (score >= 50) {
        cout << "Congratulations! You passed.";
    }
    return 0;
}
    */
    /*int age;

    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18) {
        cout << "Adult.";
    }
    else{
        cout << "Minor";
    }
    return 0;
    }
    */
   /* int number;

    cout << "Enter an Integer: ";
    cin >> number;

    if (number % 2 == 0) {
        cout << "The number is even";
    } else {
        cout << "The number is odd";
    }
    return 0;
}
    */
/*int age;
int score;

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter entrance examination score: ";
    cin >> score;

  if (age >= 16) {
        if (score >= 180) {
            cout << "Eligible for admission.";
        } else {
            cout << "Age requirement met, but score is too low.";
        }
    } else {
        cout << "Applicant does not meet the age requirement.";
    }
    return 0;
}
    */
//Using NESTED CONDITIONAL statements(NESTED IF)
/*
    int score;

    cout << "Enter Examination score:";
    cin >> score;


    if (score >= 39){
            if(score >= 70){
                cout << "Grade A";
            }else {
                if (score >= 60){
                    cout << "Grade B";
                }
                else{
                    if(score >= 50){
                        cout << "Grade C";
                    }
                 else {
                    if (score >=45){
                        cout << "Grade D";
                    }
                    else {
                        if (score >=40){
                            cout << "Grade E";
                        }

                        }
                    }
                 }
                }
            } else{
            cout << "Grade F";
            }
return 0;
    }
*/


//Using ELSE-IF ladder
/*
int score;

 cout << "Enter Examination score:";
 cin >> score;

 if (score < 0 || score > 100){
 cout << "Invalid score";
 } else if (score >= 70){
    cout << "Grade: A - Excellent";
 } else if ( score >= 60){
 cout << "Grade: B - Very good";
 } else if ( score >= 50){
  cout << "Grade: C - Average ";
 } else if (score >= 45){
   cout << "Grade: D - You can do better ";
 }else if (score >= 40){
  cout << "Grade: E - Bad result";
 } else {
     cout << "Grade: F - Carryover";
 }
 return 0;
 }
 */
/*
 int day;

    cout << "Enter a day number (1-7): ";
    cin >> day;

    switch (day) {
        case 1:
            cout << "Monday";
            break;

        case 2:
            cout << "Tuesday";
        break;

        case 3:
            cout << "Wednesday";
            break;

        case 4:
            cout << "Thursday";
            break;

        case 5:
            cout << "Friday";
            break;

        case 6:
            cout << "Saturday";
            break;

        case 7:
            cout << "Sunday";
            break;

        default:
            cout << "Invalid day number";
    }

    return 0;
}
*/
/*
int choice;
    double a, b;

    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "Enter your choice: " << endl;
    cin >> choice;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    switch (choice) {
        case 1:
            cout << "Result: " << a + b;
            break;

        case 2:
            cout << "Result: " << a - b;
            break;

        case 3:
            cout << "Result: " << a * b;
            break;

        default:
            cout << "Invalid choice";
    }

    return 0;
}
*/
/*
int a;
    int b;
cout << "Enter First number:";
cin >> a;

cout << "Enter Second number:";
cin >> b;

    int larger = (a > b) ? a : b;

    cout << "The larger number is: " << larger;

    return 0;
}*/
int number;
cout << "Enter Number:";
cin >> number;

cout << ((number % 2 == 0) ? "Even" : "Odd");
return 0;
}
