#include<iostream>
#include<cstring>
#include<cstdlib>
#include<conio.h>
#include<ctime>
#include<string>

using namespace std;

class date{
    int dayno;
    string month;
    string day;
    public:
        date(string day){
            cout<<"Day: "<<day<<endl;
        }
        void print(int dayno){
            cout<<dayno<<"\n\n";
        }
        void print(string month){
            cout<<"Date: "<<month<<" ";
        }
};

class Quiz{
    public:
        int QuizQues(class Student);
};

class Student{
    public:
        
        string student_name;
        string reg_no;
        string student_dept;
        int year;
        int score;

        Student(){
            score=0;
        }
        void student_details();
        friend class Quiz;
};

class Teacher:public Student{
    public:
        string teacher_name;
        int teacher_id;
        string teacher_dept;
        void teacher_details();
        void viewStudentDetails();
        virtual void viewTeacherDetails()=0;

};

class Admin:public Teacher{
    public:
        string admin_name;
        void admin_details();
        void viewTeacherDetails();
};

void Student::student_details(){
    Student s;
    Quiz q;
    cout<<"\n########################--STUDENT DETAILS--##############################";
    cout<<"\nEnter Your Name: ";
    cin>>student_name;
    cout<<"\nEnter Your Registration Number: ";
    cin>>reg_no;
    cout<<"\nEnter Your Department: ";
    cin>>student_dept;
    cout<<"\nEnter Year of Study: ";
    cin>>year;
    score=q.QuizQues(s);
    cout<<"\n\n\t\t\t\tYOUR SCORE IS "<<score;
    cout<<"\n\n\n\t\t\t\tPress any key to continue...";
    getch();//wait for key press.
    system("cls");//clear screen


}

void Teacher::teacher_details(){
    cout<<"\n  #####################--TEACHER DETAILS--########################\n ";
    cout<<"\nEnter your name: ";
    cin>>teacher_name;
    cout<<"Enter your ID: ";
    cin>>teacher_id;
    cout<<"Enter your department: ";
    cin>>teacher_dept;
    cout<<"\n  +++++++++++++++  STUDENT DETAILS  +++++++++++++++n\n";
    cout<<"NAME\tREG NO\tDEPT\tYEAR\tSCORE"<<endl;
    viewStudentDetails();
    cout<<"\n\n\n\t\t\t\tPress any key to continue...";
    getch();
    system("cls");
}


void Admin::admin_details(){
    cout<<"\n  #####################--ADMIN DETAILS--########################\n ";
    cout<<"Enter your name: ";
    cin>>admin_name;
    cout<<"\n  ++++++++++++++  TEACHER DETAILS  ++++++++++++++n\n";
    cout<<"NAME\tID NO\tDEPT"<<endl;
    viewTeacherDetails();
    cout<<"\n  ++++++++++++++  STUDENT DETAILS  ++++++++++++++n\n ";
    cout<<"NAME\tREG NO\tDEPT\tYEAR\tSCORE"<<endl;
    viewStudentDetails();
    cout<<"\n\n\n\t\t\t\tPress any key to continue...";
    getch();
    system("cls");
};

void Teacher::viewStudentDetails()
{
    cout<<student_name<<"\t"<<reg_no<<"\t"<<student_dept<<"\t"<<year<<"\t"<<score<<endl;
}

void Admin::viewTeacherDetails()
{
    cout<<teacher_name<<"\t"<<teacher_id<<"\t"<<teacher_dept<<endl;
}

int getuser()
{
    int value;
    cout<<"\n  ###################  USER FORM  ###################\n ";
    cout<<"\nLogin as\n ";
    cout<<"\n1->Student\n2->Teacher\n3->Administrator\n4->Exit\n\n";
    cin>>value;
    return value;
}


int OOPS_Ques()
{
    int total_score=0;
    char q1,q2,q3,q4,q5;
    cout<<"\n\nQuestion 1:  What is encapsulation in OOP?\n";
    cout<<"a.Class creation\nb.Hiding internal state\nc.Deriving new classes\nd.Defining multiple methods\n\n";
    cout<<"Enter your choice: ";
    cin>>q1;
    if(q1=='b')
    {
        total_score=total_score+10;
        cout<<" \t Great! Your Game score is: "<<total_score;
    }
    else
    {
        cout<<" \t Sorry wrong answer "<<endl;
    }

    cout<<"\n\nQuestion 2:  Which of the following is a feature of polymorphism?\n";
    cout<<"a.Creating new class\nb.Function overloading\nc.Data bundling\nd.Method access via superclass\n\n";
    cout<<"Enter your choice: ";
    cin>>q2;
    if(q2=='b')
    {
        total_score=total_score+10;
        cout<<" \t Great! Your Game score is: "<<total_score;
    }
    else
    {
        cout<<" \t Sorry wrong answer "<<endl;
    }
    cout<<"\n\nQuestion 3:  What is inheritance in OOP?\n";
    cout<<"a.Function overloading\nb.Function recursion\nc.Acquiring properties\nd.Hiding implementation\n\n";
    cout<<"Enter your choice: ";
    cin>>q3;
    if(q3=='c')
    {
        total_score=total_score+10;
        cout<<" \t Great! Your Game score is: "<<total_score;
    }
    else
    {
        cout<<" \t Sorry wrong answer "<<endl;
    }
    cout<<"\n\nQuestion 4:  Which of the following best describes an abstract class?\n";
    cout<<"a.Cannot be instantiated\nb.Only static methods\n";
    cout<<"c.Only abstract methods\nd.Only concrete methods\n\n";
    cout<<"Enter your choice: ";
    cin>>q4;
    if(q4=='a')
    {
        total_score=total_score+10;
        cout<<" \t Great! Your Game score is: "<<total_score;
    }
    else
    {
        cout<<" \t Sorry wrong answer "<<endl;
    }
    cout<<"\n\nQuestion 5:  Which OOP principle is used when a child class overrides a method of its parent class?\n";
    cout<<"a.Encapsulation \nb.Inheritance\nc.Abstraction\nd.Polymorphism\n\n";
    cout<<"Enter your choice: ";
    cin>>q5;
    if(q5=='d')
    {
        total_score=total_score+10;
        cout<<" \t Great! Your Game score is: "<<total_score;
    }
    else
    {
        cout<<" \t Sorry wrong answer "<<endl;
    }
    return total_score;
}


int OS_Ques()
{
    int total_score=0;
    char q1,q2,q3,q4,q5;
    cout<<"\n\nQuestion 1:  Which of the following is a primary function of an operating system?\n";
    cout<<"a.Word processing\nb.Web browsing\nc.Managing hardware resources\nd.Graphic design\n\n";
    cout<<"Enter your choice: ";
    cin>>q1;
    if(q1=='c')
    {
        total_score=total_score+10;
        cout<<" \t Great! Your Game score is: "<<total_score;
    }
    else
    {
        cout<<" \t Sorry wrong answer "<<endl;
    }

    cout<<"\n\nQuestion 2:  What is a process in the context of an operating system?\n";
    cout<<"a.A system call\nb.An instance of a running program\nc.A file management tool\nd.A hardware component\n\n";
    cout<<"Enter your choice: ";
    cin>>q2;
    if(q2=='b')
    {
        total_score=total_score+10;
        cout<<" \t Great! Your Game score is: "<<total_score;
    }
    else
    {
        cout<<" \t Sorry wrong answer "<<endl;
    }
    cout<<"\n\nQuestion 3:  Which scheduling algorithm selects the process that has the smallest execution time remaining?\n";
    cout<<"a.First-Come, First-Served (FCFS)\nb.Round Robin (RR)\nc.Shortest Remaining Time First (SRTF)\nd.Priority Scheduling\n\n";
    cout<<"Enter your choice: ";
    cin>>q3;
    if(q3=='c')
    {
        total_score=total_score+10;
        cout<<" \t Great! Your Game score is: "<<total_score;
    }
    else
    {
        cout<<" \t Sorry wrong answer "<<endl;
    }
    cout<<"\n\nQuestion 4:  What is a deadlock in an operating system?\n";
    cout<<"a.A high CPU utilization state\nb.A state where processes are unable to proceed\n";
    cout<<"c.A method of memory allocation\nd.A file system error\n\n";
    cout<<"Enter your choice: ";
    cin>>q4;
    if(q4=='b')
    {
        total_score=total_score+10;
        cout<<" \t Great! Your Game score is: "<<total_score;
    }
    else
    {
        cout<<" \t Sorry wrong answer "<<endl;
    }
    cout<<"\n\nQuestion 5:  Which of the following memory management techniques involves dividing the memory into fixed-sized blocks?\n";
    cout<<"a.Paging \nb.Segmentation\nc.Contiguous allocation\nd.Dynamic partitioning\n\n";
    cout<<"Enter your choice: ";
    cin>>q5;
    if(q5=='a')
    {
        total_score=total_score+10;
        cout<<" \t Great! Your Game score is: "<<total_score;
    }
    else
    {
        cout<<" \t Sorry wrong answer "<<endl;
    }
    return total_score;
}


int DBMS_Ques()
{
    int total_score=0;
    char q1,q2,q3,q4,q5;
    cout<<"\n\nQuestion 1:  What is the primary key in a database?\n";
    cout<<"a.A field that can have duplicate values\nb.A field used for sorting data\nc.A field that uniquely identifies each record\nd.A field containing NULL values\n\n";
    cout<<"Enter your choice: ";
    cin>>q1;
    if(q1=='c')
    {
        total_score=total_score+10;
        cout<<" \t Great! Your Game score is: "<<total_score;
    }
    else
    {
        cout<<" \t Sorry wrong answer "<<endl;
    }

    cout<<"\n\nQuestion 2:  Which SQL command is used to retrieve data from a database?\n";
    cout<<"a.INSERT\nb.SELECT\nc.DELETE\nd.UPDATE\n\n";
    cout<<"Enter your choice: ";
    cin>>q2;
    if(q2=='b')
    {
        total_score=total_score+10;
        cout<<" \t Great! Your Game score is: "<<total_score;
    }
    else
    {
        cout<<" \t Sorry wrong answer "<<endl;
    }
    cout<<"\n\nQuestion 3:  What is a foreign key in a database?\n";
    cout<<"a.A key that uniquely identifies each record\nb.A key used to speed up queries\nc.A key used to connect two tables\nd.A key used to enforce uniqueness\n\n";
    cout<<"Enter your choice: ";
    cin>>q3;
    if(q3=='c')
    {
        total_score=total_score+10;
        cout<<" \t Great! Your Game score is: "<<total_score;
    }
    else
    {
        cout<<" \t Sorry wrong answer "<<endl;
    }
    cout<<"\n\nQuestion 4:  Which normal form is achieved when a relation has no transitive dependencies?\n";
    cout<<"a.First Normal Form (1NF)\nb.Second Normal Form (2NF)\n";
    cout<<"c.Boyce-Codd Normal Form (BCNF)\nd.Third Normal Form (3NF)\n\n";
    cout<<"Enter your choice: ";
    cin>>q4;
    if(q4=='d')
    {
        total_score=total_score+10;
        cout<<" \t Great! Your Game score is: "<<total_score;
    }
    else
    {
        cout<<" \t Sorry wrong answer "<<endl;
    }
    cout<<"\n\nQuestion 5:  What does ACID stand for in the context of databases?\n";
    cout<<"a.Atomicity, Consistency, Isolation, Durability \nb.Atomicity, Concurrency, Isolation, Durability\nc.Availability, Consistency, Integrity, Durability\nd.Atomicity, Consistency, Isolation, Dependability\n\n";
    cout<<"Enter your choice: ";
    cin>>q5;
    if(q5=='a')
    {
        total_score=total_score+10;
        cout<<" \t Great! Your Game score is: "<<total_score;
    }
    else
    {
        cout<<" \t Sorry wrong answer "<<endl;
    }
    return total_score;
}


int Quiz::QuizQues(Student s)
{
    string Response;
    cout << "\nAre you ready to take the quiz " << s.student_name << "? yes/no" << endl;
    cin >> Response;
    if (Response == "yes") {
        cout << endl;
        cout << "Good Luck!" << endl;
        cout<<"\n\n\n\t\t\t\tPress any key to continue...";
        getch();
    }
    else {
        cout << "\nOkay Good Bye!" << endl;
        return 0;
    }
    system("cls");
    int choice,score;
    cout<<"Select your language: ";
    cout<<"\n1-> OOPS\n2-> OS\n3-> DBMS\n\n";
    cin>>choice;
    const int MAX_TIME_LIMIT = 50000;
    cout<<"TIMER OF 50 SECONDS HAS STARTED!!!\n\n";
    long start_time = clock();
    switch(choice)
    {
    case 1:
        score = OOPS_Ques();
        break;
    case 2:
        score = OS_Ques();
        break;
    case 3:
        score = DBMS_Ques();
        break;
    }
    long end_time = clock();
    if( end_time - start_time > MAX_TIME_LIMIT){
        cout << "\n\nTIME LIMIT HAS BEEN EXCEEDED\n";
        cout<<"5 MARKS HAS BEEN DEDUCTED\n\n";
        cout<<"\n\t\t\t\tTHANK YOU FOR ATTENDING THE QUIZ";
        return (score-5);
    }
    else
        cout<<"\n\t\t\t\tTHANK YOU FOR ATTENDING THE QUIZ";
    return score;
}


void login() {
    int try_no = 0; 
    string username;
    string password;
    

    do {
        cout << "\n  =======================  LOGIN FORM  =======================\n";
        cout << " \n                       ENTER USERNAME: ";
        cin >> username;

        cout << " \n                       ENTER PASSWORD: ";
        cin>>password;


        if (username == "user" && password == "pass") {
            cout << "\n\n       YOU HAVE SUCCESSFULLY LOGGED IN !!\n";
            cout << "\n\n\t\t\t\tPress any key to continue...";
            getch();
            break;
        } else {
            cout << "\n\n       SORRY !!!!  LOGIN IS UNSUCCESSFUL\n";
            try_no++;
            getch();
            system("cls");
        }
    } while (try_no <= 2);

    if (try_no > 2) {
        cout << "\nSorry, you have entered the wrong username and password three times!!!\n";
        cout << "Try again later\n";
        getch();
        exit(0);
    }

    system("cls");
}

int main(){
    Admin a;
    date d("Tuesday");
    d.print("June");
    d.print(18);
    login();
    while(true){
        int current_user=getuser();
        switch (current_user)
        {
        case 1:
            a.student_details();
            break;
        case 2:
            a.teacher_details();
            break;
        case 3:
            a.admin_details();
            break;
        case 4:
            return 0;
        }
    }
}