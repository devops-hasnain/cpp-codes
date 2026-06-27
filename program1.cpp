#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int marks[5];

public:
    // Gathers the student's details inside the class
    void inputDetails(int studentNum) {
        cout << "Enter name of student " << studentNum << ": ";
        // Clear input buffer before getline if cin was used previously
        if (studentNum > 1) cin.ignore(); 
        getline(cin, name);
        
        cout << "Enter marks for " << name << ":\n"; 
        for(int i = 0; i < 5; i++) {
            cin >> marks[i];
        }
    }

    float calculatePercentage() {
        int total = 0;
        for(int i = 0; i < 5; i++) {
            total += marks[i];
        }
        return (total * 100.0 / 500.0); 
    }

    char getGrade() {
        float percentage = calculatePercentage();
        if(percentage >= 90) return 'A';
        else if(percentage >= 75) return 'B';
        else if(percentage >= 50) return 'C';
        else return 'F';
    }

    // Public getter to print the name in main
    string getName() {
        return name;
    }
}; // <-- Added missing semicolon for class

int main () {
    Student s1, s2, s3;

    // Use the class method to input data instead of direct private access
    s1.inputDetails(1);
    s2.inputDetails(2);
    s3.inputDetails(3);

    cout << "\n-----------------Results:-----------------\n";
    
    // Print the results using cout
    cout << s1.getName() << " - Percentage: " << s1.calculatePercentage() << "%, Grade: " << s1.getGrade() << "\n";
    cout << s2.getName() << " - Percentage: " << s2.calculatePercentage() << "%, Grade: " << s2.getGrade() << "\n";
    cout << s3.getName() << " - Percentage: " << s3.calculatePercentage() << "%, Grade: " << s3.getGrade() << "\n";

    return 0;
}

/* OUTPUT:

Enter name of student 1: Hasnain Janjua
Enter marks for Hasnain Janjua:
78
68
90
56
26
Enter name of student 2: Hamza Ali
Enter marks for Hamza Ali:
89
2
37
73
72
Enter name of student 3: John Doe
Enter marks for John Doe:
78
23
48
9
73

-----------------Results:-----------------
Hasnain Janjua - Percentage: 63.6%, Grade: C
Hamza Ali - Percentage: 54.6%, Grade: C
John Doe - Percentage: 46.2%, Grade: F
*/
