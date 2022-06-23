#include<bits/stdc++.h>
using namespace std;
class Book{
int bookId , edition , quantity ;
string bookName , author ;
    public:

    Book(){}
    // Constructor should be called when you want to create new instance of a class
    // Otherwise get and set method should be called .
    Book(string bookName , string author , int bookId ,  int edition , int quantity ){
        this->bookName = bookName ;

        this->bookId = bookId ;

        this->author = author ;

        this->edition = edition ;

        this->quantity = quantity ;


    }
    bool setBookName(string bookName ){
        this->bookName = bookName ;
        return true ;
    }
    string getBookName(){
        return this->bookName ;
    }
    bool setId( int bookId ){
        this->bookId = bookId  ;
        return true ;
    }
    int getId(){
        return this->bookId ;
    }
    bool setAuthor(string author ){
        this->author = author ;
        return true ;
    }
    string getAuthor(){
        return this->author ;
    }
    bool setEdition( int edition ){
        this->edition = edition ;
        return true ;
    }
    int getEdition(){
        return this->edition ;
    }
    bool setQuantity( int quantity ){
        this->quantity = quantity ;
        return true ;
    }
    int getQuantity(){
        return this->quantity ;
    }
    void printBookInformation(){
        cout<<"Book Name : "<<getBookName()<<endl;
        cout<<"Book Id   : "<<getId()<<endl;
        cout<<"Author    : "<<getAuthor()<<endl;
        cout<<"Edition   : "<<getEdition()<<endl;
        cout<<"Quantity  : "<<getQuantity()<<endl;
    }


};
class BookForCSE: public Book{
int year , semester ;
public:
    BookForCSE(){}
    BookForCSE( string bookName , string author , int bookId ,  int edition , int quantity , int year , int semester ):Book(bookName , author, bookId , edition, quantity ){

        this->year = year ;
        this->semester = semester ;
    }

    bool setYear( int year ){
        this->year = year ;
        return true ;
    }
    int getYear(){
        return this->year ;
    }
    bool setSemester( int semester ){
        this->semester = semester ;
        return true ;
    }
    int getSemester(){
        return this->semester ;
    }

    void printCSEBookInformation(){
        printBookInformation() ;
        cout<<"Book Name : "<<getYear()<<endl;
        cout<<"Book Id   : "<<getSemester()<<endl;

    }


};
class BookForNonCSE:public Book{
int year , semester ;
public:
 BookForNonCSE(){}
 BookForNonCSE( string bookName , string author , int bookId ,  int edition , int quantity , int year , int semester ):Book(bookName , author, bookId , edition, quantity ){

        this->year = year ;
        this->semester = semester ;
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

    Student( string name , char gender , int regNo , string batch , string branchOfStudy ):Person( name , gender){
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
    Employee( string name , char gender ,  int empId , string department ):Person( name , gender){
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

//BookForCSE *book1 =  new BookForCSE("Fundamental of computer Algorithm" , "Horowitz,Ellis" , 1000 , 2 , 50 , 2 , 2 ) ;

BookForCSE *CSEbookArray = new BookForCSE[100] ;
//Book that is already available in library is added at index 0
CSEbookArray[0].setBookName("Fundamental of computer Algorithm") ;
CSEbookArray[0].setAuthor("Horowitz,Ellis") ;
CSEbookArray[0].setId(1000) ;
CSEbookArray[0].setEdition(2) ;
CSEbookArray[0].setQuantity(50) ;
CSEbookArray[0].setYear(2) ;
CSEbookArray[0].setSemester(2) ;


cout<<"Welcome to Library Management System "<<endl ;
cout<<"Press 1 if you want save information of new book "<<endl ;
cout<<"Press 2 if you want to know information about existing book "<<endl ;
cout<<"Enter 404 to finish the programme "<<endl;
int userInput ;

int indexOfLastBook = 1 ;
while( true ){
    string bookName , author ;
    int bookId , edition , quantity , year , semester ;
    cin>>userInput ;

    if( userInput == 1 ){
// Read and set the value of new book
    cout<<"Book Name ";
    cin>>bookName ;
    CSEbookArray[indexOfLastBook].setBookName( bookName ) ;
    cout<<"Book Id ";
    cin>>bookId ;
    CSEbookArray[indexOfLastBook].setId( bookId ) ;
    cout<<"Book Author " ;
    cin>>author ;
    CSEbookArray[indexOfLastBook].setAuthor( author ) ;
    cout<<"Book Edition " ;
    cin>>edition ;
    CSEbookArray[indexOfLastBook].setEdition( edition ) ;
    cout<<"Book Quantity " ;
    cin>>quantity ;
    CSEbookArray[indexOfLastBook].setQuantity( quantity ) ;
    cout<<"Year of book " ;
    cin>>year ;
    CSEbookArray[indexOfLastBook].setYear( year ) ;
    cout<<"Semester of book " ;
    cin>>semester ;
    CSEbookArray[indexOfLastBook].setSemester( semester ) ;

    //Print the information of the new book added right now

    CSEbookArray[indexOfLastBook].printCSEBookInformation() ;

    indexOfLastBook++ ;
    }
    else if( userInput == 2 ){
        cout<<"Enter the id of book you want to find " ;
        int idOfBookToFind ;
        cin>>idOfBookToFind ;
        bool bookFound = false  ;
        for( int i = 0 ; i < indexOfLastBook ; i++ ){
            if( CSEbookArray[i].getId() == idOfBookToFind ){
                bookFound = true ;
                CSEbookArray[i].printCSEBookInformation() ;
            }
        }
        if(bookFound == false )cout<<"Book Not Found with id : "<<idOfBookToFind<<endl;
    }
    else break ;

}




/*
Student *st1 = new Student("Prince Kumar" , 'M' , 11905293 , "ABCD" , "CSE") ;
st1->printStudentData() ;

Employee *emp1 = new Employee("Employee_1" , 'M' , 125 , "CSE" ) ;
emp1->printEmployeeData() ;

*/


}
