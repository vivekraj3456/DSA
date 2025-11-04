#include <iostream>
#include <string>
using namespace std;

// Class to represent a Student
class Student
{
private:
    int rollNo;
    string name;
    float marks;

public:
    // Default constructor
    Student()
    {
        rollNo = 0;
        name = "";
        marks = 0.0;
    }

    // Function to set data programmatically
    void setData(int r, const string &n, float m)
    {
        rollNo = r;
        name = n;
        marks = m;
    }

    // Function to input student data from user
    void input()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNo;

        // Clear buffer before string input
        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Marks: ";
        cin >> marks;
    }

    // Function to display student data
    void display() const
    {
        cout << "Roll No: " << rollNo << " | Name: " << name << " | Marks: " << marks << endl;
    }

    // Getter function for roll number
    int getRollNo() const
    {
        return rollNo;
    }
};

// Class to manage the student records
class StudentRecordSystem
{
private:
    Student students[100]; // Array to store student objects
    int count;             // Number of students

public:
    // Constructor
    StudentRecordSystem()
    {
        count = 0;
    }

    // Add pre-defined student
    void addStudent(int roll, const string &name, float marks)
    {
        if (count < 100)
        {
            students[count].setData(roll, name, marks);
            count++;
        }
    }

    // Add new student record via user input
    void addStudent()
    {
        if (count < 100)
        {
            cout << "\n--- Add New Student ---\n";
            students[count].input();
            count++;
            cout << "Student added successfully!\n";
        }
        else
        {
            cout << "Record system is full. Cannot add more students.\n";
        }
    }

    // Display all students
    void displayAllStudents() const
    {
        if (count == 0)
        {
            cout << "\nNo records found!\n";
        }
        else
        {
            cout << "\n--- Student Records ---\n";
            for (int i = 0; i < count; i++)
            {
                students[i].display();
            }
        }
    }

    // Search for a student by roll number
    void searchStudent() const
    {
        if (count == 0)
        {
            cout << "\nNo records to search from!\n";
            return;
        }

        int roll;
        cout << "\nEnter Roll Number to search: ";
        cin >> roll;

        bool found = false;
        for (int i = 0; i < count; i++)
        {
            if (students[i].getRollNo() == roll)
            {
                cout << "\nRecord Found:\n";
                students[i].display();
                found = true;
                break;
            }
        }

        if (!found)
        {
            cout << "No student found with Roll Number " << roll << endl;
        }
    }

    // Delete a student by roll number
    void deleteStudent()
    {
        if (count == 0)
        {
            cout << "\nNo records to delete!\n";
            return;
        }

        int roll;
        cout << "\nEnter Roll Number to delete: ";
        cin >> roll;

        bool found = false;
        for (int i = 0; i < count; i++)
        {
            if (students[i].getRollNo() == roll)
            {
                // Shift students left
                for (int j = i; j < count - 1; j++)
                {
                    students[j] = students[j + 1];
                }
                count--;
                cout << "Student with Roll No " << roll << " deleted successfully!\n";
                found = true;
                break;
            }
        }

        if (!found)
        {
            cout << "No student found with Roll Number " << roll << endl;
        }
    }
};

int main()
{
    StudentRecordSystem srs;

    // Example: Adding Abhijeet by default
    srs.addStudent(17, "Abhijeet", 90.0f);

    int choice;

    while (true)
    {
        cout << "\n===== Student Record System =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student\n";
        cout << "4. Delete Student\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            srs.addStudent();
            break;
        case 2:
            srs.displayAllStudents();
            break;
        case 3:
            srs.searchStudent();
            break;
        case 4:
            srs.deleteStudent();
            break;
        case 5:
            cout << "Exiting program. Goodbye!\n";
            return 0;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}