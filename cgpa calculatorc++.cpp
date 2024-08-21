#include <iostream>
using namespace std;

int main() {
    int numCourses;
    float totalCredits = 0, totalGradePoints = 0;
    float credits, gradePoints;
    char grade;

    cout << "Enter the number of courses: ";
    cin >> numCourses;

    for (int i = 0; i < numCourses; i++) {
        cout << "Course " << i + 1 << ":" << endl;
        cout << "Enter the credits: ";
        cin >> credits;
        cout << "Enter the grade (A, B, C, D, F): ";
        cin >> grade;

        switch (grade) {
            case 'A':
            case 'a':
                gradePoints = 4.0;
                break;
            case 'B':
            case 'b':
                gradePoints = 3.0;
                break;
            case 'C':
            case 'c':
                gradePoints = 2.0;
                break;
            case 'D':
            case 'd':
                gradePoints = 1.0;
                break;
            default:
                gradePoints = 0.0;
        }

        totalCredits += credits;
        totalGradePoints += credits * gradePoints;

        cout << "Grade points for course " << i + 1 << ": " << credits * gradePoints << endl << endl;
    }

    float cgpa = totalGradePoints / totalCredits;
    cout << "Total credits: " << totalCredits << endl;
    cout << "Total grade points: " << totalGradePoints << endl;
    cout << "CGPA: " << cgpa << endl;

    return 0;
}