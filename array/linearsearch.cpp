#include<iostream>
using namespace std;

bool search(int arr[],int size,int key)
{
  for (int i = 0; i < size; i++) {
   if (arr[i] == key)
   {
   return 1; 
   } 
  }
 return 0;
}

int main ()
{
  int arr[10] ={5,7,-2,10,22,-2,0,5,22,1} ;

  //whether 1 present or not
  std::cout << "enter the number to be searched" << std::endl; 
  int key;
  cin >> key;

  bool found = search(arr, 10, key);
  
  if(found) {
    std::cout << "key is present" << std::endl;
  }
  else
  {
    std::cout << "key is absent" << std::endl;
  }
  return 0;
}
