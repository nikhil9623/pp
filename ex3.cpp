#include<iostream>
using namespace std;

class studentDB
{
    int roll;
    float marks;

    static int count;

   public:
   
     //constructor
     studentDB(int r, float m)
     {
        roll = r;
        marks = m;
        count++;
     }

     //inline function
     inline void display()
     {
         cout<<"\nroll no = "<<roll;
         cout<<"\nmarks = "<<marks;
     }

     //static function
     static void showcount()
     {
        cout<<"\nstudent count = "<<count;
     }

    //frind function
    friend void result(studentDB s);

    //destructor
    ~studentDB()
    {
        cout<<"\ndestructor called";;
    }
};

//static variable initialisation
int studentDB::count = 0;

//friend function
void result(studentDB s)
{
    if(s.marks >=40)
     cout<<"\npass";
    else
     cout<<"\nfail";
}

int main()
{
    int r;
    float m;

    cout<<"enter student roll: ";
    cin>>r;
    cout<<"enter marks: ";
    cin>>m;
    //dynamic memory allocation
    studentDB *s1 = new studentDB(r,m);

    s1->display();

    studentDB::showcount();

    result(*s1);
    
    //dynamic memory deallocaton
    delete s1;

    return 0;
}