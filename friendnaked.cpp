#include<iostream>
using namespace std;


class demo
{


 public:
 int i;

private: 
int j;

protected:
int k;

public:
demo()
{

 i=10;
 j=20;
 k=30;

}
friend void fun();

};

void fun()        //naked function 
{

demo obj;
cout<<"value of i :"<<obj.i<<"\n";
cout<<"value of j:"<<obj.j<<"\n";
cout<<"value of k:"<<obj.k<<"\n";


}


int main()
{

fun();



    return 0;

}