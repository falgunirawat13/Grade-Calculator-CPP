# Student Grade Calculator

This C++ program allows you to calculate and provide feedback on the final grades of multiple students based on their homework scores, exam scores, final exam scores, and project scores. The program includes input validation to ensure that scores fall within the valid range of 0 to 100.

## How to Use

1. Run the program.
2. For each student, enter the following information:
   - Student's name.
   - Scores for five homework assignments (0-100).
   - Scores for two exams (0-100).
   - Score for the final exam (0-100).
   - Score for the project (0-100).
3. The program will calculate the final grade for each student using the following weights:
   - Homework: 20%
   - Exams: 30%
   - Final exam: 30%
   - Project: 20%
4. Based on the final grade, the program will provide feedback to the student:
   - A grade (90-100): Congratulations message.
   - B grade (80-89): Well done message.
   - C grade (70-79): Good job message.
   - D grade (60-69): Consider working harder message.
   - E grade (50-59): Focus on improving performance message.
   - Below 50: Failed message.
5. You can input data for multiple students in a loop.
6. After processing one student's data, you can choose to input data for another student or exit the program.

## Note

- You can adjust the weights for calculating the final grade by modifying the corresponding lines in the code.
- The program provides feedback based on common grade ranges. You can customize the messages to suit your needs.

Feel free to upload this code to GitHub or any other platform for version control and collaboration.
