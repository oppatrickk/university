/*  
 *  NAME: PRIETO, John Patrick M.
 *  BLOCK: BSCS-2B
 *  DATE: September , 2021
 *  TITLE: Activity 1
 *
 *  DESCRIPTION:
 *  Create a program that can compute a student's grade. 
 */

// Imports
import java.util.Scanner;

// Main Class
class Main {
    public static void main(String[] args) {
        // Variables
        String name;
        String course;
        String subject;
        String remark;
        
        int quiz;
        int attendance;
        int exam;
        int project;


        int grade;

        // Ask for Input
        Scanner scan = new Scanner(System.in);
        
        System.out.println("-----------------------------");
        System.out.println("\t\t\tINPUT");
        System.out.println("-----------------------------\n");

            // Name
        System.out.println("Enter complete name:");
        name = scan.nextLine();

            // Course
        System.out.println("\nEnter course:");
        course = scan.nextLine();

            // Subject
        System.out.println("\nEnter subject:");
        subject = scan.nextLine();
        
        // Ask for Grades
        System.out.println("\nEnter grades for each criteria:");
        
            // Quiz
        System.out.println("Quiz (25%):");
        quiz = scan.nextInt();

        while (quiz < 65 || quiz > 95) {
            System.out.println("\nError! Grade must not be lower than 65 and not greater than 95");

            System.out.println("\nChange input for Quiz:");
            quiz = scan.nextInt();
        }

            // Attendance
        System.out.println("\nAttendance (10%):");
        attendance = scan.nextInt();

        while (attendance < 65 || attendance > 95) {
            System.out.println("\nError! Grade must not be lower than 65 and not greater than 95");

            System.out.println("\nChange input for Attendance:");
            attendance = scan.nextInt();
        }

            // Exam
        System.out.println("\nExam (35%):");
        exam = scan.nextInt();

        while (exam < 65 || exam > 95) {
            System.out.println("\nError! Grade must not be lower than 65 and not greater than 95");

            System.out.println("\nChange input for Exam:");
            exam = scan.nextInt();
        }

            // Project
        System.out.println("\nProject (30%):");
        project = scan.nextInt();      

        while (project < 65 || project > 95) {
            System.out.println("\nError! Grade must not be lower than 65 and not greater than 95");

            System.out.println("\nChange input for Project:");
            project = scan.nextInt();
        }

        scan.close();

        // Computation
        /*
        grade = (quiz * 0.25) + (attendance * 0.10) + (exam * 0.35) + (project * 0.30); 
        */
        grade = 75;
        
        switch(grade)
        {
            case 75:
                remark = "PASSED";
            case 77:
                remark = "FAIR";
            case 80:
                remark = "SATISFACTORY";
            case 83:
                remark = "GOOD";
            case 86:
                remark = "VERY SATISFACTORY";
            case 89:
                remark = "VERY GOOD";
            case 92:
                remark = "EXCELLENT";
            default:
                remark = "FAILED";
        }

        // Print Output
        System.out.println("\n-----------------------------");
        System.out.println("\t\t\tOUTPUT");
        System.out.println("-----------------------------\n");
        
        System.out.println("Name: " + name);
        System.out.println("Course: " + course);

        System.out.println("Subject: " + subject);
        System.out.println("\nGrades:");
        System.out.println("- (25%) Quiz:" + quiz);
        System.out.println("- (10%) Attendance:" + attendance);
        System.out.println("- (35%) Exam:" + exam);
        System.out.println("- (30%) Project:" + project);

        System.out.println("\nGrade: " + grade);
        System.out.println("Remark: " + remark);

    }
}