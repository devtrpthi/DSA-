#include<iostream>
using namespace std;

void printArray(){

}
  int  main ()
  {
   //declare
    int number[15] ;

    cout << "Value at 1 index" << number[1] << endl;
    cout << endl << "brst" << endl;

  // initializing an array
      int second[3] ={5 ,7, 11};
      cout << "value at 2 index " << second[2] <<endl;

  int third[15] = {2,7};
    //print the array
  int n = 15;
  for (int i = 0; i < n; i++) {
   cout << third[i] << " " ;
  }
    int fourth[10] = {1};
  int m =10;
  for (int  i = 0; i < m; i++) {
   std::cout << fourth[i] << std::endl; 
  }
  
    return 0;
  }



