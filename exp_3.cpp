#include <iostream> 
using namespace std; 
 
class studentdb { 
    char *name; 
    int rollno; 
    float marks; 
    static int count; 
 
public: 
    studentdb(){ 
        name = new char[50]; 
        rollno = 0; 
        marks = 0; 
        count++; 
        cout<<"constructor is invoked\n"; 
    } 
 
    void getdata(){ 
        cout<<"enter name, roll no. and marks: "; 
        cin>>name>>rollno>>marks; 
    } 
 
    inline void display(){ 
        cout<<"name: "<<name<<endl; 
        cout<<"roll no.: "<<rollno<<endl; 
        cout<<"marks: "<<marks<<endl; 
    } 
 
    static void showcount(){ 
        cout<<"number of students: "<<count<<endl; 
    } 
 
    friend void showgrade(studentdb &s){ 
        if(s.marks>=90) cout<<"grade: A"<<endl; 
        else if(s.marks>=80) cout<<"grade: B"<<endl; 
        else if(s.marks>=70) cout<<"grade: C"<<endl; 
        else if(s.marks>=60) cout<<"grade: D"<<endl; 
        else cout<<"grade: F"<<endl; 
    } 
 
    ~studentdb(){ 
        delete[] name; 
        cout<<"destructor is invoked\n"; 
    } 
}; 
 
int studentdb::count = 0; 
 
int main(){ 
    int n; 
 
    cout<<"enter number of students: "; 
    cin>>n; 
 
    studentdb *s = new studentdb[n]; 
 
    for(int i=0;i<n;i++){ 
        s[i].getdata(); 
    } 
 
    for(int i=0;i<n;i++){ 
        s[i].display(); 
        showgrade(s[i]); 
    } 
 
    studentdb::showcount(); 
 
    delete[] s; 
 
    return 0; 
} 