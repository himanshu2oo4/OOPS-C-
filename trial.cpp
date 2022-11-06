// #include<iostream>
// using namespace std;
// class xyz{
//     int x;
//     int y;
//     public :
//         int z;
// };

// int main(){
//     xyz p;
//     // p.x = 10;      # this gives an error because x is declared private there 
//     // cout<<p.x<<endl;
//     p.z = 10;       // this runs fine (No error ) because the z is declared public we can access it outside of the class also 

//     cout<<p.z<<endl;
//     return 0;
// }



// Lets use some member functions of oops in c++

//********************* Accessing the private member using the public member functions getdata and putdata *************************


// #include<iostream>
// using namespace std;
// class item {
//     int member;
//     float price ;
//     public :
//         void getdata(int a, float b);
//         void putdata(void);
// };
// void item :: getdata(int a , float b){
//     member = a ;
//     price = b ;
// }

// void item :: putdata(void){
//     cout<<"Number  : "<<member<<endl;
//     cout<<"Price : "<<price<<endl;

// }
// int main(){
//     item x ;
//     x.getdata(100,100.334);
//     x.putdata();

//     return 0;
// }


// ********  Declaring complete functions inside the class definition ****************


// #include<iostream>
// using namespace std;
// class item {
//     int number ;
//     float price;
//     public :
//         void getdata(){
//             cout<<"Enter the Number"<<endl;
//             cin>>number;
//             cout<<"Enter the Price "<<endl;
//             cin>>price;

//         }
//         void putdata(void){
//             cout<<"Number is : "<<number<<endl;
//             cout<<"Price is : "<<price<<endl;
//         }
// };
// int main(){
//     item x;
//     x.getdata();
//     x.putdata();
//     return 0;
// }

// Write a simple program using class in C++ to input subject mark and prints it. ***********************


// #include<iostream>
// using namespace std;
// class result{
//     int m1,m2;
//     public :
//         void getdata(){
//             cout<<"Enter the marks of subject 1 : ";
//             cin>>m1;
//             cout<<"Enter the marks of subject 2 : ";
//             cin>>m2;


//         }
//         void putdata(void){
//             cout<<"Subject 1 marks : "<<m1<<endl;
//             cout<<"Subject 2 Marks : "<<m2<<endl;
//         }
// };
// int main(){
//     result hari,jayesh;
//     cout <<"Enter the marks of Hari "<<endl;
//     hari.getdata();
//     cout<<"Enter the marks of jayesh "<<endl;
//     jayesh.getdata ();

//     cout<<"The marks of hari is :---- "<<endl;
//     hari.putdata();
//     cout<<"The marks of jayesh is :----- "<<endl;
//     jayesh.putdata();

//     return 0;
// }


// Nested member Functions *******************

// #include<iostream>
// using namespace std;
// class set{
//     int m,n;
//     public: 
//         void input(void){
//             cout<<"Enter the first number : ";
//             cin>>m;
//             cout<<"Enter the second number : ";
//             cin>>n;
//         }
//         void display (void){
//             cout<<"M is : "<<m<<endl;
//             cout<<"N is : "<<n<<endl;
//         }
//         int largest(){
//             if(m>n){
//                 return m ;
//             }
//             else{
//                 return n;
//             }
//         }
// };

// int main(){
//     set hell;
//     hell.input();
//     hell.largest();
//     hell.display();
//     return 0;
// }





// ************** Array with cLasses **************

// #include<iostream>
// #include<string.h>
// using namespace std;
// class employee {
//     string name;
//     int age,salary  ;

//     public : 
//         void getdata(){
//             cout<<"Enter the name of the employee : ";
//             cin>>name;
//             cout<<"Enter the age of employee ";
//             cin>>age;
//             cout<<"Enter the salary of employee ";
//             cin>>salary;

//         }
//         void putdata(){
//             cout<<"The name of employee is : "<<name<<endl;
//             cout<<"The age is : "<<age<<endl;
//             cout<<"The salary is : "<<salary<<endl;
//         }

// };
// int main(){
//     employee emp[5];
//     for(int i =1;i<=5;i++) {
//         cout<<"-------Enter the data of employee "<<i<<endl;
//         emp[i].getdata();
//     } 

//     for(int i = 1;i<=5;i++){
//         cout<<"-------The data of employee "<<i<<endl;
//         emp[i].putdata();
//     }
//     return 0;
// }



// Replace and sort using classes ****************


// #include<iostream>
// using namespace std;
// class sort{
//     int mm[30];
//     public: 
//         void getdata();
//         void putdata();
// };
// void sort :: getdata(){
//     cout<<"Enter the elements :  "<<endl;
//         for (int i =0;i<10;i++){
//             cin>>mm[i];
//         }
//         for(int i=0;i<9;i++){
//             for(int j= i+1;j<10;j++){
//                 if(mm[i]>mm[j]){
//                     int k =mm[i];
//                     mm[i] = mm[j];
//                     mm[j] = k;
//                 }
//             }
//         }
// }

// void sort:: putdata(){
//     for(int i =0;i<10;i++){
//         cout<<mm[i]<<endl;
//     }
// }
// int main(){
//     sort s ;
//     s.getdata();
//     s.putdata();
//     return 0;
// }


// Array of members *********************


// #include<bits/stdc++.h>
// using namespace std;
// const int n = 10;
// class items {
//     int itemCode[n];
//     float itemprice[n];
//     int count;
//     public : 
//         void cnt(void){
//             count =0;
//         }
//         void getItem(void);
//         void displaySum(void);
//         void remove(void);
//         void displayItem(void);

// };

// void items:: getItem(void){
//     cout<<"Enter ItemCode : ";
//     cin>>itemCode[n];
//     cout<<"Enter Item Price : ";
//     cin>>itemprice[n];
//     count++;

// }
// void items:: displaySum(){
//     float sum = 0;
//     for(int i =0;i<count;i++){
//         sum+= itemprice[i];

//     }
//     cout<<"Total value : Rs.  "<<sum<<endl;


// }


// int main(){
//     items order;
//     order.cnt();
//     order.getItem();
//     order.displaySum();
//     return 0;
// }



// #include<iostream>  
// using namespace std;    
// class Test
// {
//   static int i;
//   int j;
// };
// int Test::i;  
// int main()
// {
//     cout << sizeof(Test);
//     return 0;
// }


// #include<iostream>
// using namespace std;
  
// class base {
//   int arr[10];     
// };
  
// class b1: virtual public base { };
  
// class b2: virtual public base { };
  
// class derived: public b1, public b2 {};
  
// int main(void)
// { 
//   cout<<sizeof(derived);

//   return 0;
// }



// #include<iostream>
// using namespace std;  
// int x = 10;
// void fun()
// {
//     int x = 2;
//     {
//         int x = 1;
//         cout << ::x << endl; 
//     }
// }
// int main()
// {
//     fun();
//     return 0;
// }


// #include<iostream>
// using namespace std; 
// class Test {
//     int value;
// public:
//     Test (int v = 0) {value = v;}
//     int getValue() { return value; }
// };  
// int main() {
//     const Test t;  
//     cout << t.getValue();
//     return 0;
// }


// #include<iostream>
// using namespace std;
// class Test1
// {
//     int x;
// public:
//     void show() {  }
// };

// class Test2
// {
//     int x;
// public:
//     virtual void show() {  }
// };

// int main(void)
// {
//     cout<<sizeof(Test1)<<endl;
//     cout<<sizeof(Test2)<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// class run {
//     // empty class               
// };
// int main(){
//     run n1 ;      // object of empty class have 1 memory unit for their track 
//     cout<<"Size is : "<<sizeof(n1)<<endl;
//     return 0;
// }


// *************** Importing a class from another file 

// #include<iostream>
// #include "hero.cpp"
// using namespace std;

// int main(){
//     hero h1;
//     cout<<"Size is : "<<sizeof(h1)<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// class name {
//     public :
//     int a ;
//     int level ;

// };
// int main(){
//     name h1; 
//     cout<<"H1 a value : "<<h1.a<<endl;       // Some garbage value get printed 
//     cout<<"H1 level is : "<<h1.level<<endl;  
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class name {
//     int level ;
//     public :
//     void set(int data){
//         level = data ;
        
//     }
//     int getlevel(){
//         cout<<level; 
//     }
    
// };
// int main(){
//     name h1 ;    // Static memory allocation 
//     h1.set(10);
//     h1.getlevel();

//     return 0;
// }


// ********** Dynamic memory allocation *******

// #include<iostream>
// using namespace std;
// class hero {
//     char health;
//     public : 
//     int level;
//     int gethealth(){
//         return health;
//     }
//     void sethealth (char a){
//         health = a;

//     }
//     void getlevel(){
//         cout<<"Enter the level : ";
//         cin>>level ;
//     }

// };

// int main(){
//     //static memory allocation 
//     hero h1;
//     h1.sethealth('A');
//     h1.getlevel();
//     cout<<"level : "<<h1.level<<endl;
//     cout<<"Health : "<<h1.gethealth()<<endl;

//     // dynmically memory allocation --------
//     hero *hh = new hero ;
//     hh->sethealth('H');
//     hh->getlevel();


//     cout<<"Level : "<<(*hh).level<<endl;
//     cout<<"Health : "<<(*hh).gethealth()<<endl;
//     cout<<"Level : "<<(*hh).level<<endl;
//     cout<<"Health : "<<hh->gethealth()<<endl;
//     return 0;
// }



// #include<iostream>
// using namespace std;
// class rectangle {
//     int length ;
//     int breadth ;
//     public : 
//     void getlb(){
//         cout<<"Enter the length :";
//         cin>>length; 
//         cout<<"Enter the breadth : ";
//         cin>>breadth ;
//     }

//     float area(){
//         return length *breadth ;
//     }
//     float perimeter(){
//         return 2*(length + breadth);
//     }
    
// };
// int main(){ 
//     rectangle r1,r2;
//     r1.getlb();
//     cout<<"Area of R1 : "<<r1.area()<<endl;
//     cout<<"Perimeter of R1 : "<<r1.perimeter()<<endl;
//     r2.getlb();
//     cout<<"Area of R2 : "<<r2.area()<<endl;
//     cout<<"Perimeter of R2 : "<<r2.perimeter()<<endl;

//     return 0;
// }




// ************ Pointer to an object **********

// #include<iostream>
// using namespace std;
// class rectangle {
//   public :
//     int length;
//     int breadth ;
//     float area (){
//         return length * breadth;
//     }
//     float peri(){
//         return 2*(length + breadth );

//     }
// };
// int main(){
//     // rectangle r;
//     // rectangle *p ;
//     // p = &r;
//     // // r.length = 10 ;

//     // // we can also use 
//     // p->length = 10 ;    // for assigning the value using pointer 
//     // p->breadth = 5;
//     // cout<<"Length : "<<p->length<<endl;         // printing the value of an object data using the pointer        -> by using this operator 
//     // cout<<"Breadth : "<<p->breadth <<endl;
//     // cout<<"Area : "<<p->area();




//     rectangle *p;
//     p = new rectangle ;     // an object of rectangle class created and pointer p is pointing to it 
    
//     rectangle *  q= new rectangle;
//     p->length = 10 ;
//     p->breadth = 20;
//     cout<<"Area : "<<p->area()<<endl;

//     return 0;
// }


// #include<iostream>
// using namespace std;
// class time{
//     int hours , minutes , seconds ;
//     public :
//         void getdata(){
//             cout<<"ENter the time in format :  hrs : min : sec "<<endl;
//             cin>>hours>>minutes>>seconds;
//         }
//         void showdata(){
//             cout<<"The Time obtained on adding these: "<<hours<<" "<<minutes<<" "<<seconds;
//         }
//         void add(time tt1, time tt2){
//             int sec = tt1.seconds + tt2.seconds ;
//             int min=(sec/60)+ tt1.minutes + tt2.minutes;
//             int hrs = min/60 ;
//             minutes = min%60;
//             seconds = sec%60;
//             hours = hrs + tt1.hours + tt2.hours ;


//         }
// };
// int main(){
//     time t1,t2,t3;
//     t1.getdata();
//     t2.getdata();
//     t3.add(t1,t2);
//     t3.showdata ();

//     return 0;
// }

//  A simple program to get data and printing them using data memeber and Data Functions 

// #include<bits/stdc++.h>
// using namespace std;
// class student {
//     int data ;
//     string name;
//     public :
//         void getdata(){
//             cout<<"Enter Roll NO :   ";
//             cin>>data ;
//             cout<<"Enter Name : ";
//             cin>>name;

//         }

//         // void getdata(int a , string name1){
//         //     data = a ;
//         //     name = name1;
//         // }
//         void print(){
//             cout<<"Roll No : "<<data <<endl;
//             cout<<"Name : "<<name<<endl;
//         }
// };

// int main(){
//     student s[3];
//     for (int i = 0;i<3;i++){
//         s[i].getdata();

//     }
//     for (int i = 0;i<3;i++){
//         s[i].print();
//     }
   
//     return 0;
// }


/*
Nesting of member Function : using a member function inside another member Function 

*/

// #include<iostream>
// using namespace std;
// class item{
//     int num1 ;
//     int num2;
//     public :
//         void getdata(int numm1, int numm2){
//             num1= numm1 ;
//             num2= numm2;
//         }
//         int largest(int m , int n){
//             if (m>n){
//                 return m ;
//             }
//             else{
//                 return n;
//             }
//         }
//         void showdata(){
//             cout<<"The greatest value is "<<largest(num1,num2);
//         }
// };
// int main(){
//     item a;
//     a.getdata(20,10);
//     a.showdata();
//     return 0;
// }

//  Array with classes ************************************************************

// #include<iostream>
// using namespace std;
// class employee{
//     int empno, salary ;
//     char name[20];
//     public : 
//         void getdata(){
//             cout<<"Enter Emp NO : ";
//             cin>>empno ;
//             cout<<"Enter Name :";
//             cin>>name;
//             cout<<"Enter Salary : ";
//             cin>>salary;
//         }
//         void showdata(){
//             cout<<"Emp No : "<<empno<<" Name : "<<name <<" Salary : "<<salary<<endl;

//         }


// };
// int main(){
//     employee e[3];
//     for (int i = 0;i<3;i++){
//         e[i].getdata();
//     }
//     cout<<endl;
//     for (int i = 0;i<3;i++){
//         e[i].showdata();
//     }
//     return 0;
// }


//  ************ Static Data Member **************

// #include<iostream>
// using namespace std;
// class items{
//     static int count ;
//     int num;
//     public : 
//         void getdata(int a){
//             num = a;
//             count ++;
//         }
//         void getcount (){
//             cout<<"Now the value of count is : "<<count <<endl;
//         }

//         void showdata(){
//             cout<<"The data is  :"<<num<<endl;
//         }
// };
// int items :: count ;          // Automatically the value of static member is setted to 0

// int main(){
//     items x,y,z;
//     x.getcount();
//     y.getcount();
//     z.getcount();

//     cout<<"After getting data The value of count is : "<<endl;
//     x.getdata(1000);
//     y.getdata(1000);
//     z.getdata(1000);

//     x.getcount();
//     y.getcount();
//     z.getcount();
    
//     x.showdata();
//     y.showdata();
//     z.showdata();
//     return 0;
// }

//  ********** Static Member functions ******************

// #include<iostream>
// using namespace std;
// class items {
//     int itemNo ;
//     static int count ;
//     public :
//         void getdata(int num){
//             itemNo = num ;
//             count ++;
        
//         }
//         void showdata(){
//             cout<<"Item No : "<<itemNo<<endl;
//         }
//         static void showcount (){
//             cout<<"The count is : "<<count <<endl;
//         }
// };
// int items :: count ;
// int main(){
//     items i,j;
//     i.showcount();
//     j.showcount();
//     cout<<"The value of Count after entering the values to the objects  :"<<endl;
//     i.getdata(10);
//     j.getdata(20);
//     i.showcount();
//     j.showcount();


//     return 0;
// }

// #include<iostream>
// using namespace std;
// //  Dynamic Memory Allocation :------------

// class hell{
//     int data ;
//     public :
//         void setdata(int x){
//             data = x;

//         }
//         void showdata(){
//             cout<<"Data : "<<data<<endl;
//             cout<<this->data;              // printing value of data using the this operator 
//         }
// };
// int main(){
//     //  Dynamically allocating memory to an object of class hell


//     hell *h = new hell ;
//     h->setdata(10);
//     h->showdata();  
    
//     return 0;
// }


//  Constructor ________________________________

// #include<iostream>
// using namespace std;

// class hero{
//     public : 
//     hero(){                   // automatically invoke at the time of object creation 

//         cout<<"Constructor called ! "<<endl;
//     }
    
// };
// int main(){
//     // hero ramesh ;          // statically object created ! 
//     hero *h  = new hero ;
      
//     return 0;
// }


//  By using the thsi pointer -------------------

// #include<iostream>
// using namespace std;
// class hero {
//     int data ;
//     char level ;
//     public : 
//         hero(int health, char level1){
//             this ->data = health ;
//             this ->level = level1 ;
//             cout<<"The adress this point towards : "<<this <<endl;
//         }

// };
// int main(){
//     hero ramesh(10,'A');
//     cout<<"The address of ramesh  :  "<<&ramesh <<endl;
//     hero *h = new hero (11,'B');           /// dynamically 
    

//     return 0;
// }

// #include<iostream>
// using namespace std;
// class hero {
//     int data ;
//     public : 
//         hero(int d1){
//             data = d1;
//         }
//         void getdata(){
//             cout<<"Data";
//         }

// };
// int main(){
//     hero h1(10);
//     hero h2(h1);              // copy constructor called here ! 
//     h1.getdata();
//     h2.getdata();
//     return 0;
// }


//  copy constructor 
// #include<iostream>
// using namespace std;
// class hero {
//     int data ;
//         public : 
//             hero(hero &a){                     // & used in copy construtor for copying data from the address 
//                 cout<<"Copy constructor called ! "<<endl;
//                 this->data = a.data;
//             }
//             hero(int a){
//                 data = a ;
//             }
//             hero(){
//                 cout<<"Simple constructor called ! "<<endl;
//             }
//             void print(){
//                 cout<<"Data : "<<data<<endl;
//             }
// };
// int main(){
//     hero a(10);
//     hero  b(a);
//     a.print();
//     b.print();
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
class hero{
    int health ;
    // char *name = new char[100] ;
    char level ;
    public : 
    char *name = new char[100] ;
        hero(){
            cout<<"Simple Constructor called ! ";
        }
        // ___________ Lets create our own copy constructor which makes deep copy _____________
        
        hero (hero &temp){
            char *ch = new char[strlen(temp.name)+1];
            strcpy(ch, temp.name);
            this->name = ch;
            cout<<"Copy constructor called ! ";
            this->health = temp.health ;
            this ->level = temp.level ;

        }
        void sethealth(int x){
            this->health = x ;
        }
        void setname(char name1[]){
            // name = new char[100] ;
            this ->name = name1;
        }
        void setlevel(char lvl){
            this->level = lvl ;
        }
        // hero(){
        //     cout<<"Simple Constructor Called ! "<<endl;
        // }
        void print(){
            cout<<endl;
            cout<<"[ Name : "<<this ->name <<" , "<<"Level : "<<level<<" , "<<"Health : "<<health<<" ]" <<endl<<endl;
        }
};
int main(){
//     hero *h = new hero ;
//     h->sethealth(89);
//     char name1[10] ="Himanshu"; 
//     // h->setname(name1);
//     (*h).setname(name1);       // both works same
//     h->setlevel('A');
//     h->print();

//     //  Creating new hero here using default copy constructor 

// //    hero *h2 = new hero(*h);        // this runs perfect ! ----------------------------
//    hero h2  = hero (*h);   // this also works perfect    ----------------------      This creates a deep copy !
//    // hero h2(hero (*h));                 // These two line 957 and 958 giving error !
//     // h2->print();

//     char name2[10] = "Gabbar";
//     h->setname(name2);
//     h->print();
//     h2.print();        // No change seemed in H2 it printing himanshu ! 


//_____________ Working Statically ! __________________

    hero h1 ;
    h1.sethealth(98);
    h1.setlevel('A');
    char name1[10] = "Himanshu";
    h1.setname(name1);
    cout<<"Printing the data of h1  "<<endl<<endl;
    h1.print();

    hero h2(h1);
    cout<<endl<<endl;

    h2.print();
    h1.name[0] = 'G';                        // This will make change to h2 also 
    // char name2[10] = "Gabbar";                       // But this and next line doesn't make change !      
    // h1.setname(name2);                       // this operation makes forces it to make a deep copy , so change in one not seem in other 
    h1.print();
    cout<<"Again printing h2 Data :--- "<<endl;
    
    h2.print();
    
// ___________ By defalut Copy constructor makes a shallow Copy : & in shallow copy we are accessing the same memory with two diff names ________________________________



    return 0;
}