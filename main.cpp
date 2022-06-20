#include<iostream>
using namespace std;
class Book{
public:
int bookId , edition , quantity ;
string bookName , author ;
    Book(){}
    Book(string bookName , string author , int bookId ,  int edition , int quantity ){
        this->bookName = bookName ;
        this->bookId = bookId ;
        this->author = author ;
        this->edition = edition ;
        this->quantity = quantity ;

    }
    void printBookInformation(){
        cout<<"Book Name : "<<this->bookName<<endl;
        cout<<"Book Id   : "<<this->bookId<<endl;
        cout<<"Author    : "<<this->author<<endl;
        cout<<"Edition   : "<<this->edition<<endl;
        cout<<"Quantity  : "<<this->quantity<<endl;
    }

};
class BookForCSE: public Book{
int year , semester ;
public:
    BookForCSE(){}
    BookForCSE( string bookName , string author , int bookId ,  int edition , int quantity , int year , int semester ){

        this->bookName = bookName ;
        this->bookId = bookId ;
        this->author = author ;
        this->edition = edition ;
        this->quantity = quantity ;
        this->year = year ;
        this->semester = semester ;
    }
    void printCSEBookInformation(){

        printBookInformation() ;
        cout<<"Year      : "<<year<<endl;
        cout<<"Semester  : "<<semester<<endl;

    }


};
class BookForNonCSE:public Book{
int year , semester ;
public:
 BookForNonCSE( string bookName , string author , int bookId ,  int edition , int quantity , int year , int semester ){

        this->bookName = bookName ;
        this->bookId = bookId ;
        this->author = author ;
        this->edition = edition ;
        this->quantity = quantity ;
        this->year = year ;
        this->semester = semester ;
    }
    void printNonCSEBookInformation(){

        printBookInformation() ;
        cout<<"Year      : "<<year<<endl;
        cout<<"Semester  : "<<semester<<endl;

    }


};
class Person{
public:
    string name ;
    char gender ;
    Person(){}
    Person( string name , char gender ){
        this->name = name ;
        this->gender = gender ;
    }

};
class Student:public Person{
int regNo ;
string batch , branchOfStudy;
public:

    Student( string name , char gender , int regNo , string batch , string branchOfStudy ){
        //Person( name , gender ) ;
        this->name = name ;
        this->gender = gender ;
        this->regNo = regNo ;
        this->batch = batch ;
        this->branchOfStudy = branchOfStudy ;
    }
    void printStudentData(){
    cout<<"Name   : "<<name<<endl;
    cout<<"Gender : "<<gender<<endl;
    cout<<"Batch  : "<<batch<<endl;
    cout<<"BranchOfStudy:"<<branchOfStudy<<endl;
    }
};
class Employee:public Person{
int empId ;
string department ;
public:
    Employee( string name , char gender ,  int empId , string department ){
        this->name = name ;
        this->gender = gender ;
        this->empId = empId ;
        this->department = department ;
    }
    void printEmployeeData(){
        cout<<"Name        :"<<name<<endl;
        cout<<"Gender      : "<<gender<<endl;
        cout<<"Employee Id :"<<empId<<endl;
        cout<<"Department  : "<<department<<endl;
    }
};

int main(){

cout<<"Welcome to Library Management System "<<endl ;
cout<<"Press 1 if you want save information of new book "<<endl ;
cout<<"Press 2 if you want to know information about existing book "<<endl ;
int userInput ;
cin>>userInput ;
BookForCSE *arr = new BookForCSE[100] ;
int numberOfBooksAvailable = 0 ;

arr[0] = new BookForCSE("Fundamental of computer Algorithm" , "Horowitz,Ellis" , 1000 , 2 , 50 , 2 , 2 ) ;


/*if( userInput == 1 ){
    /*cout<<"Enter Book Name ";
    cin>>bookArray[0].bookName ;
    cout<<"Enter Book Id ";
    cin>>bookArray[0].bookId ;
    cout<<"Enter Book Author Name ";
    cin>>bookArray[0].author ;
    cout<<"Enter Book Edition ";
    cin>>bookArray[0].edition ;
    cout<<"Enter Book Quantity ";
    cin>>bookArray[0].quantity ;
    bookArray[0]->printBookInformation() ;

}
*/

/*BookForCSE *book1 = new BookForCSE("Fundamental of computer Algorithm" , "Horowitz,Ellis" , 1000 , 2 , 50 , 2 , 2 ) ;
book1->printCSEBookInformation() ;

BookForNonCSE *book2 = new BookForNonCSE("Communication System" , "Michael Moher and Simon S. Haykin" , 2000 , 4 , 50 , 2 , 1 ) ;
book2->printNonCSEBookInformation() ;

Student *st1 = new Student("Prince Kumar" , 'M' , 11905293 , "ABCD" , "CSE") ;
st1->printStudentData() ;

Employee *emp1 = new Employee("Employee_1" , 'M' , 125 , "CSE" ) ;
emp1->printEmployeeData() ;
*/
//BookForCSE arr[10] ;
//arr[0].bookName = "Prince" ;
//arr[0] = book1 ;
//arr[0]->printBookInformation() ;
 //arr[0] = new BookForCSE("Fundamental of computer Algorithm" , "Horowitz,Ellis" , 1000 , 2 , 50 , 2 , 2 ) ;


}
