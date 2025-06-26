#include <iostream>
#include <vector>
using namespace std;

int main() {
    int numCourses;
    float totalCredits = 0, totalGradePoints = 0;

    cout << "Enter number of courses: ";
    cin >> numCourses;

    for (int i = 0; i < numCourses; i++) {
        float grade, credit;
        cout << "Enter grade for course " << i + 1 << ": ";
        cin >> grade;
        cout << "Enter credit hours for course " << i + 1 << ": ";
        cin >> credit;

        totalCredits += credit;
        totalGradePoints += grade * credit;
    }

    float cgpa = totalGradePoints / totalCredits;
    cout << "Final CGPA: " << cgpa << endl;

    return 0;
}