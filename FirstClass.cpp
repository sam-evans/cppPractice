//This program demonstrates a public class in c++ 

#include <iostream>
#include <vector>
using namespace std;

class FirstClass{
public: // Access specifier
    string test; // class variable member

    //class method member
    void printtest(){
        printf("%s", test.c_str()); // var.c_str() passes string to printf similar to python -- "String = {}".format(string)
    }
        

};
//main func has to be outside of class to compile
int main(){
    FirstClass obj1; // initialize class object
    obj1.test = "This is a test"; //assign string to class variable
    obj1.printtest(); //call class method
    return 0;
    
}