#include<iostream>
using namespace std;

int sumarray(int arr[], int n){
  int s=0;
  for (int i = 0; i < n; i++) {
   s = s +arr[i];
  }
 return s;
}

int  main ()
{
 int a[100] , n;
  std::cout << "enter the size of array" << std::endl;
  cin >>  n ;
  for (int i = 0; i < n; i++) {
   std::cin >> a[i]; 
  }
  std::cout << "sum of array elements" <<sumarray(a,n) << std::endl;
  std::cout << "ended" << std::endl; 
  return 0;
}
