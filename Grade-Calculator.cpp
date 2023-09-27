#include <iostream>
using namespace std;

int main() {
    bool anotherStudent = true;

    while (anotherStudent) {
        string name;
        cout << "Enter name of the student: ";
        getline(cin, name);// Input the full name

        // Variables
        float homework_avg = 0.0f;
        float exams_avg = 0.0f;
        float final_exam = 0.0f;
        float project = 0.0f;
        float final_grade = 0.0f;

        // Homework section
        for (int i = 1; i <= 5; i++) {
            float homework = 0.0f;  // Reset for each homework assignment
            do {
                cout << "Enter marks of Homework " << i << " (0-100): ";
                cin >> homework;
                if (homework < 0 || homework > 100) 
                {
                    cout << "Invalid input. Please enter a score between 0 and 100." << endl;
                }
            } while (homework < 0 || homework > 100);
            homework_avg += homework;
        }
        homework_avg /= 5.0f;

        // Exams section
        for (int i = 1; i <= 2; i++) {
            float exams = 0.0f;  // Reset for each exam
            do {
                cout << "Enter total marks of Exam " << i << " (0-100): ";
                cin >> exams;
                if (exams < 0 || exams > 100) 
                {
                    cout << "Invalid input. Please enter a score between 0 and 100." << endl;
                }
            } while (exams < 0 || exams > 100);
            exams_avg += exams;
        }
        exams_avg /= 2.0f;

        // Final exam
        do {
            cout << "Enter total marks for final examination (0-100): ";
            cin >> final_exam;
            if (final_exam < 0 || final_exam > 100) 
            {
                cout << "Invalid input. Please enter a score between 0 and 100." << endl;
            }
        } while (final_exam < 0 || final_exam > 100);

        // Project
        do {
            cout << "Enter marks for the project (0-100): ";
            cin >> project;
            if (project < 0 || project > 100) 
            {
                cout << "Invalid input. Please enter a score between 0 and 100." << endl;
            }
        } while (project < 0 || project > 100);

        cout << "Homework Score: " << homework_avg << endl;
        cout << "Exam Score: " << exams_avg << endl;
        cout << "Final-Exam Score: " << final_exam << endl;
        cout << "Project Score: " << project << endl;

        // Final Grade
        // You can adjust these weights as needed
        // HERE - 20% of homework + 30% of exams + 30% of final exam + 20% of project 

        final_grade = 0.2 * homework_avg + 0.3 * exams_avg + 0.3 * final_exam + 0.2 * project;
        cout << "Final score: " << final_grade << endl;

        // Feedback based on final grade
        if (final_grade >= 90)
        {
            cout << "Congratulations, " << name << "! You got an A grade! Excellent job!" << endl;
        }
        else if (final_grade >= 80) {
            cout << "Well done, " << name << "! You got an B grade! Keep up the good work!" << endl;
        }
        else if (final_grade >= 70) {
            cout << "Good job, " << name << "! You got a C grade! Keep improving!" << endl;
        } 
        else if (final_grade >= 60) {
            cout << "You got a D grade, " << name << ". Consider working harder for a better grade." << endl;
        }
        else if (final_grade >= 50) {
            cout << "You got a E grade, " << name << ". You should focus on improving your performance." << endl;
        } 
        else {
            cout << "Sorry, " << name << ", you failed. Please seek help to improve your performance." << endl;
        }

        cout << endl;

        // Ask if the user wants to input data for another student
        char another;
        cout << "Do you want to input data for another student? (Y/N): ";
        cin >> another;
        cin.ignore();  // Consume newline
        if (another != 'Y' && another != 'y') {
            anotherStudent = false;
        }
    }

    return 0;
}

