/*1.Create class student:name,prnNo
2.create class trainer:name
3.create class assignmengt and associate it with Student and trainer:Title,Date,Description,Assignee
4.Create Driver class haveing name AssignmentManager : Take input all feilds from user,
Create function,
createAssignment,
addAssignment to collection,
showAssignments,
saveAssignment to file,
loadAssignment to file,
cheakAssignment on the basis of date
4.Give choice to user to select operation by their choice*/
package CdacAssignment_07_11;

import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.Scanner;

import java.util.*;
import java.io.*;

class Student {
    public void studDetails(){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Name of Student: ");
        String name = sc.nextLine();
        System.out.println("PRN No.: ");
        int prnNo = sc.nextInt();
    }
}

class Trainer {
   public void trainerDetails(){
       Scanner sc = new Scanner(System.in);
       System.out.println("Enter the name of trainer: ");
       String name = sc.nextLine();
   }
}

class Assignment {
    String title;
    String date;
    String description;
    String assignee;

    public Assignment(String title, String date, String description, String assignee) {
        this.title = title;
        this.date = date;
        this.description = description;
        this.assignee = assignee;
    }
}

class AssignmentManager {
    ArrayList<Assignment> assignments;

    public AssignmentManager() {
        assignments = new ArrayList<>();
    }

    public void createAssignment(String title, String date, String description, String assignee) {
        Assignment assignment = new Assignment(title, date, description, assignee);
        assignments.add(assignment);
    }

    public void showAssignments() {
        for (Assignment a : assignments) {
            System.out.println("Title: " + a.title);
            System.out.println("Date: " + a.date);
            System.out.println("Description: " + a.description);
            System.out.println("Assignee: " + a.assignee);
            System.out.println();
        }
    }

    public void saveAssignmentsToFile(String filename) {
        try {
            ObjectOutputStream fOut = new ObjectOutputStream(new FileOutputStream("C:\\Users\\A B C\\Array1.java"));
            fOut.writeObject(assignments);   
        } catch (Exception e) {
            
        }
    }

    public void loadAssignmentsFromFile(String filename) {
        try {
            ObjectInputStream fin = new ObjectInputStream(new FileInputStream("C:\\Users\\A B C\\Array1.java"));
            assignments = (ArrayList<Assignment>) fin.readObject();     
        } catch (Exception e) {
            
        }
    }

    public void checkAssignmentByDate(String date) {
        for (Assignment a : assignments) {
            if (a.date.equals(date)) {
                System.out.println("Assignment with date " + date + " found:");
                System.out.println("Title: " + a.title);
                System.out.println("Description: " + a.description);
                System.out.println("Assignee: " + a.assignee);
                return;
            }
        }
        System.out.println("Assignment with date " + date + " not found");
    }
}

public class AssignmentDriver {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        AssignmentManager manager = new AssignmentManager();
        Student s = new Student();
        s.studDetails();

        while (true) {
            System.out.println("1. Create Assignment");
            System.out.println("2. Show Assignments");
            System.out.println("3. Save Assignments to File");
            System.out.println("4. Load Assignments from File");
            System.out.println("5. Check Assignment by Date");
            System.out.println("6. Exit");

            System.out.println("Enter your choice:");
            int choice = scanner.nextInt();
            scanner.nextLine();

            switch (choice) {
                case 1:
                    System.out.println("Enter title:");
                    String title = scanner.nextLine();
                    System.out.println("Enter date:");
                    String date = scanner.nextLine();
                    System.out.println("Enter description:");
                    String description = scanner.nextLine();
                    System.out.println("Enter assignee:");
                    String assignee = scanner.nextLine();
                    manager.createAssignment(title, date, description, assignee);
                    System.out.println("Assignment added successfully....");
                    break;
                case 2:
                    manager.showAssignments();
                    break;
                case 3:
                    System.out.println("Enter file name:");
                    String saveFileName = scanner.nextLine();
                    manager.saveAssignmentsToFile(saveFileName);
                    System.out.println("File saved successfully...");
                    break;
                case 4:
                    System.out.println("Enter file name:");
                    String loadFileName = scanner.nextLine();
                    manager.loadAssignmentsFromFile(loadFileName);
                    System.out.println("File loaded successfully...");
                    break;
                case 5:
                    System.out.println("Enter date to check:");
                    String checkDate = scanner.nextLine();
                    manager.checkAssignmentByDate(checkDate);
                    break;
                case 6:
                    System.out.println("Thank you...");
                    break;
                default:
                    System.out.println("Invalid choice! Please try again.");
            }
        }
    }
}
