#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++) {
     std::cout << arr[i] << std::endl;
    }
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
    int n=15;
  printArray(third,15);
  int fourth[10] = {1};
  int m =10;
   printArray(fourth,10);
    
      char ch[5];
  return 0;
  }



