#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int project1, project2, project3, test1, test2;
    double averageScore;
    char grade;

public:
    // Constructor to initialize student data
    Student(string n, int p1, int p2, int p3, int t1, int t2) {
        name = n;
        project1 = p1;
        project2 = p2;
        project3 = p3;
        test1 = t1;
        test2 = t2;
        calculateAverageScore(); // Calculate average score
        calculateGrade();        // Calculate grade based on average score
    }

    // Calculate average score of the student
    void calculateAverageScore() {
        averageScore = (project1 + project2 + project3 + test1 + test2) / 5.0;
    }

    // Calculate grade based on average score
    void calculateGrade() {
        if (averageScore >= 90) {
            grade = 'A';
        }
        else if (averageScore >= 80) {
            grade = 'B';
        }
        else if (averageScore >= 70) {
            grade = 'C';
        }
        else if (averageScore >= 60) {
            grade = 'D';
        }
        else {
            grade = 'F';
        }
    }

    // Display student information
    void display() {
        cout << "\nStudent: " << name << endl;
        cout << "Project 1: " << project1 << endl;
        cout << "Project 2: " << project2 << endl;
        cout << "Project 3: " << project3 << endl;
        cout << "Test 1: " << test1 << endl;
        cout << "Test 2: " << test2 << endl;
        cout << "Average Score: " << averageScore << endl;
        cout << "Grade: " << grade << endl;
        cout << "------------------------" << endl;
    }
};

int main() {
    string name;
    int project1, project2, project3, test1, test2;

    // Welcome message
    cout << "=============================" << endl;
    cout << " Welcome to the Student Grade Calculator " << endl;
    cout << "=============================" << endl;

    // Get input for student information
    cout << "Enter student name: ";
    getline(cin, name); // Read full name with spaces

    cout << "Enter project 1 score: ";
    cin >> project1;

    cout << "Enter project 2 score: ";
    cin >> project2;

    cout << "Enter project 3 score: ";
    cin >> project3;

    cout << "Enter test 1 score: ";
    cin >> test1;

    cout << "Enter test 2 score: ";
    cin >> test2;

    // Create a Student object with the input data
    Student student(name, project1, project2, project3, test1, test2);

    // Display student information
    student.display();

    return 0;
}
